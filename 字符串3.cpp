/*�ַ�������洢������һ���ַ���������С��200����
���ַ������ú����������Ļ�ϡ�*/
#include<stdio.h>
#include<string.h>
int main( )
{
	char str1[200],str2[200];
	int i,j;
	gets(str1);
	int n = strlen(str1);
	i = 0;
	j = n-1;
	while(i < n){
		while(j >= 0){
			str2[j] = str1[i];
			i++;
			j--;
		}
	}
	puts(str1);
	puts(str2); 
 }
