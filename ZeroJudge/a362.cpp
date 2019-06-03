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
	int i, h, w;
};

bool cmp(Item a, Item b){
	if(a.h == b.h)
		return a.w < b.w;
	else
		return a.h < b.h;
}

int main() {
	_
	int N;
	cin >> N;
	vector<Item> enter(N);
	REP(i, 0, N){
		cin >> enter[i].h >> enter[i].w;
		enter[i].i = i;
	}
	stable_sort(ALL(enter), cmp);
	int ans = 0;
	REP(i, 0, N){
		ans += abs(enter[i].i - i);
	}
	cout << ans << '\n';
    return 0;
}