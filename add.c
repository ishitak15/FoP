#include<stdio.h>
void main()
{   int i;
    int a[3],b[3],c[3];
    printf("elter array elements");
    for(i=0 ;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elter array elements");
    for(i=0 ;i<=3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0 ;i<=3;i++)
    {
         c[i]=a[i]+b[i];
    }
    for(i=0 ;i<=3;i++)
    {
         printf("%d\n",c[i]);
    }


}