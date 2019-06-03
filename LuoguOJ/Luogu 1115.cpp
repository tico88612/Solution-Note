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
	int N;
	cin >> N;
	vector<ll> enter(N);
	ll now = 0, maxx = -99999999999;
	REP(i, 0, N){
		cin >> enter[i];
		maxx = max(maxx, enter[i]);
	}
	REP(i, 0, N){
		now += enter[i];
		maxx = max(maxx, now);
		if(now < 0)
			now = 0;
	}
	cout << maxx << '\n';
    return 0;
}