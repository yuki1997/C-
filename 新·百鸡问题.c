/*�°ټ����⡣��С�ڵ���nԪȥ��100ֻ������5Ԫ/ֻ��С��3Ԫ/ֻ,����1/3Ԫÿ
ֻ��һ��С�����ֱ��Ϊxֻ,yֻ,zֻ��������x,y,z���п��ܽ⡣ ���룺n�������
����ÿ������,�����x,y,z���п��н⣬����x��y��z���������˳�������*/
#include<stdio.h>
int main()
{
    int n;
    int chicken,cook,littlechicken;
    scanf("%d",&n);
    for(chicken = 0;chicken <= 100;chicken++){
      for(cook = 0;cook <= 100;cook++){
        littlechicken = 100 - chicken - cook;
        if(chicken*5+cook*3+littlechicken/3==n){
          if(chicken < cook < littlechicken)
            printf("chicken:%d cook:%d littlechicken:%d\n",chicken,cook,littlechicken);
          }
      }
    }
    return 0;
}
