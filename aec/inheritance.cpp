#include <iostream>
using namespace std;
int main()
{
     float i,n,sum=0,a;
        printf("enter n");
        scanf("%f",&n);
        for(i=0;i<=n;i++)
        {
            sum=sum+(i*i);
           
        }
         printf("sum=%f",sum);
}