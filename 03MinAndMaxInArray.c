#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        }
    }
    printf("Min=%d and Max=%d",a[0],a[n]);
    
}
