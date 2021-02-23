#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,count = 0 ;
    cin >> n ;
    vector<int> scores ;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        scores.push_back(t);
    }
    sort(scores.begin(),scores.end());
    if (n%2==0){
        int x  = n/2 - 1;
        cout << scores[n/2 - 1] ;
    }
    else{
        cout << scores[(n-1)/2];
    }
}