/*��������������������ֵ*/
#include<stdio.h>
int main()
{
	int a[3];
	int i,j;
	int t;
	for(i = 0;i < 3;i++)
		scanf("%d",&a[i]);
	t = a[0];
	for(i = 1;i < 3;i++)
		{
			if(a[i] > t)
				t = a[i];
		}
	printf("%d\n",t);
}
