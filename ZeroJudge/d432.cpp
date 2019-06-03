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

void prefix(string infix, string postfix){
	if(postfix != ""){
		char ch = postfix[SZ(postfix) - 1];
		cout << ch;
		int s = infix.find(ch);
		prefix(infix.substr(0, s), postfix.substr(0, s));
		prefix(infix.substr(s + 1), postfix.substr(s, SZ(postfix) - s - 1));
	}
}

int main() {
	_
	string infix, postfix;
	while(cin >> infix >> postfix){
		prefix(infix, postfix);
		cout << '\n';
	}
    return 0;
}