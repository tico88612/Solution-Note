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
int N, M, Yes = 0;
vi enter;
vi Run;

void Print(int now){
	Yes = 1;
	REP(i, 0, now){
		cout << Run[i] << " \n"[i == now - 1];
	}
}

void recurion(int j, int now, int sum){
	// printf("%d %d\n", sum, M);
	if(sum > M)
		return;
	if(sum == M){
		Print(now);
		return;
	}
	REP(i, j, N){
		Run[now] = enter[i];
		recurion(i + 1, now + 1, sum + enter[i]);
	}
}

int main() {
	_
	cin >> N >> M;
	enter.resize(N);
	Run.resize(N);
	REP(i, 0, N){
		cin >> enter[i];
	}
	sort(ALL(enter));
	recurion(0, 0, 0);
	if(!Yes)
		cout << "-1" << '\n';
    return 0;
}