/*����ת�á�����һ��N*N�ľ���2<=N<=10��������ת�ú������Ҫ�󣺲���ʹ���κ�����(�͵�����)�����룺��һ��������n����������n��ÿ������n������   ��������ú��n*n�ľ���*/
#include <stdio.h>
int main(void)
{
     int n,i,j,t,a[100][100];
  scanf("%d",&n);
     for(i=0;i<n;i++)
          for(j=0;j<n;j++)
               scanf("%d", &a[i][j]);

          for(i=0;i<n;i++)
              for(j=0;j<n;j++)
                  if(i<=j){
                      t=a[i][j];
                      a[i][j]=a[j][i];
                      a[j][i]=t;}
      for(i=0;i<=n-1;i++)
      {
       for(j=0;j<=n-1;j++)
        printf("%d  ",a[i][j]);
       printf("\n");
      }
      return 0;
}
