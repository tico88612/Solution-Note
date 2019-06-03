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
int prime[4650] = {2, 3, 5, 7}, primeN = 4;

void build_prime(int N){
	for(int i = 11; i <= sqrt(N); i++){
		bool judge = true;
		for(int j = 0; prime[j] <= sqrt(i) && judge; j++){
			if(!(i % prime[j])){
				judge = false;
			}
		}
		if(judge){
			prime[primeN++] = i;
			// cout << i << '\n';
			// cout << primeN << '\n';
		}
	}
}

bool isprime(int N){
	if(N < 2)
		return false;
	bool judge = true;
	for(int j = 0; prime[j] <= sqrt(N) && judge; j++){
		if(!(N % prime[j])){
			judge = false;
		}
	}
	return judge;
}

int main() {
	_
	build_prime(2000000000);
	int N;
	while(cin >> N){
		ll ans = 0;
		for(int j = 0; prime[j] <= sqrt(N); j++){
			while(!(N % prime[j])){
				ans += prime[j];
				N /= prime[j];
			}
		}
		if(isprime(N))
			ans += N;
		else if(N == 1 && ans == 0)
			ans = 1;
		cout << ans << '\n';
	}
    return 0;
}