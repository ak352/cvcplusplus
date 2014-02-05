#include "pic.h"
#include <iostream>

Pic::Pic(char * filename)
{
  if(filename)
    {
      this->filename = std::string(filename);
      this->img = cv::imread(this->filename);
      keypoints_clustered = 0;
    }
}

void Pic::Draw()
{
  cv::namedWindow("here");
  while(1)
    {
      cv::imshow("here", this->img);
      int h = cv::waitKey(10);
      if(h==0x1b)
	{
	  std::cout << "Esc pressed...\n";
	  break;
	}
    }
}

void Pic::DrawSurf()
{
  for(std::vector<cv::KeyPoint>::iterator it = keypoints.begin(); it!=keypoints.end(); it++)
    cv::circle(img, it->pt, it->size/3, cv::Scalar(0,255,0)); 
  Draw();
 
}


void Pic::Surf()
{
  cv::Mat surf_img;
  cv::cvtColor(img, surf_img, 7); 
  cv::SURF surfer(0,500,5,1);
  surfer(surf_img, std::vector<int>(),keypoints, descriptors);
  
}
