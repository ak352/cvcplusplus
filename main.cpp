#include "pic.h"

int main(int argc, char * argv[])
{
  if(argc>1)
    {
      Pic pic1(argv[1]);
      //pic1.Draw();
      pic1.Surf();
      pic1.DrawSurf();
    }
      
  
}
