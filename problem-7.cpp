#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
        int count = 0;
    while (n)
    {
        n = n / 10;
        count++;
    }
    cout << count << "digits in a number" << endl;
}