#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int ans=0;
void dfs(int N,int K,int nowMaxN,int nowK){
	if(N<0)
		return;
	if(N==0&&nowK!=K)
		return;
	if(nowK==K-1){
		if(N>=nowMaxN)
			ans++;
		return;
	}
	for(int i=nowMaxN;i<=N;i++){
		dfs(N-i,K,i,nowK+1);
	}

}
int main(){
	int N,K;
	cin>>N>>K;
	ans=0;
	dfs(N,K,1,0);
	cout<<ans<<'\n';
	return 0;
}