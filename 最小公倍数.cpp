#include<stdio.h>  
int main()  
{  
    int x, y, z, m, n;  
    scanf("%d%d", &x, &y);  
    m = x, n = y;  
    while (y != 0)  
    {  
        z = x%y;  
        x = y;  
        y = z;  
    }  
    printf("���Լ����: %d\n", x);  
    printf("��С��������: %d\n", m*n / x);  
    return 0;  
}  
