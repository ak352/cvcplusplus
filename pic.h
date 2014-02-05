#include <opencv2/opencv.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <vector>
#include <iostream>
#include <string>


class Pic
{
 private:
  std::string filename;
  std::vector<cv::KeyPoint> keypoints;
  std::vector<long> descriptors;
  std::vector<cv::Point2f> positions;
  std::vector<float> scale;
  cv::Mat img;
  bool keypoints_clustered;

 public:
  Pic(char * filename = NULL);
  void Surf();
  void ClassifySurf(int num_of_clusters);
  void Draw();
  void DrawSurf();
  void DrawEdges();
};


