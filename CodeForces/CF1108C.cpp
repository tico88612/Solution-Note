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
string query[6] = { "RGB", "RBG", "GRB", "GBR", "BRG", "BGR" };

int main() {
	_
	int N;
	string enter;
	cin >> N;
	cin >> enter;
	int ans = 2147483647;
	string change;
	for(int i = 0; i < 6; i++){
		int now = 0;
		int j;
		for(j = 0; j < SZ(enter) - 3; j += 3){
			string sub = enter.substr(j, 3);
			for(int k = 0; k < 3; k++){
				if(sub[k] != query[i][k]){
					now++;
				}
			}
		}
		for(int k = 0; k < SZ(enter) - j; k++){
			if(enter[j + k] != query[i][k]){
				now++;
			}
		}
		if(ans > now){
			ans = now;
			change = query[i];
		}
		
	}
	cout << ans << '\n';
	REP(i, 0, N){
		cout << change[i % 3];
	}
	cout << '\n';
    return 0;
}