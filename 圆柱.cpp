#include<stdio.h>
#define PI 3.14
int main( )
{
	double r,h,l,s,bs,v;
	scanf("%lf%lf",&r,&h);
	l = PI*r*2;
	s = PI*r*r;
	bs = s * 2 + l * h;
	v = s * h;
	printf("Բ���ܳ�Ϊ%.2lf��Բ�����Ϊ%.2lf,Բ���ı����Ϊ%.2lf,Բ�������Ϊ%.2lf\n",l,s,bs,v); 
}
