
//#include <GL/glut.h>
//#include <fstream>
//
//typedef float Color[3];
//
////��ȡ���ص����ɫ
//void getpixel(GLint x, GLint y, Color color) {
//    glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, color);
//}
//
////���㺯��
//void setpixel(GLint x, GLint y) {
//    glBegin(GL_POINTS);
//    glVertex2f(x, y);
//    glEnd();
//}
//
////�Ƚ���ɫ�Ƿ����
//int compareColor(Color color1, Color color2) {
//    if (color1[0] != color2[0] || color1[1] != color2[1] || color1[2] != color2[2]) { return 0; }
//    else { return 1; }
//}
//
//void boundaryFill4(int x, int y, Color fillColor, Color boarderColor) {
//    Color interiorColor;
//    getpixel(x, y, interiorColor);
//    if (compareColor(interiorColor, fillColor) == 0 && compareColor(interiorColor, boarderColor) == 0) {
//        setpixel(x, y);
//        boundaryFill4(x + 1, y, fillColor, boarderColor);
//        boundaryFill4(x - 1, y, fillColor, boarderColor);
//        boundaryFill4(x, y + 1, fillColor, boarderColor);
//        boundaryFill4(x, y - 1, fillColor, boarderColor);
//    }
//
//}
//
//void boundaryFill8(int x, int  y, Color fillColor, Color boarderColor) {
//    Color interiorColor, a, b, c, d;
//    getpixel(x, y, interiorColor);
//    getpixel(x + 1, y - 1, a);
//    getpixel(x, y - 1, b);
//    getpixel(x, y + 1, c);
//    getpixel(x - 1, y, d);
//    int i = 0;
//    if (compareColor(a, boarderColor) == 1) i++;
//    if (compareColor(b, boarderColor) == 1) i++;
//    if (compareColor(c, boarderColor) == 1) i++;
//    if (compareColor(d, boarderColor) == 1) i++;
//    if (i <= 1) {
//        if (compareColor(interiorColor, fillColor) == 0 && compareColor(interiorColor, boarderColor) == 0) {
//            setpixel(x, y);
//            boundaryFill8(x + 1, y, fillColor, boarderColor);
//            boundaryFill8(x, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y, fillColor, boarderColor);
//            boundaryFill8(x, y + 1, fillColor, boarderColor);
//            boundaryFill8(x + 1, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y + 1, fillColor, boarderColor);
//            boundaryFill8(x + 1, y + 1, fillColor, boarderColor);
//
//        }
//    }
//
//}
//
//void polygon() {
//    glBegin(GL_LINE_LOOP);
//    glLineWidth(5);
//    //�˴��޸����꣬���ƶ����
//    glVertex2f(100, 100);
//    glVertex2f(100, 200);
//    //glVertex2f(200, 200);
//    glVertex2f(200, 100);
//    glEnd();
//}
//
//void display(void) {
//    Color fillColor = {0.0, 1.0, 1.0};//�����ɫ ��ɫ
//    Color boarderColor = {0.0, 1.0, 0.0};//�߽���ɫ ��ɫ
//    glClear(GL_COLOR_BUFFER_BIT);
//    glViewport(0, 0, 500, 500);
//    glColor3fv(boarderColor);
//    polygon();
//    glColor3fv(fillColor);
//    //boundaryFill4(150, 150, fillColor, boarderColor);//����������꼰��ɫ
//    boundaryFill8(110, 110, fillColor, boarderColor);
//    glFlush();
//}
//
//int main(int argc, char **argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RED);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("BoundaryFill1");
//
//    glClearColor(1, 1, 1, 0.0);
//   glMatrixMode(GL_PROJECTION);//ͶӰģ��
//    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//
//}
//#include <GL/glut.h>
//#include <windows.h>
//const int POINTNUM = 10;      //����ε���.
//
///******����ṹ�����ڻ��Ա߱�AET���±߱�NET***********************************/
//typedef struct XET
//{
//	float x;
//	float dx, ymax;
//	XET* next;
//}AET, NET;
//
///******�����ṹ��point******************************************************/
//struct point
//{
//	float x;
//	float y;
//}
//polypoint[POINTNUM] = { 250,50,550,150,550,400,250,250,100,350,100,100,120,30 };//����ζ���
//
//void PolyScan()
//{
//	/******������ߵ��y����(ɨ�赽�˽���)****************************************/
//	int MaxY = 0;
//	int i;
//	for (i = 0; i < POINTNUM; i++)
//		if (polypoint[i].y > MaxY)
//			MaxY = polypoint[i].y;
//
//	/*******��ʼ��AET��***********************************************************/
//	AET *pAET = new AET;
//	pAET->next = NULL;
//
//	/******��ʼ��NET��************************************************************/
//	NET *pNET[1024];
//	for (i = 0; i <= MaxY; i++)
//	{
//		pNET[i] = new NET;
//		pNET[i]->next = NULL;
//	}
//	glClear(GL_COLOR_BUFFER_BIT);        //��ֵ�Ĵ�����ʾ.  
//	glColor3f(0.0, 0.0, 0.0);             //����ֱ�ߵ���ɫ��ɫ
//	glBegin(GL_POINTS);
//	/******ɨ�貢����NET��*********************************************************/
//	for (i = 0; i <= MaxY; i++)
//	{
//		for (int j = 0; j < POINTNUM; j++)
//			if (polypoint[j].y == i)
//			{  //һ�����ǰ���һ�����γ�һ���߶Ρ�������ĵ�Ҳ�γ��߶�   
//				Sleep(10);
//				if (polypoint[(j - 1 + POINTNUM) % POINTNUM].y > polypoint[j].y)
//				{
//					NET *p = new NET;
//					p->x = polypoint[j].x;
//					p->ymax = polypoint[(j - 1 + POINTNUM) % POINTNUM].y;
//					p->dx = (polypoint[(j - 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j - 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//					p->next = pNET[i]->next;
//					pNET[i]->next = p;
//
//				}
//				if (polypoint[(j + 1 + POINTNUM) % POINTNUM].y > polypoint[j].y)
//				{
//					NET *p = new NET;
//					p->x = polypoint[j].x;
//					p->ymax = polypoint[(j + 1 + POINTNUM) % POINTNUM].y;
//					p->dx = (polypoint[(j + 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j + 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//					p->next = pNET[i]->next;
//					pNET[i]->next = p;
//				}
//			}
//	}
//	/******���������»��Ա߱�AET*****************************************************/
//	for (i = 0; i <= MaxY; i++)
//	{
//		//�����µĽ���x,����AET
//		NET *p = pAET->next;
//		while (p)
//		{
//			//Sleep(10);
//			p->x = p->x + p->dx;
//			p = p->next;
//		}
//		//���º���AET������*************************************************************/
//		   //�ϱ�����,���ٿ��ٿռ�
//		AET *tq = pAET;
//		p = pAET->next;
//		tq->next = NULL;
//		while (p)
//		{
//			while (tq->next && p->x >= tq->next->x)
//			{
//				tq = tq->next;
//				//Sleep(10);
//			}
//				
//			NET *s = p->next;
//			p->next = tq->next;
//			tq->next = p;
//			p = s;
//			tq = pAET;
//		}
//		//(�Ľ��㷨)�ȴ�AET����ɾ��ymax==i�Ľ��****************************************/
//		AET *q = pAET;
//		p = q->next;
//		while (p)
//		{
//			/*Sleep(10);*/
//			if (p->ymax == i)
//			{
//				q->next = p->next;
//				delete p;
//				p = q->next;
//			}
//			else
//			{
//				q = q->next;
//				p = q->next;
//			}
//		}
//		//��NET�е��µ�����AET,���ò��뷨��Xֵ��������**********************************/
//		p = pNET[i]->next;
//		q = pAET;
//		while (p)
//		{
//			while (q->next && p->x >= q->next->x)
//				q = q->next;
//			NET *s = p->next;
//			p->next = q->next;
//			q->next = p;
//			p = s;
//			q = pAET;
//			//Sleep(1);
//		}
//		/******��������ɫ***************************************************************/
//
//		p = pAET->next;
//		while (p && p->next)
//		{
//			for (float j = p->x; j <= p->next->x; j++) {
//				glVertex2i(static_cast<int>(j), i);
//				//Sleep(1);
//			}
//			p = p->next->next;//���Ƕ˵����
//			//Sleep(1);
//		}
//
//		//Sleep(10);
//	}
//	glEnd();
//	glFlush();
//}
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	//����ı�����ɫ����Ϊ��ɫ
//	glMatrixMode(GL_PROJECTION);
//	gluOrtho2D(0.0, 600.0, 0.0, 450.0);
//}
//
//void main(int argc, char* argv)
//{
//	glutInit(&argc, &argv);                //I��ʼ�� GLUT.
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    //������ʾģʽ�����������ʹ��RGBģ��
//	glutInitWindowPosition(50, 100);        //���ô���Ķ��������λ��
//	glutInitWindowSize(400, 300);        //���ô���ĸ߶ȺͿ��
//	glutCreateWindow("An Example OpenGL Program");    //������ʾ����
//
//	init();                                //���ó�ʼ������
//	glutDisplayFunc(PolyScan);        //ͼ�εĶ��崫�ݸ���window.
//	glutMainLoop();                        //���е�ͼ�κ͵ȴ�
//}
#include <cmath>
#include <stack>
#include <gl/glut.h>
#include <iostream>
using namespace std;

