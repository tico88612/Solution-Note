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
int SX, SY, FX, FY, N, M, ans = 0;
bool visited[10][10] = { 0 };
int moveX[4] = {0, 1, 0, -1};
int moveY[4] = {1, 0, -1, 0};

void dfs(int nowX, int nowY){
	if(nowX == FX && nowY == FY){
		ans++;
		return;
	}
	REP(i,0,4){
		if(nowX + moveX[i] < 1 || nowX + moveX[i] > N || nowY + moveY[i] < 1 || nowY + moveY[i] > M){
			continue;
		}
		else if(visited[nowX + moveX[i]][nowY + moveY[i]]){
			continue;
		}
		else{
			visited[nowX][nowY] = 1;
			dfs(nowX + moveX[i], nowY + moveY[i]);
			visited[nowX][nowY] = 0;
		}
	}
}

int main() {
    _
    int T;
	cin >> N >> M >> T;
	cin >> SX >> SY >> FX >> FY;
	while( T-- ){
		int XX, YY;
		cin >> XX >> YY;
		visited[XX][YY] = 1;
	}
	dfs(SX, SY);
	cout << ans << '\n';

    return 0;
}