#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m = 0 ;
    cin >> n >> m;
    string s;
    cin >> s ; 
    while (m--){
		int l, r = 0 ; 
		char c, cn ;
		cin >> l >> r >> c >> cn ;
		l--;r--;
        for (int i = l; i <= r; i++){
			if (s[i] == c){
				s[i] = cn ;
            }
        }
    }
	cout << s << endl;
}