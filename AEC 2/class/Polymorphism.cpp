//Example for polymorphism in C++
#include<iostream>
using namespace std;
class A
{
    public:
    int a=10 ,b=20;
};
class B:public A
{
    public:
    int add()
    {
        int c;
        c=a+b;
        cout<<"Sum is "<<c<<endl;
        return c;
    }
};
class C:public B
{
    public:
    void add()
    {
        int l;
        l=a*b;
        cout<<"Product is "<<l<<endl;
    }
};
int main()
{
    C obj;
    obj.B::add();
    obj.C::add();
    return 0;
}

