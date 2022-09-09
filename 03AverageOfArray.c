#include<stdio.h>
void main()
{
    int i,j,n,a[100],sum=0;
    float av;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    av=(float)(sum)/n;
    printf("Average of the array element is %f",av);
}
