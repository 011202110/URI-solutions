#include<stdio.h>
void main()
{
    long a[5],i,max;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        max=a[0];

        for(i=1;i<5;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
    printf("%d ",max);
    }
}
