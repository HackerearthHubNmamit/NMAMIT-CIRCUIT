#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> v;
void solve(){
	string a;
	cin>>a;
	if(a=="A"){
		ll n;
		cin>>n;
		v.push_back(n);
		return;
	}
	else if(a=="B"){
		v.pop_back();
		return;
	}
	else if(a=="D"){
		reverse(v.begin(),v.end());
		return;
	}
	else{
		auto it=min_element(v.begin(),v.end());
		cout<<*it<<"\n";
	}

}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
