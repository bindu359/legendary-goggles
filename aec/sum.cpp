//Write a C++ program to find the sum of n natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of n natural numbers is: " << sum << endl;
    return 0;
}