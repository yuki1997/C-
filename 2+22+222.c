/*[DAY 6] ��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�*/
#include <stdio.h>
int mul(int);
int main()
{
  int a, n, i, k; long sum = 0;
  printf("������a����Ӹ�����");
  scanf("%d%d", &a, &n);
  k = n;
  for (i=1; i<=n; i++){
    sum =  sum +k*a*(mul(i));
    k--;
  }
  printf("%d\n", sum);
  return 0;
}
int mul(int n)
{
  int i, m = 1;
  for (i=2; i<=n; i++){
    m = m*10;
  }
  return m;
}
