#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	long long int a,b,c;
	int T;
	cin>>T;
	while(T--){
		cin>>a>>b>>c;
		long long int ans = a-b;
		long long int w = c/2;
		ans*=w;
		if(c&1){
			ans+=a;
		}
		cout<<ans<<'\n';
	}
	
	return 0;
}