#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	long long int dp[1002];
	dp[0]=dp[1]=1;
	for(int i=2;i<1001;i++)
		if(i%2==0)
			dp[i]=dp[i/2]+dp[i-1];
		else
			dp[i]=dp[i-1];
	int N;
	cin>>N;
	cout<<dp[N]<<'\n';
	return 0;
}