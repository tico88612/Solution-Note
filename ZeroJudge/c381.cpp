#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N,M;
	while(cin>>N>>M&&(N||M)){
		string sum,ans,plus;
		while(N--){
			cin>>plus;
			sum+=plus;
		}
		while(M--){
			int aaa;
			cin>>aaa;
			ans+=sum[aaa-1];
		}
		cout<<ans<<'\n';
	}
	return 0;
}