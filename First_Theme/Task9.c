#include <stdio.h>

int main()
{
    int digits1[10], digits2[10];
    for (int i=0;i<10;i++)
    {
        digits1[i]=0;
        digits2[i]=0;
    }
    int a,b, counter = 0,x;
    scanf("%d%d",&a,&b);
    while(a>0)
    {
        x = a%10;
        a/=10;
        digits1[x]+=1;
    }
    while(b>0)
    {
        x = b%10;
        b/=10;
        digits2[x]+=1;
    }
    for (int i=0;i<10;i++)
    {
        if ((digits1[i]>0)&&(digits2[i]>0))
            counter++;
    }
    printf("%d цифр входит в двоичную запись обоих чисел одновременно",counter);
    return 0;
}