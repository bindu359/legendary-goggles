#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int ac,re,i;
    char r;
    string con1,con2,acc,rep,str,rev,rev1;

    cout<<"------------------------------------------------------"<<endl;
    
    cout<<"Enter String 1 : ";
    cin>>con1;
    cout<<"Enter String 2 : ";
    cin>>con2;
    cout<<"Concated both the Strings : "<<con1+con2<<endl;

    cout<<"------------------------------------------------------"<<endl;

    cout<<"Enter the String to be accesed : ";
    cin>>acc;
    cout<<"Enter Index to be accessed ? : ";
    cin>>ac;
    cout<<"Char is Index "<<ac<<" is "<<acc[ac]<<endl;

    cout<<"------------------------------------------------------"<<endl;

    cout<<"Enter the String : ";
    cin>>rep;
    cout<<"Enter Index to change char : ";
    cin>>re;
    cout<<"Enter the new char  : ";
    cin>>r;
    rep[re]=r;
    cout<<"New String after updating : "<<rep<<endl;
    
    cout<<"------------------------------------------------------"<<endl;

    cout<<"Enter the String : ";
    cin>>str;
    cout<<"Size of string is "<<str.size()<<endl;

    cout<<"------------------------------------------------------"<<endl;

    cout<<"Enter the String : ";
    cin>>rev;
    for ( i=rev.size()-1 ; i >= 0 ; i-- )
    {
        rev1.push_back(rev[i]);
    }
    cout<<"Revesered String is "<<rev1<<endl;

    cout<<"------------------------------------------------------"<<endl;

    return(0);
}