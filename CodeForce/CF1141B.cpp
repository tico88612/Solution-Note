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
    int N;
    cin >> N;
    int ans = 0, nowans = 0, now, prev, first = -1;
    N--;
    cin >> prev;
    if(prev)
    	nowans++;
    else
    	first = 0;
    while( N-- ){
    	cin >> now;
    	if(now){
    		nowans++;
    	}
    	else if(first == -1){
    		first = nowans;
    		ans = max(ans, nowans);
    		nowans = 0;
    	}
    	else {
    		ans = max(ans, nowans);
    		nowans = 0;
    	}
    	prev = now;
    }
    if(nowans){
    	if(first != -1)
    		nowans += first;
    	ans = max(ans, nowans);
    }
    cout << ans << '\n';
    return 0;
}