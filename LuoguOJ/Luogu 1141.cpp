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
int moveX[4] = {0, 1, 0, -1};
int moveY[4] = {1, 0, -1, 0};
vector<string> enter;
bool visited[1005][1005] = { 0 };
int query[1005][1005] = { 0 };
int ans[1000005][2] = { 0 };
int N, M;
int now = 0;

void dfs(int x, int y){
	ans[now][0] = x;
	ans[now][1] = y;
	now++;
	REP(i, 0, 4){
		if((x + moveX[i] >= 0 && x + moveX[i] < N && y + moveY[i] >= 0 && y + moveY[i] < N) && !visited[x + moveX[i]][y + moveY[i]] && enter[x][y] != enter[x + moveX[i]][y + moveY[i]]){
			visited[x + moveX[i]][y + moveY[i]] = true;
			dfs(x + moveX[i], y + moveY[i]);
		}
	}
}

int main() {
    _
    
    cin >> N >> M;
    enter.resize(N);
    REP(i, 0, N){
    	cin >> enter[i];
    }
    REP(i, 0, N){
    	REP(j, 0, N){
    		if(!visited[i][j]){
    			visited[i][j] = true;
    			now = 0;
    			dfs(i, j);
    			REP(k, 0, now){
    				query[ans[k][0]][ans[k][1]] = now;
    			}
    		}
    	}
    }
    REP(i, 0, M){
    	int XX, YY;
    	cin >> XX >> YY;
    	cout << query[XX - 1][YY - 1] << '\n';
    }
    
    return 0;
}