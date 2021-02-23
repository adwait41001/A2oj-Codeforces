#include<bits/stdc++.h>
using namespace std;
vector<int> A,B;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        A.push_back(t);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        B.push_back(t);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    cout << A[n-1] << " " << B[m-1] << endl;
}