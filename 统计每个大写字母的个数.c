/*��һ���ַ�ͳ�ơ�����һ���ַ���������С��200����ͳ��ÿ����д��ĸ�ĸ���������Ϊ0����ĸ�������������ÿ����ĸһ�У������磺����aB.+.2C:w   �����B:1
C:1*/
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int result[26];

	for (int i=0;i<26;i++){
		result[i]=0;
	}
	scanf("%s",a);
	int len=strlen(a);
	for (int j=0;j<len;j++){
		result[a[j]-'A']++;
	}
	for (int i=0;i<26;i++){
		if (result[i]>0)
		{
			printf("%c: ",'A'+i);
			printf("%d\n",result[i]);
		}
	}
	return 0;
}
