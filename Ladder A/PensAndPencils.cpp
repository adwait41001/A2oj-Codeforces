#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int a,b,c,d,k;
    int x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        if(a%c==0){
            x=a/c;
        }
        else if(a%c!=0){
            x=a/c+1;
        }
        if(b%d==0){
            y=b/d;
        }
        else if(b%d!=0){
            y=b/d+1;
        }
        if((x+y)>k)
            cout<<"-1"<<endl;
        if((x+y)<=k)
            cout<<x<<" "<<y<<endl;
    }
    return 0;
}