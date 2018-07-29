#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	long long int dp[5][8]={0};
	for(int i=0;i<N;i++){
		int c,a,r,d;
		cin>>c>>a>>r>>d;
		dp[c][4*a+2*r+d]++;
	}
	long long int ans=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				if((i|j|k)==7){
					ans+=dp[1][i]*dp[2][j]*dp[3][k];
				}
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}