#define PI 3.14

struct Pos
{
	int x;
	int y;
	Pos(int mx, int my) :x(mx), y(my) {};
	Pos() :x(0), y(0) {};
};

stack<Pos> s;
int a[24][24] = { 0 };

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);//����ͶӰ����
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);//��ά�Ӿ�����
	glPointSize(12.0f);
}
// ������
void Drawtri(int x, int y, int color)
{
	double n = 200;//�ֶ���
	float R = 10;//�뾶
	int i;
	if (color == 1)
	{
		glColor3f(1.0, 0.0, 0.0);
	}
	else if (color == 2)
	{
		glColor3f(0.0, 1.0, 0.0);
	}
	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	for (i = 0; i <= n; i++)
		glVertex2f(R*cos(2 * PI / n * i) + x, R*sin(2 * PI / n * i) + y);
	glEnd();
	glPopMatrix();
}

// ���Ƹ���
void playMap()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	for (int i = 0; i < 600; i += 25)
	{
		glVertex2f(i, 0);
		glVertex2f(i, 600);
	}
	for (int j = 0; j < 600; j += 25)
	{
		glVertex2f(0, j);
		glVertex2f(600, j);
	}
	glEnd();
	for (int k = 0; k < 24; k++)
	{
		for (int l = 0; l < 24; l++)
		{
			if (a[k][l] == 1)
			{
				Drawtri(k * 25 + 12, l * 25 + 12, 1);
			}
			else if (a[k][l] == 2)
			{
				Drawtri(k * 25 + 12, l * 25 + 12, 2);
			}
		}
	}
}

