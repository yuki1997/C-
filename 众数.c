/*3.	[DAY 6] ����������20������ÿ��������1-10֮�䣬����Щ���е��������������ǳ��ִ�����������
�������һ��������������������Ȩֵ��С����һ�������������룺5 1 5 10 3 5 3 4 10 6 8 3 6 5 10 7 10 2 6 2  �����5*/
#include <stdio.h>
int main()
{
    int a[50];
    int i,j,maxCount=0,index=0,nCount=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]==a[i])
                nCount++;
        }

        if(nCount>maxCount)
        {
            maxCount=nCount;
            index=i;
        }

        nCount=0;
    }
    printf("%d\n",a[index]);
}
