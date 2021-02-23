#include<bits/stdc++.h>
using namespace std;
vector<int> x,y;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        x.push_back(t);
    }
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        y.push_back(t);
    }

    for(int i=0;i<n;i++){
      if(count(y.begin(),y.end(),x[i])>0){
            cout<<x[i]<<" ";
       }
    }
    return 0;
}