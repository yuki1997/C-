#include <stdio.h>

#define ELEMNUM 5;


int getPermuStack(int n, int m)
{
if(n == 0)//�ݹ�߽�
return 1;
if(m == 0)//(n,0)����Ĵ���
return getPermuStack(n-1, 1);
return getPermuStack(n, m-1) + getPermuStack(n-1, m+1);
}


int main()
{
printf("The total count of stackout permutation is %d.", getPermuStack(5, 0));
return 0;
}

