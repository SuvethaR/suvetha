#include<stdio.h>
void main()
{
    int i, j,s=0 a,b=0, n,rem, num[30];
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
    {
    scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++)
    {
    q=num[i];
    while(q!=0){
    b[i++]=q%2;
    q=q/2;
    num[i]=num[i++];
    }
    for(i=0;i<n;++i)
    {
    for(j=i+1;j<n;++j)
    {
    if(num[i]>num[j])
    {
    a=num[i];
    num[i]=num[j];
    num[j]=a;
    }
    }
    }
    printf("The numbers in array\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", num[i]);
}












