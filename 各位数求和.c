//[DAY 4]������͡�����һ������n���ֱ����������λ�ϵ���ֵ֮�ͼ���ƽ�����ĸ�����λ�ϵ���ֵ֮�͡����磺���룺7�������7  13
#include<stdio.h>
int f(int n)
{
  if(n>=10)
    f(n/10);
  while(n > 10){
    printf("%d ",n%10);
    n = n%10;
  }
  return n%10;
}
int main( )
{
  int n;
  scanf("%d",&n);
  f(n);
  //printf("%d %d\n", n,f(n));
  return 0;
}
