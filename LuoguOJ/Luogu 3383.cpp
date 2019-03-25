#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define int long long int
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)
#ifdef ONLINE_JUDGE
#define FILEIO(name) \
    freopen(name".in", "r", stdin); \
    freopen(name".out", "w", stdout);
#else
#define FILEIO(name)
#endif
template<typename A, typename B>
ostream& operator <<(ostream &s, const pair<A,B> &p) {
    return s<<"("<<p.first<<","<<p.second<<")";
}
template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c) {
    s<<"[ ";
    for (auto it : c) s << it << " ";
    s<<"]";
    return s;
}

// Let's Fight!

int prime[100000]={2,3,5,7}, primeN = 4;
void build_prime(int N){
	REP1(i,8,sqrt(N)+1){
		bool yes = true;
		for (int j=0; prime[j]<=sqrt(i)&&yes&&j<primeN; j++){
			if(i%prime[j]==0)
				yes=0;
		}
		if(yes){
			// cout<<i<<'\n';
			prime[primeN++]=i;
		}
	}

}

int32_t main() {
    IOS;
    build_prime(10000000);
    int N,M;
    cin>>N>>M;
    while(M--){
    	int enter;
    	cin>>enter;
    	bool yes = true;
    	if(enter==1)
    		yes = 0;
		for (int j=0; prime[j]<=sqrt(enter)&&yes&&j<primeN; j++){
			if(enter%prime[j]==0)
				yes = 0;
		}
		if(yes){
			cout<<"Yes"<<'\n';
		}
		else{
			cout<<"No"<<'\n';
		}
    }
    return 0;
}