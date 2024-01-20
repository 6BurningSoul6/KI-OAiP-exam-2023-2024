#include <stdio.h>

int max(int a, int b,int c)
{
    int max;
    max = a>b?a:b;
    max = max>c?max:c;
    return max;
}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = 0;
    for (int i=1;i<=max(a,b,c);i++)
    {
        if ((a%i==0)&&(b%i==0)&&(c%i==0))
            sum+=i;
    }
    printf("Сумма общих делителей: %d",sum);
}