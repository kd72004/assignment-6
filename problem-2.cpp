#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= (n * 2); ++i)
    {
        if (i % 2 == 1)
            sum = sum + i;
    }
    cout << sum << endl;
}