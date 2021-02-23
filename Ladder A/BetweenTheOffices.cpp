#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n ; 
    string x;
    cin >> x;
    int countSFtoSeattle = 0;
    int countSeattletoSF = 0;
    for (int i = 0 ; i < n-1 ; i++){
        if ((x[i]=='S') && (x[i+1]=='F')){
            countSeattletoSF++;
        }
        else if ((x[i]=='F') && (x[i+1]=='S')){
            countSFtoSeattle++;
        }
    }
    if (countSFtoSeattle < countSeattletoSF){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}