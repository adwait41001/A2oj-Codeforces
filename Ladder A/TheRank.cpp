#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0 ;
    cin >> n;
    int count = 1 ;
    int marks[n][4];
    int sumMarks[n];
    for (int i = 0 ; i< n ; i ++){
        cin >> marks[i][0] >> marks[i][1] >> marks[i][2] >> marks[i][3] ;
        sumMarks[i] = marks[i][0]+marks[i][1]+marks[i][2]+marks[i][3] ;
        if (sumMarks[i]>sumMarks[0]){
            count += 1;
        }
    }
    cout << count << endl ;
}