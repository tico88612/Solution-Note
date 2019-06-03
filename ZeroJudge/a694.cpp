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
#define MAXN 500 + 2

// Let's Fight!

int main() {
	_
	int N, M;
	while(cin >> N >> M){
		ll enter[MAXN][MAXN] = { 0 }, query[MAXN][MAXN] = { 0 };
		REP(i, 1, N + 1){
			REP(j, 1, N + 1){
				cin >> enter[i][j];
			}
		}
		REP(i, 1, N + 2){
			REP(j, 1, N + 2){
				query[i][j] = enter[i][j] + query[i - 1][j] + query[i][j - 1] - query[i - 1][j - 1];
			}
		}
		while(M--){
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			cout << query[x2][y2] - query[x2][y1 - 1] - query[x1 - 1][y2] + query[x1 - 1][y1 - 1] << '\n';
		}
	}
    return 0;
}