#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x = 0 ;
    cin >> x ; 
    if (x%4==1)/*A*/{
        cout <<"0 A" << endl ;
    }
    if (x%4==3)/*B*/{
        cout << "2 A" << endl ;
    }
    if (x%4==2)/*C*/{
        cout << "1 B" << endl ;
    }
    if (x%4==0)/*D*/{
        cout << "1 A" << endl ;
    }
}