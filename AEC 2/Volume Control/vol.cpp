#include <iostream>
using namespace std;
int main()
{
    int m=0,vol=0,temp=0;
        cout<<"1) Press 1 to start "<<endl;
        cout<<"2) Press 0 to Exit "<<endl;
        cout<<"Choose Your Option : ";
        cin>>m;
    while(m!=0)
    {
        cout << "\033[2J\033[1;1H";
        cout<<"---------------------------------------"<<endl;
        cout<<"Current Volume = "<<vol<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"1) Increase the Volume"<<endl;
        cout<<"2) Decrease the volume"<<endl;
        cout<<"3) Exit"<<endl;
        cout<<"Choose Your Option : ";
        cin>>m;
        cout<<"---------------------------------------"<<endl;
        cout << "\033[2J\033[1;1H";
        
        switch(m)
        {
            case 1:
                cout<<"Enter how much volume should increase : ";
                cin>>temp;
                vol=vol+temp;
                break;
            case 2:
            
                cout<<"Enter how much volume should decrease : ";
                cin>>temp;
                vol=vol-temp;
                break;
            
            default:
            {
                exit(0);
            }
        }
    }
    return 0;
}