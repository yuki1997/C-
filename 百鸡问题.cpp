/*�°ټ����⡣��С�ڵ���nԪȥ��100ֻ������5Ԫ/ֻ��С��3Ԫ/ֻ,����1/3Ԫÿֻ��
һ��С�����ֱ��Ϊxֻ,yֻ,zֻ��������x,y,z���п��ܽ⡣
 ���룺n�����������ÿ������,�����x,y,z���п��н⣬
 ����x��y��z���������˳�����*/
#include<stdio.h>
int fun( )
{
	int cook,hen,chicken,n;
	scanf("%d",&n);
	for(cook = 0;cook <= n/5;cook++)
		for(hen = 0;hen <= n/3;hen++){
				chicken = 100 - hen - cook;
				if(5*cook+3*hen+chicken/3.0 == n){
					printf("cook:%d hen:%d chicken:%d\n",cook,hen,chicken);
			}
		}
 }
 int main( )
 {
 	fun( );
 	return 0;
  } 
