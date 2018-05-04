#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	Mat Gray;
	Mat Binary;
	Mat Rgb = imread("images/hand1.jpg");
	cvtColor(Rgb, Gray, CV_BGR2GRAY);
	threshold(Gray, Binary, 150, 200, THRESH_BINARY_INV | THRESH_OTSU);
	namedWindow("RGB", WINDOW_AUTOSIZE);
	namedWindow("Gray", WINDOW_AUTOSIZE);
	namedWindow("Binary", WINDOW_AUTOSIZE);
	
	imshow("RGB", Rgb);
	imshow("Gray", Gray);
	imshow("Binary", Binary);
	waitKey(0);
	destroyAllWindows();
	return 0;
}