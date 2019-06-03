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
	vi enter(10002);
	REP(i, 0, N){
		int s;
		cin >> s;
		enter[s]++;
	}
	int maxx = 0;
	for(int i = 10000; i >= 1; i--){
		if(enter[i]){
			maxx = i;
			break;
		}
	}
	enter[maxx]--;
	if(maxx != 1)
		enter[1]--;
	int ss = (int)sqrt(maxx);
	for(int i = 2; i <= ss; i++){
		if(maxx % i == 0){
			enter[i]--;
			if(i * i != maxx)
				enter[maxx / i]--;
		}
	}
	int minn = 0;
	for(int i = 10000; i >= 1; i--){
		if(enter[i] > 0){
			minn = i;
			break;
		}
	}
	cout << maxx << ' ' << minn << '\n';

    return 0;
}