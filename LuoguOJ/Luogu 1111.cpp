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

struct Item
{
	pi Point;
	int T;
};

bool cmp (Item a, Item b){
	if(a.T == b.T){
		if(a.Point.F == b.Point.F){
			return a.Point.S < b.Point.S;
		}
		else{
			return a.Point.F < b.Point.F;
		}
	}
	else{
		return a.T < b.T;
	}
}

int ParentN[100000+5], NowN[100000+5];
int GetParent(int N){
	if(N == ParentN[N])
		return N;
	else
		return ParentN[N] = GetParent(ParentN[N]);
}
void Merge(int X, int Y){
	int a = GetParent(X), b = GetParent(Y);
	if(a == b)
		return;
	if(NowN[b] > NowN[a]){
		NowN[b] += NowN[a];
		ParentN[a] = b;
	}
	else{
		NowN[a] += NowN[b];
		ParentN[b] = a;
	}
}

int main() {
    _
    vector<Item> v;
    int N, M;
    cin >> N >> M;
    REP(i, 1, N + 1){
    	ParentN[i] = i;
    	NowN[i] = 1;
    }
    v.resize(M);
    REP(i, 0, M){
    	pi P;
    	cin >> P.F >> P.S >> v[i].T;
    	if(P.F > P.S){
    		swap(P.F,P.S);
    	}
    	v[i].Point = P;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = -1;
    REP(i, 0, M){
    	Merge(v[i].Point.F, v[i].Point.S);
    	if( NowN[GetParent(1)] == N){
    		ans = v[i].T;
    		break;
    	}
    }
    cout << ans << '\n';
    return 0;
}