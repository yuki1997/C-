/*6.	����һ������n�������ż�����Ͱ�n����һ�룻�������������n��� 3*n+ 1�󿳵�һ�룬ֱ��������Ϊ1Ϊֹ���������Ҫ�����������ܽ�n�䵽1��ͬʱ��ʾÿһ���仯�Ĺ��̡�
��n=0ʱ��������*/
#include<stdio.h>
int f(int n)
{
  int steps = 0;
  while(n != 1){
    if(n % 2 == 0)
      n = n/2;
    else if(n % 2 != 0)
      n = (3*n+1)/2;
    printf("%d��%d\n",steps+,n);
    steps++;
    }
    return steps;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("���貽��Ϊ��%d\n",f(n));
  return 0;
}
