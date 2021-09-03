#include <bits/stdc++.h>
using namespace std;
void solve(){
    int l,r,c=0,flag=1;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        flag=1;
        if(i<22)continue;
        int j=i;
        int temp=i%10;
        if(temp!=2&&temp!=3&&temp!=5&&temp!=7)flag=0;
        j=i/10;
        int temp1=j%10;
        if(temp1!=2&&temp1!=3&&temp1!=5&&temp1!=7)flag=0;
        if(flag==0)continue;
        if(flag==1)c++;
    }
    cout<<c<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

