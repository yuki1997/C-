//��һ���������������ӡ����λ���� �� ��λ�ϵ�����֮��
#include<stdio.h>
int f(int n)
{
  int sum = 0;
  while(n > 0){
    sum+=n%10;
    printf("%d ",n%10);
    n = n/10;
    }
  printf("\n");
  return sum;
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",f(n));
}
