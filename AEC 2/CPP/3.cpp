#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, rem, sum = 0;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
