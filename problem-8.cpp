#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i;
    cin >> n;
        if(n<=1)
    {
        cout<<"NO"<<endl;
    }
    for(i=2;i<=n-1;++i)
    {
        if(n%i==0)
        cout<<"NO"<<endl;
    }
    if(i==n)
    {
        cout<<"Yes"<<endl;
    }
}