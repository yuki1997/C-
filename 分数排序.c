// top n�����ĳ�ο��ԣ�������m����ǰn��n<=m�����ĳɼ������������������m��n��Ϊ0ʱ����������� ���룺��һ����������m��n���ڶ������m���ɼ���
//�������һ�������n���ɼ������򣩣��ɼ�֮����һ���ո�ָ���
#include<stdio.h>
int main()
{
  int m,n,temp,i;
  scanf("%d%d",&m,&n);
  int a[m];
  int max = a[0];
  int min = a[0];
  for(i = 0;i < m;i++)
    scanf("%d",&a[i]);
  for(i = 0;i < m;i++)
    printf("%d ",a[i]);
  printf("\n");
  for(i = 1;i < m;i++){
    if(max < a[i]){
      temp = max;
      max = a[i];
      a[i] = temp;
    if(min > a[i]){
      temp = min;
      min = a[i];
      a[i] = temp;
    }
    }
  }
  for(i = 0;i < n;i++)
    printf("%d ",a[i]);
  printf("\n");
}
