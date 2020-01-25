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
	string enter;
	while(cin >> enter){
		if(enter == "0")
			break;
		int odd = 0, even = 0;
		REP(i, 0, SZ(enter)){
			if(i % 2){
				odd += enter[i] - '0';
			}
			else{
				even += enter[i] - '0';
			}
		}
		cout << enter << " ";
		if(abs(odd - even) % 11 == 0)
			cout << "is a multiple of 11." << '\n';
		else
			cout << "is not a multiple of 11." << '\n';
	}
    return 0;
}