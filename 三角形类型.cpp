/*�����ж����������͡�����������ֵ����֤һ�����Թ��������Σ����жϸ������ε����ͣ�ֱ�������Ρ���������Ρ��۽������Σ���*/
#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b&&a==c&&b==c)
			printf("�ȱ�������\n");
		else if((a == b||a == c||b == c)&&(a!=b||b!=c||a!=c))
			printf("����������\n");
		else
			printf("һ��������\n");
	}
}
