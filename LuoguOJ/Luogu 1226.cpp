#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
ll fast_pow(ll b,ll p,ll k){
	ll base = b;
	ll ans = 1;
	while(p){
		if(p&1){
			ans *= base;
			ans %= k;
		}
		base *= base;
		base %= k;
		p >>= 1;
	}
	return ans % k;
}
int main(){
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<a<<"^"<<b<<" mod "<<c<<"="<<fast_pow(a,b,c)<<'\n';
	return 0;
}