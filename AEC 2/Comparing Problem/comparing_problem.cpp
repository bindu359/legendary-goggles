#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i,n,num;
    cout<<"Enter the value of n ";
    cin>>num;
    n=num;
    if(n<1 || n>=100)
    {
    for(i=0;i<n;i++)
    {
    cout<<i+1<<") Enter the price of 2 Chocolate :";
    cin>>a[i]>>b[i];
    if(a[i]<b[i])
    {
    cout<<"1st chocolate is Cheaper of Price "<<a[i]<<endl;
    }
    else if(a[i]>b[i])
    {
    cout<<"2nd chocolate is Cheaper of Price "<<b[i]<<endl;
    }
    else 
    {
    cout<<"Any Chocolate."<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
    }
    return 0;
    }
    else 
    cout<<"Invalid number of test cases..!!";
}