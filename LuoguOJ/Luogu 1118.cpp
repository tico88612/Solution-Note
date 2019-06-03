#pragma GCC optimize ("O2")
#include<iostream>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i < b; i++)

// Let's Fight!

int N, sum;
int eff[13] = { 0 };
int ans[20] = { 0 };
int visited[20] = { 0 };

int dfs(int i, int num, int v){
	// printf("%d %d %d\n", i, num, v);
    if(v > sum)
        return 0;
    if(i == N){
        if(v == sum){
            ans[i] = num;
            return 1;
        }
        else
            return 0;
    }
    visited[num] = 1;
    for (int j = 1; j <= N; j++){
    	// printf("1\n");
        if (!visited[j] && dfs( i + 1, j, v + eff[i] * j)){
            ans[i] = num;
            return 1;
        }
    }
    visited[num] = 0;
    return 0;
}

int main() {
	_
	cin >> N >> sum;
	eff[0] = eff[N - 1] = 1;
	if(N > 1)
		for(int i = 1; i * 2 < N; i++){
			eff[i] = eff[N - i - 1] = (N - i) * eff[i - 1] / i;
		}
	if(dfs(0, 0, 0))
		REP(i, 1, N + 1)
			cout << ans[i] << " \n"[i == N];
    return 0;
}