#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, current = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = n / 2; i >= 0; i--)
        {
            if (a[i] != a[n / 2])
            {
                current = i + 1;
                break;
            }
        }
        cout << n - current << endl;
    }
    return 0;
}