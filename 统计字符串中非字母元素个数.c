/*4.	[DAY 4]�ַ�ͳ�ơ�����һ���ַ���������С��200���������ĸ�ַ��ĸ��������磺���룺aB.+.2C:w   �����5*/
#include<stdio.h>
#include<string.h>
int main( )
{
    char s[200];
    gets(s);
    int i,
        cnt = 0;
    for(i = 0;i < strlen(s);i++)
    {
      if((s[i] >= 'a'&& s[i] <= 'z') || (s[i] >= 'A' && s[i] < 'Z'))
        cnt++;
    }
    printf("%d\n",strlen(s)-cnt);
    return 0;
}
