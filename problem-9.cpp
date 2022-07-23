#include <bits/stdc++.h>
using namespace std;

int main()
{
        int x, y;
    cin >> x;
    cin >> y;
    for (int i = 1; i <= x * y; ++i)
    {
        if (i % x == 0 && i % y == 0)
        {
            cout << i << endl;
            break;
        }
    }
}