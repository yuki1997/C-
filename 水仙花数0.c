/*打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。*/
#include<stdio.h>
int main( )
{
	int i,j,k;
	for(i = 1;i < 10;i++){
		for(j = 0;j < 10;j++){
			for(k = 0;k < 10;k++)
				if(i*i*i+j*j*j+k*k*k == i*100+j*10+k)
					printf("%d%d%d\n",i,j,k);
		}
	}

	return 0;
}