// ������������ ������ͨ��
void DfsFill(int x, int y)
{
	if (x < 0 || y < 0 || x>23 || y>23)
	{
		return;
	}
	if (a[x][y] == 0)
	{
		a[x][y] = 2;
		DfsFill(x - 1, y);
		DfsFill(x + 1, y);
		DfsFill(x, y - 1);
		DfsFill(x, y + 1);
	}
}

// ɨ������������㷨������ͨ��
void ScanFill(int x, int y)
{
	if (a[x][y] != 0)
	{
		return;
	}
	Pos first(x, y);
	s.push(first);
	while (!s.empty())
	{
		int rightX = 0;
		int leftX = 0;
		Pos cur = s.top();
		s.pop();
		a[cur.x][cur.y] = 2;
		// ������ǰ��
		for (int i = 1; i < 24; i++)
		{
			if (cur.x + i < 24)
			{
				if (a[cur.x + i][cur.y] == 0)
					a[cur.x + i][cur.y] = 2;
				else
				{
					rightX = cur.x + i - 1;
					break;
				}
			}
			if (i == 23)
			{
				rightX = 23;
			}
		}
		for (int i = 1; i < 24; i++)
		{
			if (cur.x - i > -1)
			{
				if (a[cur.x - i][cur.y] == 0)
					a[cur.x - i][cur.y] = 2;
				else
				{
					leftX = cur.x - i + 1;
					break;
				}
			}
			if (i == 0)
			{
				leftX = 0;
			}
		}

		cout << leftX << "," << rightX << endl;

		// �ж�����
		int upRightX = -1;
		for (int i = leftX; i <= rightX; i++)
		{
			if (a[i][cur.y + 1] == 0 && cur.y + 1 < 24)
			{
				upRightX = i;
			}
		}
		if (upRightX != -1)
		{
			Pos temPos(upRightX, cur.y + 1);
			s.push(temPos);
		}

		// �ж�����
		int downRightX = -1;
		for (int i = leftX; i <= rightX; i++)
		{
			if (a[i][cur.y - 1] == 0 && cur.y - 1 >= 0)
			{
				downRightX = i;
			}
		}
		if (downRightX != -1)
		{
			Pos temPos(downRightX, cur.y - 1);
			s.push(temPos);
		}

	}
}

void displayFcn(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	playMap();
	glFlush();
}


void mouse(GLint button, GLint action, GLint x, GLint y)
{
	int curX, curY;
	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		curX = x / 25;
		curY = (600 - y) / 25;
		a[curX][curY] = 1;
		glutPostRedisplay();//�ػ洰��
	}
	if (button == GLUT_RIGHT_BUTTON && action == GLUT_DOWN)
	{
		curX = x / 25;
		curY = (600 - y) / 25;
		ScanFill(curX, curY);

		glutPostRedisplay();//�ػ洰��
	}
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(300, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("mouse");

	init();
	glutDisplayFunc(displayFcn);

	glutMouseFunc(mouse);

	glutMainLoop();
}