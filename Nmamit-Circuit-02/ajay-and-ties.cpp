#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long n,c=0,sum=0;
	cin>>n;
	string s;
	cin>>s;
	map <char,int> m;
	for (char ch:s)
	{
		m[ch]++;
	}
	vector<int> v;
	for (auto &p : m)
        v.push_back(p.second);
    sort(v.rbegin(),v.rend());
    while(sum<n)
    	sum=sum+v[c++];
    cout<<c;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	long long t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}
