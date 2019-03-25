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
	vector<pi> enter(N + 1);
	REP(i, 1, M + 1){
		cin >> enter[i].F >> enter[i].S;
	}
	int Run[25 + 5][30000 + 5];
	for(int i = 1; i <= M; i++){
		for(int j = N; j >= 0; j--){
			if(j >= enter[i].F)
				Run[i][j] = max(Run[i - 1][j], Run[i - 1][j - enter[i].F] + enter[i].F * enter[i].S);
			else
				Run[i][j] = Run[i - 1][j];
		}
	}
	cout << Run[M][N] << '\n';

    return 0;
}