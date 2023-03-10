
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int main()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        return 0;
    }
};
class B:public A
{
    public:
    int b;
    int main()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
        return 0;
    }
};
class C:public B
{
    public:
    int c;
    int main()
    {
        cout<<"Enter the value of c: ";
        cin>>c;
        return 0;
    }
};
int main()
{
    C obj;
    obj.A::main();
    obj.B::main();
    obj.C::main();
    cout<<"The value of a is: "<<obj.a<<endl;
    cout<<"The value of b is: "<<obj.b<<endl;
    cout<<"The value of c is: "<<obj.c<<endl;
    return 0;
}
