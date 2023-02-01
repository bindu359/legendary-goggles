//write a c++ program to display sum of factorial of n natural numbers.
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
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    cout << "The sum of n natural numbers is: " << sum << endl;
    return 0;
}