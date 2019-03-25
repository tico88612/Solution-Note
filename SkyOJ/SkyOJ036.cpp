#include <bits/stdc++.h>
using namespace std;
int dp[203][203][203];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char e1[200+5],e2[200+5],e3[200+5];
	while(cin>>e1>>e2>>e3){
		memset(dp,0,sizeof(dp));
		int e1str=strlen(e1),e2str=strlen(e2),e3str=strlen(e3);
		for(int i=1;i<=e1str;i++){
			for(int j=1;j<=e2str;j++){
				for(int k=1;k<=e3str;k++){
					if(e1[i-1]==e2[j-1]&&e2[j-1]==e3[k-1])
					{
						dp[i][j][k]=dp[i-1][j-1][k-1]+1;
					}
					else
					{
						dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
					}
				}
			}
		}
		cout<<dp[e1str][e2str][e3str]<<endl;
	}

}