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
vi enter;
ll ans = 0;

void merge(int st, int ed){
	if(ed - st < 2)
		return;
	
	int S = ed - st;
	int maxL = S / 2, maxR = S - maxL;
	merge(st, st + maxL);
	merge(st + maxL, ed);
	vi L(maxL), R(maxR);
	REP(i, 0, maxL){
		L[i] = enter[st + i];
	}
	REP(i, 0, maxR){
		R[i] = enter[st + maxL + i];
	}
	int nowL = 0, nowR = 0, now = 0, nowans = 0;
	while(nowL < maxL && nowR < maxR){
		while(L[nowL] > R[nowR] && nowR < maxR){
			enter[st + now] = R[nowR];
			nowR++;
			now++;
		}
		ans += nowR;
		nowans += nowR;
		enter[st + now] = L[nowL];
		nowL++;
		now++;
	}
	while(nowL < maxL){
		enter[st + now] = L[nowL];
		nowL++;
		now++;
		ans += nowR;
		nowans += nowR;
	}
	while(nowR < maxR){
		enter[st + now] = R[nowR];
		nowR++;
		now++;
	}
	// cout << st << " " << ed << " " << nowans << '\n';
	return;
}

int main() {
	// _
	int N;
	cin >> N;
	enter.resize(N);
	REP(i, 0, N){
		cin >> enter[i];
	}
	ans = 0;
	merge(0, N);
	cout << ans << '\n';
    return 0;
}