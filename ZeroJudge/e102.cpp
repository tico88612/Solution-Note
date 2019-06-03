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
	ll N;
	ll a, b;
	ll c[100][100] = { 0 };
	c[0][0] = 1;
	REP(i, 1, 100){
		c[i][0] = 1;
		REP(j, 1, i + 1){
			c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
		}
	}
	cin >> N;
	while(N--){
		cin >> a >> b;
		cout << c[a][b] << '\n';
	}
    return 0;
}