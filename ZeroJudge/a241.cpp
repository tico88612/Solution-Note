#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	while(N--){
		int enter,ans=0;
		cin>>enter;
		while(enter){
			for(int i=2;i<=enter;i*=2)
				ans++;
			for(int i=5;i<=enter;i*=5)
				ans++;
			enter/=10;
			ans++;
		}
		cout<<ans-1<<'\n';
	}
	return 0;
}