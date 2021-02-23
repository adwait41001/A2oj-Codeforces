#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
bool desc(int b,int c){
    if(b>c) return 1;
    return 0;
}
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1,desc);
        int check=0;
        for(int i=1;i<=n;i++){
            if(a[i]<i){
                check=1;
                cout << i-1 << "\n";
                break;
            }
        }
        if(!check){
            cout << n << "\n"; 
        }
    }
    return 0;
}
