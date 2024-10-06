#include <stdio.h>
void bubble_sort(int a[],int i)
{
    int k;
    for(k=0;k<i;k++)
      if(a[k]>a[k+1])
        {
            a[k]=a[k]+a[k+1];
            a[k+1]=a[k]-a[k+1];
            a[k]=a[k]-a[k+1];
        }   
}
void main()
{
    printf("Please input 8 munbers:");
    int n[8];
    int m = 8;
    scanf("%d",&n);
    bubble_sort(n,m);

    printf("\nAfter sorting:");
    printf("%d",n);
}