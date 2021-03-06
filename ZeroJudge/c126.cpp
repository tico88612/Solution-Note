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

void postfix(string prefix, string infix){
	if(prefix != ""){
		// cout << prefix << " " << infix << '\n';
		char ch = prefix[0];
		int s = infix.find(ch);
		postfix(prefix.substr(1, s), infix.substr(0, s));
		postfix(prefix.substr(s + 1), infix.substr(s + 1));
		cout << ch;
	}
}

int main() {
	_
	string prefix, infix;
	while(cin >> prefix >> infix){
		postfix(prefix, infix);
		cout << '\n';
	}
    return 0;
}