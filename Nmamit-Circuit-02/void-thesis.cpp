#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll N,A,B;
	cin>>N>>A>>B;
	vector<int> a(N);
  	for(ll i = 0; i < N / 2; i++) {
    	a[(A + i * B) % N] = 1;
  	}
  	ll ans = 0;
  	int cur = 1;
  	for(int i = 0; i < N; i++) {
    	if(a[i]) {
      		ans += abs(i - cur);
      		cur += 2;
    	}
  	}
  cout<<ans<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
