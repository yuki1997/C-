/*�������ĸ�������������N(N>1)���������ĸ�������ͬ����������Ҫ�ظ����㡣��120=2*2*2*3*5������5���������� ���룺N�� ������������ĸ���*/
#include <stdio.h>

  int main()
  {
    int n, count, i;
    scanf("%d",&n);
      count = 0;

      for (i = 2; i * i <= n; i ++) {
        if(n % i == 0) {
          while (n % i == 0) {
            count ++;
            n /= i;
          }
        }
      }

      if (n > 1) {
        count ++;
      }

    printf("%d\n", count);
    return 0;
  }
