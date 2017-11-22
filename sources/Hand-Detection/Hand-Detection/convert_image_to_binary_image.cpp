#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	Mat Rgb;
	Mat Grey;
	Mat Binary;
	Rgb = imread("D:/Хмара/ЛНУ/3 курс/Курсова/Mouse-Control-using-Hand-Tracking/sources/Hand-Detection/hand.jpg");
	cvtColor(Rgb, Grey, CV_BGR2GRAY);
	threshold(Grey, Binary, 150, 200, THRESH_BINARY);
	namedWindow("RGB");
	namedWindow("Gray");
	namedWindow("Binary");
	imshow("RGB", Rgb);
	imshow("Gray", Grey);
	imshow("Binary", Binary);
	waitKey(0);
	destroyAllWindows();
	return 0;
}