//
//  main.cpp
//  opencv_c++
//
//  Created by 一肖 on 2020/6/21.
//  Copyright © 2020 sean. All rights reserved.
//


#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

int main()
{
  // read image
  // IMREAD_UNCHANGED (<0) loads the image as is (including the alpha channel if present)
  // IMREAD_GRAYSCALE ( 0) loads the image as an intensity one
  // IMREAD_COLOR (>0) loads the image in the RGB format
  cv::Mat img = cv::imread("hand.jpeg", cv::IMREAD_COLOR);
    
  std::cout << img.rows << ", " << img.cols << ", " << img.size << "." << std::endl;

  // output image
  // WINDOW_AUTOSIZE is the only supported one if you do not use the Qt backend.
  // In this case the window size will take up the size of the image it shows. No resize permitted!
  // WINDOW_NORMAL on Qt you may use this to allow window resize. The image will resize itself according to the current window size.
  // By using the | operator you also need to specify if you would like the image to keep its aspect ratio (WINDOW_KEEPRATIO) or not (WINDOW_FREERATIO).
  cv::namedWindow( "Display window", cv::WINDOW_NORMAL );
    
  // Specify the OpenCV window name to update and the image to use during this operation.
  cv::imshow("Display window", img);
   
  //the cv::waitKey function whose only parameter is just how long should it wait for a user input (measured in milliseconds). Zero means to wait forever.
  cv::waitKey(0);
  cv::destroyAllWindows();

  std::cout << " end " << std::endl;
  return 0;
}


