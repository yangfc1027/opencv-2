#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <extract.h>
#include <vector>
#include <cassert>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	//读取原图
	Mat srcImage = imread("F:/Cpp_and_Opencv/imgs/1Lena.jpg");
	if (!srcImage.data) {
		cout << "读取图片失败" << endl;
		return -1;
	}

	//Extract et;
	//et.fun1(srcImage);

	/*通道拆分与通道合并*/
	Mat img_Blue, img_Green, img_Red;
	vector<Mat> channels;

	//拆分
	split(srcImage, channels);
	img_Blue = channels.at(0);
	img_Green = channels.at(1);
	img_Red = channels.at(2);
	imshow("Blue", img_Blue);
	imshow("Green", img_Green);
	imshow("Red", img_Red);
	waitKey(0);

	//合并
	Mat MergeImage;
	channels.at(0) = img_Red;
	channels.at(1) = img_Green;
	channels.at(2) = img_Blue;
	merge(channels, MergeImage);
	imshow("Merge", MergeImage);
	waitKey(0);
	
	return 0;

}