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
	int T;
	cin >> T;
	while(T--){
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		cout << l1 << ' ';
		if(l1 == l2){
			cout << l2 + 1 << '\n';
		}
		else{
			cout << l2 << '\n';
		}
	}
    return 0;
}