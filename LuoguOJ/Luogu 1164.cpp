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
	int enter[102], dp[102][10001];
	REP(i, 1, N + 1){
		cin >> enter[i];
	}
	REP(i, 1, N + 1){
		REP(j, 1, M + 1){
			if(enter[i] == j)
				dp[i][j] = dp[i - 1][j] + 1;
			else if(enter[i] < j)
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - enter[i]];
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[N][M] << '\n';
    return 0;
}