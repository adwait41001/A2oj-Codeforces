#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,r,b,g;
    while(cin>>n>>m)
    {
        r = n*2/m;
        if(n*2%m)r++;
        g = n*5/m;
        if(n*5%m)g++;
        b = n*8/m;
        if(n*8%m)b++;
        cout<<r+b+g<<endl;
    }
}