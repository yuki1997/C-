//�����ַ������Ӵ����ֵĴ�����
#include<stdio.h>
#include<string.h>
int main(){
    char str[100]={0};
    char s[100]={0};
    printf("�������ַ�����");
    scanf("%s",str);
    printf("�������Ӵ���");
    scanf("%s",s);
    int len=strlen(str);
    int flag=strlen(s);
    int i=0,num=0;
    char *p=str;
    for(i=0;i<len+1-flag;i++){
        if(!strncmp(p,s,flag))
            num++;
        p++;
    }
    printf("%d\n",num);
    return 0;
}
