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

int query[10] = { 1, 0, 0, 0, 0, 0, 1, 0, 2, 1};

int main() {
	_
	ll N;
	while(cin >> N){
		int ans = 0;
		if(N == 0)
			ans += 1;
		while(N){
			ans += query[N % 10];
			N /= 10;
		}
		cout << ans << '\n';
	}

    return 0;
}