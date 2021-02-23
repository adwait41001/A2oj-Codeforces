#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,oneCount = 0, zeroCount = 0;
    cin >> n;
    char str[n];
    cin >> str;
    for(int i = 0; i<strlen(str); i++) {
        if(str[i] == 'z')
            ++zeroCount;
        else if(str[i] == 'n')
            ++oneCount;
    }
    while(oneCount>0){
        oneCount--;
        cout << "1 ";
    }
    while(zeroCount>0){
        zeroCount--;
        cout << "0 ";
    }
    return 0;
}