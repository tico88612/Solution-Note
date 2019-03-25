#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define REP(i,a,b) for (int i = a; i < b; i++)

// Let's Fight!

int main() {
    _
	int N, M;
	cin >> N >> M;
	int enter[402][402]={0};
	FMO(enter);
	int X, Y;
	cin >> X >> Y;
	enter[X][Y] = 0;
	int moveX[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int moveY[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	queue< pair<pi, int> > qq;
	qq.emplace(MP(X, Y), 0);
	while(!qq.empty()){
		pair<pi, int> now = qq.front();
		qq.pop();
		pi point = now.F;
		int nowRun = now.S;
		int nowX = point.F;
		int nowY = point.S;
		enter[nowX][nowY] = nowRun;
		REP(i,0,8){
			if(nowX + moveX[i] < 1 || nowX + moveX[i] > N || nowY + moveY[i] < 1 || nowY + moveY[i] > M){
				continue;
			}
			else if(enter[nowX + moveX[i]][nowY + moveY[i]] != -1){
				continue;
			}
			else{
				enter[nowX + moveX[i]][nowY + moveY[i]] = 0;
				qq.emplace(MP(nowX + moveX[i], nowY + moveY[i]), nowRun + 1);
			}
		}
		// cout<<nowX<<" "<<nowY<<" "<<nowRun<<'\n';
	}
	REP(i,1,N+1){
		REP(j,1,M+1){
			printf("%-5d",enter[i][j]);
		}
		printf("\n");;
	}
    return 0;
}