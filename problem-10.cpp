#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
        cin>>n;
    int new_Num=0;
    while(n)
    {
        new_Num=new_Num*10+(n%10);
        n=n/10;
    }
    cout<<new_Num<<endl;
}