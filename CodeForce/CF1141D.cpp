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
	// _
	int N;
	cin >> N;
	vector<vector<int>> str1n(27), str2n(27);
	vi ss1(27,0), ss2(27,0);
	string str1, str2;
	cin >> str1 >> str2;
	REP(i, 0, N){
		if(str1[i] == '?')
			str1n[26].PB(i);
		else
			str1n[str1[i]-'a'].PB(i);
		if(str2[i] == '?')
			str2n[26].PB(i);
		else
			str2n[str2[i]-'a'].PB(i);
	}
	vector<pi> p;
	REP(i, 0, 26){
		// cout << i << '\n';
		while( ss1[i] < SZ(str1n[i]) && ss2[i] < SZ(str2n[i]) ){
			p.PB(MP(str1n[i][ss1[i]], str2n[i][ss2[i]]));
			// cout << ss1[i] << '\n';
			ss1[i]++;
			ss2[i]++;
		}
	}
	int ii = 0;
	while( ss1[26] < SZ(str1n[26]) && ii < 26){
		while(ss2[ii] < SZ(str2n[ii]) && ss1[26] < SZ(str1n[26])){
			p.PB(MP(str1n[26][ss1[26]], str2n[ii][ss2[ii]]));
			ss2[ii]++;
			ss1[26]++;
		}
		ii++;
	}
	ii = 0;
	while( ss2[26] < SZ(str2n[26]) && ii < 26){
		while(ss1[ii] < SZ(str1n[ii]) && ss2[26] < SZ(str2n[26])){
			p.PB(MP(str1n[ii][ss1[ii]], str2n[26][ss2[26]]));
			ss1[ii]++;
			ss2[26]++;
		}
		ii++;
	}
	ii = 26;
	while( ss1[ii] < SZ(str1n[ii]) && ss2[ii] < SZ(str2n[ii]) ){
		p.PB(MP(str1n[ii][ss1[ii]], str2n[ii][ss2[ii]]));
		ss1[ii]++;
		ss2[ii]++;
	}
	cout << SZ(p) << '\n';
	REP(i, 0, SZ(p)){
		cout << p[i].F + 1 << " " << p[i].S + 1 << '\n';
	}

    return 0;
}