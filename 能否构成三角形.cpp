/*�Ƿ񹹳������Ρ�����������ֵ���ж������Ƿ񹹳������Ρ����1��ʾ�ܹ��������Σ����0��ʾ���ܹ��������Ρ�*/
#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
