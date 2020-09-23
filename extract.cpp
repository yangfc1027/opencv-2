#include <extract.h>

/*该程序用于提取图像某区域*/
/*Rect函数的使用：Rect(x,y,length,height)*/

void Extract::fun1(Mat img) {
	//提取区域
	Mat imgROI;
	imgROI = img(Rect(80, 80, 70, 70));
	imshow("ROI区域", imgROI);
	waitKey(0);

	//把区域标出来
	rectangle(img, Rect(80, 80, 70, 70), Scalar(255,0,0), 2);
	imshow("ROI", img);
	waitKey(0);
}
