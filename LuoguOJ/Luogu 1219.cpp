#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int used[20]={0};
int nownum[20]={0};
int checkleft[100]={0};
int checkright[100]={0};
long long int ans=0;

bool vaild(int row,int col,int N){
	if(used[col])
		return 0;
	if(checkleft[col+row])
		return 0;
	if(checkright[col-row+N])
		return 0;
	return 1;
}
void dfs(int now,int N){
	if(now==N){
		if(ans<3)
			for(int i=0;i<N;i++)
				cout<<nownum[i]<<" \n"[i==N-1];
		ans++;
		return;
	}
	else{
		for(int i=1;i<=N;i++){
			int v=vaild(now,i,N);
			if(v){
				used[i]=1;
				checkleft[now+i]=1;
				checkright[i-now+N]=1;
				nownum[now]=i;
				dfs(now+1,N);
				used[i]=0;
				checkleft[now+i]=0;
				checkright[i-now+N]=0;
				nownum[now]=0;
			}
		}
	}
}
int main(){
	int N;
	cin>>N;
	dfs(0,N);
	cout<<ans<<'\n';
	return 0;
}