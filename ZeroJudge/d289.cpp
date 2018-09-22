#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dp[8000+2]={0};
int coin[8]={1,13,33,43,139,169,1309,2597};
int main(){
	_
	dp[0]=1;
	for(int j=0;j<8;j++){
		for(int i=0;i<=8000-coin[j];i++){
			dp[i+coin[j]]+=dp[i];
		}
	}
	int enter;
	while(cin>>enter){
		cout<<dp[enter]<<'\n';
	}
	return 0;
}