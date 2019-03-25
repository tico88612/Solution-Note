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
    ll N;
    cin >> N;
    ll nowMin = 1, nowMax = 1, nowsum = 1;
    while( nowMin < nowMax || nowMax != N - 1){
    	if(nowsum == N){
    		cout<<nowMin<<" "<<nowMax<<'\n';
    		if(nowMax < N){
    			nowMax++;
    			nowsum += nowMax;
    		}
    		else{
    			break;
    		}
    	}
    	else if(nowsum > N || nowMax == N - 1){
    		nowsum -= nowMin;
    		nowMin++;
    	}
    	else{
    		nowMax++;
    		nowsum += nowMax;
    	}
    }

    return 0;
}