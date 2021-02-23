#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,count = 0 ;
    cin >> n ; 
    int lrarray [n][2];
    for (int i = 0 ; i < n ; i++){
        cin >> lrarray[i][0] >> lrarray[i][1] ;
    }
    cin >> k ;
    int  itr = 0;
    while(itr<n){
        if (k>lrarray[itr][1]){
            count += 1;
        }
        itr+=1;
    }
    cout << n - count ; 
}