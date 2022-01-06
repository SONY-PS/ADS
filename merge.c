#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],i,j,m,n,temp,k;
    printf("\n Enter the size of first array: ");
    scanf("%d",&m);
    printf("\n Enter the size of second array: ");
    scanf("%d",&n);
    printf("\n Enter the first sorted array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the second sorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i>=m)
    {
        while(j<n)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(j>=n)
    {
        while(i<m)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
printf("\n Merged form of given two array is: ");
    for(i=0;i<k;i++)
    {
        printf("\t%d",c[i]);
    }
}
