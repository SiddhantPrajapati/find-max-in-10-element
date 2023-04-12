//find largest and smallest among 10 number swap min and max
#include<stdio.h>
void main()
{
    int max,a[10],i,min,temp;
    for(i=0;i<10;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<10;i++)
    {
       if(max<a[i+1])
       {
           max=a[i+1];
       }

    }
    for(i=0;i<10;i++)
    {
        if(min>a[i+1])
        {
            min=a[i+1];
        }
    }
    printf("\n the largest number is= %d",max);
    printf("\n the smallest number is= %d",min);
    printf("\n after swaping\n");
    {
        temp=min;
        min=max;
        max=temp;
    }
    printf("\n the largest number is= %d",max);
    printf("\n the smallest number is= %d",min);

}
