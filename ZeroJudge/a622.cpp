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
	vector<string> Query;
	string enter;
	int maxx = 0;
	while(getline(cin, enter)){
		if(enter == "END")
			break;
		maxx = max(maxx, (int)enter.length());
		Query.PB(enter);
	}
	REP(i, 0, maxx){
		REP(j, 0, SZ(Query)){
			if(Query[j].length() > i)
				cout << Query[j][i];
			else
				cout << " ";
			if(j != SZ(Query) - 1)
				cout << "  ";
			else
				cout << '\n';
		}
	}
    return 0;
}