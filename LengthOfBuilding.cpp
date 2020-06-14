#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<limits.h>

using namespace std;

void LengthBuilding(int Arr[4][2],int iNo,int Source[2])
{
	int iCounter1,iCounter2,iCounter3,l1,l2;
	float TotalLen=0.0;

	for(iCounter1=0;iCounter1<iNo;iCounter1++)
	{
		for(iCounter2=0;iCounter2<4;iCounter2++)
		{
			for(iCounter3=0;iCounter3<2;iCounter3++)
			{
				if(Arr[iCounter2][iCounter3]==Arr[iCounter2+1][iCounter3])
				{
					l1=abs(Arr[iCounter2][iCounter3+1]) - abs(Arr[iCounter2+1][iCounter3+1]);
				}
				if(Arr[iCounter2+1][iCounter3+1]==Arr[iCounter2+2][iCounter3+1])
				{
					l2=abs(Arr[iCounter2+1][iCounter3]) - abs(Arr[iCounter2+2][iCounter3]);
				}
			}
		}
	}

	TotalLen=l1+l2;
	cout<<"Total length of building is:"<< TotalLen;
}

int main()
{
	int iNo;
	cout<<"Enter number of buildings:";
	cin>>iNo;

	int pSource[]={1,1};
	int iCounter1,iCounter2,iCounter3;

	signed int iArr[4][2];

	cout<<"Enter array elements:"<<endl;

	for(iCounter1=0;iCounter1<iNo;iCounter1++)
	{
	for(iCounter2=0;iCounter2<4;iCounter2++)
	{
		for(iCounter3=0;iCounter3<2;iCounter3++)
		{
			cin>>iArr[iCounter2][iCounter3];
		}
	}
	}

	for(iCounter2=0;iCounter2<4;iCounter2++)
	{
		for(iCounter3=0;iCounter3<2;iCounter3++)
		{
		cout<<"\t"<<iArr[iCounter2][iCounter3];
		}
	}
	
	printf("\n");

   LengthBuilding(iArr,iNo,pSource);

	getch();
	return 0;
}