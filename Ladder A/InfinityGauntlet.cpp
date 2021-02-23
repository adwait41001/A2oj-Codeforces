#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    map<string,string> mp;

    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";

    cin>>n;

    m=6-n;
    cout<<m<<endl;

    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]="khan";
    }

    auto itr=mp.begin();
    while(itr!=mp.end())
    {
        if(itr->second!="khan")
            cout<<itr->second<<endl;

        itr++;
    }
    return 0;
}