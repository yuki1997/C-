#include<stdio.h>
int main(void)
{

  int *p;//������һ��ָ��p�������ǣ�ָ�����ε�
        //�˴���*�������������������
  /*int a = 10;
  p = &a;//��ָ��p���и�ֵ�������˱���a�ĵ�ַ
  //(*p) = 5;

  printf("%d\n",*p);//�˴���*Ϊ�����õ�
  printf("%p %p\n",++p,&a);*/
  int a[20];//int 20[a]����
  int i;
  for(i = 0;i < 20;++i)
    a[i] = i;
  printf("%d\n",a[15]);
  //printf��"%d\n",15[a]);//�����
  p = &a[0];
  printf("%d\n",*(p+=15));
  //a[k] ==== *(p+k)
  //k[a] ==== *(k+p)

  //for(i = 0;i < 20;++i)
      //printf("%d\n",a[i]);
  //for(i = 0;i < 20;++i)
      //printf("%d\n", *(p+i));
    for(i = 0;i < 20;++i)
      printf("%d, %d\n",(*p)+i,*(p+i));
  return 0;


}
