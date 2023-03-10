#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    int t, m, h, b;
    cin >> t;
    while (t--)
    {
        cin >> m >> h;
        b = m / (h * h);
        if (b <= 18)
        {
            cout << 1 << endl;
        }
        else if (b >= 19 && b <= 24)
        {
            cout << 2 << endl;
        }
        else if (b >= 25 && b <= 29)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 4 << endl;
        }
    }
    return 0;
}
