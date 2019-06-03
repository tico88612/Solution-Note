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
int move1X[4] = {0, 1, 0, -1};
int move1Y[4] = {1, 0, -1, 0};
int move2X[4] = {0, 1, 0, -1};
int move2Y[4] = {-1, 0, 1, 0};

int main() {
	_
	int T;
	cin >> T;
	// int enter[101][101] = { 0 };
	while(T--){
		int N, M;
		cin >> N >> M;
		int enter[101][101] = { 0 };
		int Run = 1, nowX = 1, nowY = 1;
		enter[nowX][nowY] = 1;
		if(M == 1){
			int f = 0;
			while(Run < N * N){
				int dx = nowX + move1X[f];
				int dy = nowY + move1Y[f];
				while(dx > 0 && dx <= N && dy > 0 && dy <= N && !enter[dx][dy]){
					Run++;
					enter[dx][dy] = Run;
					nowX = dx;
					nowY = dy;
					dx = nowX + move1X[f];
					dy = nowY + move1Y[f];
				}
				f++;
				f %= 4;
			}
		}
		else if(M == 2){
			int f = 0;
			while(Run < N * N){
				int dx = nowX + move2X[f];
				int dy = nowY + move2Y[f];
				while(dx > 0 && dx <= N && dy > 0 && dy <= N && !enter[dx][dy]){
					Run++;
					enter[dx][dy] = Run;
					nowX = dx;
					nowY = dy;
					dx = nowX + move2X[f];
					dy = nowY + move2Y[f];
				}
				f++;
				f %= 4;
			}
		}
		REP(i, 1, N + 1){
			REP(j, 1, N + 1){
				printf("%5d", enter[i][j]);
			}
			printf("\n");
		}
		if(T)
			printf("\n");
	}
    return 0;
}