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

void prefix(string in, string post){
	if(SZ(in)){
		char ch = post[SZ(post) - 1];
		cout << ch;
		int location = in.find(ch);
		prefix(in.substr(0, location), post.substr(0, location));
		prefix(in.substr(location + 1), post.substr(location, SZ(in) - location - 1));
	}
}

int main() {
	_
	string a, b;
	while(cin >> a >> b){
		//ACGDBHZKX
		//CDGAHXKZB
		prefix(a, b);
		cout << '\n';
	}
    return 0;
}