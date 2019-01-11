#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	int ans=2147483647;
	for(int i=0;i<3;i++){
		int a,b;
		cin>>a>>b;
		int sum=(N/a)*b+(N%a>0?b:0);
		ans=min(ans,sum);
	}
	cout<<ans<<'\n';
	return 0;
}