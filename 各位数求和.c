//[DAY 4]������͡�����һ������n���ֱ����������λ�ϵ���ֵ֮�ͼ���ƽ�����ĸ�����λ�ϵ���ֵ֮�͡����磺���룺7�������7  13
#include<stdio.h>
int f(int n)
{
  int x = n*n;
  int sum=0;
  while(x > 0){
      sum += x%10;
      x = x/10;
    }
  return sum;
}
int main()
{
  int x;
  scanf("%d",&x);
  printf("%d\n",f(x));
  return 0;
}
