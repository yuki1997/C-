#include<stdio.h> 
#include<math.h>
/* 
int main( )
{
	int i;
	int x = 0;
	for(i = 100;i <= 999;i++)
	{
			
		if(i % 3 == 0)//�ж� 
		{
			printf("%d",i);
			++x;
			if(x % 20 == 0)//���� ��ÿ20��һ�У� 
				printf("\n");
			else 
				printf(",");	
			
		}
	}
}

int main()
{
    int i, j;
    int count = 0;
    for (i = 101; i <= 999; i++)
    {
        int flag = 1;
        for (j = 2; j <= i - 1; j++)
        {
            if (i%j == 0) //�������������Ӧ��ֱ������ѭ����������һ��i
            {
                flag=0; //�����ñ�־Ϊ0
                break;
            }            
        }
        if (flag==1)  //��ѭ��֮���жϱ�־�������break�����ģ��϶�flag = 0������������
        {
            count++;
            printf("%d", i);
            if (count % 20 == 0)
            {
                printf("\n");
            }
            if(count %20 != 0)
            {
            	printf(",");
			}
        }        
    }
    return 0;
}
*/

int main( )
{
	int n=1;
	float temp;
	float sum=0;
	do
	{
		temp=(float)1/(2*n-1);
		if(n%2==1)
			sum+=temp;
		else
			sum-=temp;
		n++;
	}while(temp>=0.00001);
	printf("Pi=%f\n",sum*4);
}
