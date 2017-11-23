#include <bits/stdc++.h>
using namespace std;
typedef pair<int ,int> P;
const int INF = 100000000;
char enter[1000+5][1000+5];
int dis[1000+5][1000+5];
int N,M;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int sx,sy;
int fx,fy;
int bfs();
void dfs();
P run[10000000];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>enter[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(enter[i][j]=='&'){
				sx=i;
				sy=j;
			}
			if(enter[i][j]=='@'){
				fx=i;
				fy=j;
			}
		}
	}
	printf("%d\n",bfs());
	dfs();
	printf("(%d,%d)\n",sx,sy);
	for(int i=1;i<dis[fx][fy];i++)
		printf("(%d,%d)\n",run[i].first,run[i].second);
	return 0;
}
int bfs(){
	queue<P> que;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++)
			dis[i][j]=INF;
	}
	que.push(P(sx,sy));
	dis[sx][sy]=1;
	while(que.size()){
		P p=que.front();
		que.pop();
		if(p.first==fx&&p.second==fy) break;
		for(int i=0;i<4;i++){
			int nx=p.first+dx[i],ny=p.second+dy[i];
			if(0<=nx&&nx<=N&&0<=ny&&ny<=M&&enter[nx][ny]!='#'&&dis[nx][ny]==INF){
				que.push(P(nx,ny));
				dis[nx][ny]=dis[p.first][p.second]+1;
			}
		}
	}
	return dis[fx][fy];
}
void dfs(){
	int nx=fx,ny=fy;
	while(dis[nx][ny]!=1){
		for(int i=0;i<4;i++){
			int rx=nx+dx[i],ry=ny+dy[i];
			//printf("%d %d\n",rx,ry);
			//printf("%d\n",dis[rx][ry]);
			if(dis[rx][ry]==dis[nx][ny]-1){
				run[dis[nx][ny]-1].first=nx;
				run[dis[nx][ny]-1].second=ny;
				nx=rx;
				ny=ry;
				break;

			}
		}
	}
}