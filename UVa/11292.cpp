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
	while(cin >> N >> M){
		if(N == 0 && M == 0)
			break;
		vector<ll> enterN(N), enterM(M);
		REP(i, 0, N){
			cin >> enterN[i];
		}
		REP(i, 0, M){
			cin >> enterM[i];
		}
		bool ans = false;
		ll total = 0;
		sort(ALL(enterN));
		sort(ALL(enterM));
		if(N > M){
			cout << "Loowater is doomed!" << '\n';
		}
		else{
			int now = 0;
			REP(i, 0, M){
				if(now == N){
					ans = true;
					break;
				}
				else{
					if(enterM[i] >= enterN[now]){
						total += enterM[i];
						now++;
					}
				}
			}
			if(now == N){
				ans = true;
			}
			if(ans)
				cout << total << '\n';
			else
				cout << "Loowater is doomed!" << '\n';
		}
	}
    return 0;
}