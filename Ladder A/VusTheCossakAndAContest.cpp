#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k = 0 ;
    cin >> n >> m >> k;
    if ((m>=n) && (k>=n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl ; 
    }
}