#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter[10000+5]={0};
	int L,M;
	cin>>L>>M;
	for(int i=0;i<M;i++){
		int s,t;
		cin>>s>>t;
		enter[s]++;
		enter[t+1]--;
	}
	int ans=0,now=0;
	for(int i=0;i<=L;i++){
		now+=enter[i];
		if(!now){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}