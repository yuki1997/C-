/*��Լ���͹���������������������
������ǵ����Լ������С������
����ͬһ����������м���һ���ո�ָ���*/
#include<stdio.h>
int main( )
{
	int a,b,r,m,n;
	scanf("%d%d",&a,&b);
	m = a;
	n = b;
	while(b)
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d %d\n",a,m*n/a);
	return 0;
}

