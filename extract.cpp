#include <extract.h>

/*�ó���������ȡͼ��ĳ����*/
/*Rect������ʹ�ã�Rect(x,y,length,height)*/

void Extract::fun1(Mat img) {
	//��ȡ����
	Mat imgROI;
	imgROI = img(Rect(80, 80, 70, 70));
	imshow("ROI����", imgROI);
	waitKey(0);

	//����������
	rectangle(img, Rect(80, 80, 70, 70), Scalar(255,0,0), 2);
	imshow("ROI", img);
	waitKey(0);
}
