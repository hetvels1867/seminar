#include <stdio.h>
#include<math.h>

int main()

{
    int n,var,sum=0,count=0,r;
    printf("enter your number");
    scanf("%d" ,&n);
    var=n;
    while(var!=0)
    {
        
        var=var/10;
        count++;
    }
    var=n;
    while(var>0)
    {
        r=var%10;
        sum=sum+pow(r,count);
        var=var/10;
    }
    if (n == sum)
    {
        printf(" %d is armstrong",n);

    }
    else
    {
        printf("%d is not an armstrong",n);
    }
    return 0;

}