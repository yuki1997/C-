/*1.	[DAY 4]������Ρ�����һ���߶�h��Ȼ������Ļ�����һ���ϵ�Ϊh����*�ŵĸ�����ʾ�����߶�ҲΪh����h�У������Σ����Ҳ���룩�������룺3���������������ͼ��
    ***
  *****
*******
*/
#include <stdio.h>
int main(){
    int h;
    while(scanf("%d",&h)==1){
        int maxl=h+2*(h-1);
        for(int i=1;i<=h;i++){
            for(int j=1;j<=maxl;j++){
                if(j<=maxl-h-2*(i-1)) printf(" ");
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
