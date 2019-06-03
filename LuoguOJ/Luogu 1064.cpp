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
#define MAXN 32005

// Let's Fight!

int cost[MAXN] = {0};
int item[62][2] = {0}; //[0] = cost [1] = price
int ex_item_count[62] = {0};
int ex_item[62][2][2] = {0};


int main() {
	_
	int N, m;
	cin >> N >> m;
	REP(i, 1, m + 1){
		int v, p, q;
		cin >> v >> p >> q;
		if(q){
			ex_item[q][ex_item_count[q]][0] = v;
			ex_item[q][ex_item_count[q]][1] = v * p;
			ex_item_count[q]++;
		}
		else{
			item[i][0] = v;
			item[i][1] = v * p;
		}
	}
	REP(i, 1, m + 1){
		for(int j = N; item[i][0] != 0 && j >= item[i][0]; j--){
			cost[j] = max(cost[j], cost[j - item[i][0]] + item[i][1]);

			if(j >= item[i][0] + ex_item[i][0][0]){
				cost[j] = max(cost[j], cost[j - item[i][0] - ex_item[i][0][0]] + item[i][1] + ex_item[i][0][1]);
			}
			if(j >= item[i][0] + ex_item[i][0][1]){
				cost[j] = max(cost[j], cost[j - item[i][0] - ex_item[i][1][0]] + item[i][1] + ex_item[i][1][1]);
			}
			if(j >= item[i][0] + ex_item[i][0][0] + ex_item[i][1][0]){
				cost[j] = max(cost[j], cost[j - item[i][0] - ex_item[i][0][0] - ex_item[i][1][0]] + item[i][1] + ex_item[i][0][1] + ex_item[i][1][1]);
			}
		}
	}
	cout << cost[N] << '\n';
    return 0;
}