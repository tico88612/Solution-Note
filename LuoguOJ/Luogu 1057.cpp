#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int dp[32][32]={0};
int main(){
	int N,M;
	cin>>N>>M;
	dp[0][1]=1;
	for(int i=1;i<=M;i++){
		for(int j=1;j<=N;j++){
			long long int a,b;
			if(j==1)
				a = dp[i-1][N];
			else
				a = dp[i-1][j-1];
			if(j==N)
				b = dp[i-1][1];
			else
				b = dp[i-1][j+1];
			dp[i][j] = a + b;
			// printf("%lld ", dp[i][j]);
		}
		// printf("\n");
	}
	cout<<dp[M][1]<<'\n';
	return 0;
}