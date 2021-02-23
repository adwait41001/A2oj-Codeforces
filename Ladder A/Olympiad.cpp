
#include<bits/stdc++.h>
using namespace std;
#define debug(a) cerr << #a << " = " << a << '\n';
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> s;
 
for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    if (t){
        s.insert(t);
    }
}
  cout << s.size() << '\n';
  return 0;
}