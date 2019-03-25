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

vector<string> enter;
int N;
bool star[100][100] = { 0 };
int moveX[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int moveY[8] = {0, 1, 1, 1, 0, -1, -1, -1};
string ans = "yizhong";

void dfs(int X, int Y){
	REP(i,0,8){
		if((X + moveX[i]*6 >= 0 && X + moveX[i]*6 < N) && (Y + moveY[i]*6 >= 0 && Y + moveY[i]*6 < N)){
			int Run = 1;
			bool YES = 1;
			while(YES && Run < 7){
				if(ans[Run] != enter[X+moveX[i]*Run][Y+moveY[i]*Run]){
					YES = 0;
				}
				Run++;
			}
			if(YES){
				Run = 0;
				while(YES && Run < 7){
					if(ans[Run] != enter[X+moveX[i]*Run][Y+moveY[i]*Run]){
						YES = 0;
					}
					else{
						star[X+moveX[i]*Run][Y+moveY[i]*Run] = 1;
					}
					Run++;
				}
			}
		}
	}
}

int main() {
    _
	cin >> N;
	enter.resize(N);
	REP(i,0,N){
		cin >> enter[i];
	}
	REP(i,0,N){
		REP(j,0,N){
			if(enter[i][j] == 'y'){
				dfs(i, j);
			}
		}
	}
	REP(i,0,N){
		REP(j,0,N){
			if(star[i][j]){
				cout<<enter[i][j];
			}
			else{
				cout<<"*";
			}
		}
		cout<<'\n';
	}

    return 0;
}