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
	vector<int> enter(M);
	REP(i, 0, M){
		cin >> enter[i];
	}
	sort(ALL(enter), greater<int>());
	int DP[20001] = { 0 };
	REP(i, 0, M){
		for(int j = N; j >= enter[i]; j--){
			DP[j] = max(DP[j], DP[j - enter[i]] + enter[i]);
		}
	}
	cout << N - DP[N] << '\n';
    return 0;
}