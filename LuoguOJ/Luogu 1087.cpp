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
string enter;
void dfs(int x, int y){
	if(x < y){
		dfs(x, (x + y) / 2);
		dfs((x + y + 1) / 2, y);
	}
	int B = 0, I = 0;
	for(int i = x; i <= y; i++){
		if(enter[i] == '0')
			B = 1;
		if(enter[i] == '1')
			I = 1;
	}
	if(B && I)
		cout << "F";
	else if(B)
		cout << "B";
	else if(I)
		cout << "I";
}

int main() {
	_
	int N;
	cin >> N;
	int R = (1 << N);
	// cout << R << '\n';
	
	cin >> enter;
	dfs(0, R - 1);
	cout << '\n';
    return 0;
}