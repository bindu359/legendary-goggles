#include<iostream>
using namespace std;
int main()
{
    int j,i,n,a[10];
    cout<<"enter the value of n :";
    cin>>n;
    cout<<"enter the array elements. :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Array Elements are : "<<endl;
        for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}