/*�ж����������͡�����������ֵ����֤һ�����Թ��������Σ����жϸ������ε����ͣ�ֱ�������Ρ���������Ρ��۽������Σ���*/
#include<stdio.h>
int main( )
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("ֱ��������\n");
		else if(a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b)
			printf("�۽�������\n");
		else if(a*a<b*b+c*c||b*b<a*a+c*c||c*c<a*a+b*b)
			printf("���������\n"); 
	}
	return 0;
 }
