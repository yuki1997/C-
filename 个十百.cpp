/*����һ��������3λ�������������ҽ������ĸ�λ��ֵ����Ӧ��Ӣ���������Ļ�ϣ�Ӣ��֮���ÿո�ָ������磬����104�����one zero four*/
#include <stdio.h>
void fun(int n){
	if(n>=10) 
  		fun(n/10);
	switch(n%10) {
    	case 0:printf("zero ");break;
    	case 1:printf("one ");break;
    	case 2:printf("two ");break;
    	case 3:printf("three ");break;
    	case 4:printf("four ");break;
    	case 5:printf("five ");break;
    	case 6:printf("six ");break;
    	case 7:printf("seven ");break;
    	case 8:printf("eight ");break;
    	case 9:printf("nine ");break;
  	}
}
int main(){
	int n;
	scanf("%d",&n);
	fun(n);
	printf("\n");
} 
