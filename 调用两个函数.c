/*3.	[DAY 8] ����һ������n����nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ��������һ��������1/1+1/3+...+1/n
(Ҫ�������������б������ú���ָ��)*/
#include<stdio.h>
double osh(int n)
{
  double sum=0;
  int i;
    for(i=2;i<=n;i+=2)
        sum+=1.0/i;
    return sum;
}
double jsh(int n)
{
  double sum=0;
  int i;
    for(i=1;i<=n;i+=2)
         sum+=1.0/i;
    return sum;
}
void main()
{
  int n;
  double (*p)(int);
  printf("������һ������ n��");
  scanf("%d",&n);
  if(n%2==0)
    p= osh;
  else
    p= jsh;
    printf("\n����: s = %lf\n",(*p)(n));
}
