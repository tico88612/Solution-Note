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

struct Item
{
	int b, j;
};

bool cmp(Item A, Item B){
	return A.j > B.j;
}

int main() {
	_
	int N, kase = 1;
	while(cin >> N){
		if(N == 0)
			break;
		cout << "Case " << kase++ << ": ";
		int ans = 0;
		vector<Item> enter(N);
		REP(i, 0, N){
			cin >> enter[i].b >> enter[i].j;
		}
		sort(ALL(enter), cmp);
		int s = 0;
		REP(i, 0, N){
			s += enter[i].b;
			ans = max(ans, s + enter[i].j);
		}
		cout << ans << '\n';
	}
    return 0;
}