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
    ll a, b;
    cin >> a >> b;
    ll divv = b / a, modd = b % a;
    if(modd){
    	cout << "-1" << '\n';
    }
    else{
    	int ans = 0;
    	while(divv % 2 == 0 && divv != 0){
    		divv /= 2;
    		ans++;
    	}
    	while(divv % 3 == 0 && divv != 0){
    		divv /= 3;
    		ans++;
    	}
    	if(divv == 1 || divv == 0)
    		cout << ans << '\n';
    	else
    		cout << "-1" << '\n';
    }
    return 0;
}