#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dp[10000]={1};
int cost[5]={1,5,10,25,50};
int main(){
	_
	for(int i=0;i<5;i++){
		for(int j=0;j<=7489;j++){
			dp[j+cost[i]]+=dp[j];
		}
	}
	int N;
	while(cin>>N){
		cout<<dp[N]<<'\n';
	}
	return 0;
}