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
	ll HP, N;
	cin >> HP >> N;
	vector<ll> enter(N);
	ll delta = 0, minn = 0;
	REP(i, 0, N){
		cin >> enter[i];
		delta += enter[i];
		minn = min(minn, delta);
	}
	if(delta >= 0){
		if(abs(minn) >= HP){
			ll ans = 0;
			for(int i = 0; i < N && HP > 0; i++){
				HP += enter[i];
				ans ++;
			}
			cout << ans << '\n';
		}
		else
			cout << "-1" << '\n';
	}
	else{
		if(abs(minn) >= HP){
			ll ans = 0;
			for(int i = 0; i < N && HP > 0; i++){
				HP += enter[i];
				ans ++;
			}
			cout << ans << '\n';
		}
		else{
			delta = abs(delta);
			minn = abs(minn);
			ll lowHP = HP - minn;
			ll ans = lowHP / delta;
			if(lowHP % delta)
				ans++;
			HP -= ans * delta;
			ans *= N;
			for(int i = 0; i < N && HP > 0; i++){
				HP += enter[i];
				ans ++;
			}
			assert(HP <= 0 && "QAQ");
			cout << ans << '\n';
		}
	}

    return 0;
}