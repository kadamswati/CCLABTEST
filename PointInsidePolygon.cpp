#include<iostream>
#include<conio.h>

#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)

using namespace std;

typedef struct {
   double x,y;
} Point;

int InsidePolygon(Point polygon[],int iNo,Point p)
{
  int iCounter = 0;
  int iCount;
  double intersection;
  Point p1,p2;

  p1 = polygon[0];
  for (iCount=1;iCount<=iNo;iCount++) {
    p2 = polygon[iCount % iNo];
    if (p.y > MIN(p1.y, p2.y)) {
      if (p.y <= MAX(p1.y, p2.y)) {
        if (p.x <= MAX(p1.x, p2.x)) {
          if (p1.y != p2.y) {
				intersection = (p.x - p1.x) * (p2.y - p1.y)/ (p2.x - p1.x)+ p1.y;
			    
				if(intersection < p.y)
					return 1;
				else
					return 0;
          }
        }
      }
    }
  }
}

int main()
{
	//Point polygon[]={{1,0},{8,3},{8,8},{1,5}};
	//Point polygon[]={{-3,2},{-2,-0.8},{0,1.2},{2.2,0},{2,4.5}};
	Point polygon[]={{9,1},{4,3},{2,7},{8,2},{3,6}};
	Point p1={2,6};
	int iNum=4;
	int iCounter=0;

	iCounter= InsidePolygon(polygon,iNum,p1);

	if(iCounter==1)
		cout<<"Point is Inside Polygon";
	else
		cout<<"Point is Outside Polygon";
	getch();
	return 0;
}