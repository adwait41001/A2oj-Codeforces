#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,x = 0 ;
    cin >> x ;
    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= x ; j++){
            if ((i*j>x) && (i%j==0) && (i/j < x)){
                cout << i << " " << j << endl ;
                return 0 ;
            }
        }
    }
    cout << "-1" << endl ;
    return 0 ;
}