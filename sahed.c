#include<stdio.h>
int main()
{
    int n,i,count=0 ;
    printf("Enter The Number:");
    scanf("%d",&n);
    count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\nThe Number is %d",count);
    
    return 0;
}