#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
        int fact = 1;
    while (n--)
    {
        fact = fact * n;
    }
    cout << fact << endl;
}