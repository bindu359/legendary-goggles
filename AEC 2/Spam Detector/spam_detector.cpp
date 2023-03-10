#include<iostream>
using namespace std;
int main()
{
    int n,i,following,followers,m;

    cout<<"Enter the number of accounts : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"Enter Followers : ";
        cin>>followers;
        cout<<"Enter Following : ";
        cin>>following;
        if(followers*10>following)
        cout<<"The Following account is a spam."<<endl;
        else
        cout<<"The Following account is not a spam."<<endl;
        cout<<"---------------------------------------"<<endl;
    }
    return 0;
}