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
	ll n;
	while(cin >> n){
		ll www = n;
		int run = 0;
		while(n != 1 && run < 200){
			ll s = 0;
			while(n){
				ll w = n % 10;
				s += w * w;
				n /= 10;
			}
			n = s;
			run++;
		}
		if(n == 1)
			cout << www << " is a happy number" << '\n';
		else
			cout << www << " is an unhappy number" << '\n';
	}
    return 0;
}