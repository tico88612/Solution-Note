#include <bits/stdc++.h>
using namespace std;
int dp[203][203][203];//,upleft[203][203];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char e1[200+5],e2[200+5],e3[200+5];
	while(cin>>e1>>e2>>e3){
		memset(dp,0,sizeof(dp));
		//char e1e2[200+5];
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
		//e1e2str=dp[e1str][e2str];
		/*int q=e1str,w=e2str;
		while(q&&w){
			if(upleft[q][w]==0){
				q--;
				w--;
				e1e2[--e1e2str]=e1[q];
			}
			else if(upleft[q][w]==2){
				q--;
			}
			else if(upleft[q][w]==1){
				w--;
			}
		}
		cout<<e1e2<<endl;
		e1e2str=dp[e1str][e2str];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=e3str;i++){
			for(int j=1;j<=e1e2str;j++){
				if(e3[i-1]==e1e2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<dp[e3str][e1e2str]<<endl;*/
	}

}