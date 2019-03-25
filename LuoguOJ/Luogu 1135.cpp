#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> floorr;
vector<bool> visited;
vector<int> floorr_time;
int N,A,B;
void dfs(int now,int nowtime){
	if(visited[now]&&(floorr_time[now]<=nowtime))
		return;
	visited[now]=1;
	floorr_time[now]=nowtime;
	if(now+floorr[now]<=N)
		dfs(now+floorr[now],nowtime+1);
	if(now-floorr[now]>0)
		dfs(now-floorr[now],nowtime+1);
	return;
}
int main(){
	_
	cin>>N>>A>>B;
	floorr.resize(N+1,0);
	visited.resize(N+1,0);
	floorr_time.resize(N+1,-1);
	visited[0]=1;
	for(int i=1;i<=N;i++)
		cin>>floorr[i];
	dfs(A,0);
	cout<<floorr_time[B]<<'\n';
	return 0;
}