#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	int enter[1000]={0};
	cin>>N;
	int ans=0;
	for (int i = 0; i < N; ++i){
		cin>>enter[i];
		if(i>1&&enter[i-2]==1&&enter[i-1]==0&&enter[i]==1){
			enter[i]=0;
			ans++;
		}
	}
	cout<<ans<<'\n';

	return 0;
}