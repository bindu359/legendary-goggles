#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t, N, M, K, c;
    cin >> t;
    while (t--)
    {
        cin >> N >> M >> K;
        c = K + N;
        if (c <= M)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}