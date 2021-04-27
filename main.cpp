#include <iostream>
#include <Config.h>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
    std::cout << "LPlateDetector " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;

    Mat image = imread("test.jpg", IMREAD_COLOR);

    if (!image.data){
        std::cout << "No image data" << std::endl;
        return -1;
    }

    namedWindow("Test img", WINDOW_AUTOSIZE);
    imshow("Test img", image);
   
    waitKey(0);
    return 0;
}