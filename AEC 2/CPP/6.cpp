#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t, x, y, z, sum, d, ld;
    cin >> t;
    while (t != 0)
    {
        cin >> x >> y >> z;
        if (x <= 3)
        {
            sum = x * y;
        }
        else
        {
            ld = x % 3;
            d = x / 3;
            if (ld != 0)
            {
                sum = (ld * y) + (d * 3 * y) + (d * z);
            }
            else
            {
                sum = (d * 3 * y) + ((d - 1) * z);
            }
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}