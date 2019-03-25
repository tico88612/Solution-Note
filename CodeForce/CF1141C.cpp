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
	vector<int> enter(N - 1);
	REP(i, 0, N - 1){
		cin >> enter[i];
	}
	vector<int> nowNum(N);
	int nowMin = 0;
	nowNum[0] = 0;
	REP(i, 0, N - 1){
		nowNum[i + 1] = nowNum[i] + enter[i];
		nowMin = min(nowMin, nowNum[i + 1]);
	}
	int move = 1 - nowMin;
	bool dis[200000+2] = { 0 }, legal = 1;
	REP(i, 0, N){
		if(dis[nowNum[i] + move] || nowNum[i] + move > N || nowNum[i] + move < 1){
			legal = 0;
			break;
		}
		else{
			dis[nowNum[i] + move] = 1;
			nowNum[i] += move;
		}
	}
	if(legal)
		REP(i, 0, N){
			cout << nowNum[i] << " \n"[i == N - 1];
		}
	else
		cout << "-1" << '\n';
    return 0;
}