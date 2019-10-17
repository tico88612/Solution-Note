/*{{{*/
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
/*}}}*/
// Let's Fight!

int main() {
	_
	int N;
	cin >> N;
	string eat;
	getline(cin, eat);
	getline(cin, eat);
	for(int a = 1; a <= N; a++){
		if(a > 1)
			cout << "\n";
		cout << "Case #" << a << ":\n";
		string enter;
		while(getline(cin, enter)){
			if(enter == "")
				break;
			stringstream ss;
			ss << enter;
			string ans;
			int i = 0;
			string parsee;
			while(ss >> parsee){
				if(SZ(parsee) > i)
					ans += parsee[i++];
			}
			cout << ans << '\n';
		}
	}
	return 0;
}

