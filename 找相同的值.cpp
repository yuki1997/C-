/*��ͬ����ֵ������һ����n��Ȼ������n����ֵ������ͬ��
������һ��ֵx�����x����������е������±�
����0��ʼ�������������������-1����*/
#include<stdio.h>
#define N 10
int main( )
{
	int n,a[N],count = 0;
	int i;
	scanf("%d",&n);
	for(i = 0;i < N;i++)
		scanf("%d",&a[i]);
	for(i = 0;i < N;i++)
	{
		if(n == a[i])
			printf("%d ",i);
		count++;
	}
	if(count == 0)
		printf("-1");
}

