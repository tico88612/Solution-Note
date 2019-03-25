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

int moveX[4] = {1, 0, -1, 0};
int moveY[4] = {0, 1, 0, -1};
// Let's Fight!

int main() {
    _
    int enter[32][32] = { 0 };
    int N;
    cin>>N;
    REP(i,1,N+1){
    	REP(j,1,N+1){
    		cin>>enter[i][j];
    	}
    }
    queue<pi> q;
    q.push(MP(0, 0));
    enter[0][0] = 2;
    while(!q.empty()){
    	pi point = q.front();
    	q.pop();
    	int nowX = point.F;
    	int nowY = point.S;
    	enter[nowX][nowY] = 2;
    	// cout<< nowX <<" "<< nowY<<'\n';
    	REP(i,0,4){
    		if(nowX + moveX[i] < 0 || nowX + moveX[i] > N+1 || nowY + moveY[i] < 0 || nowY + moveY[i] > N+1 ){
    			continue;
    		}
    		else if(enter[nowX + moveX[i]][nowY + moveY[i]] == 1 || enter[nowX + moveX[i]][nowY + moveY[i]] == 2){
    			continue;
    		}
    		else{
    			q.push(MP(nowX + moveX[i], nowY + moveY[i]));
    		}
    	}
    }
    REP(i,1,N+1){
    	REP(j,1,N+1){
    		if(enter[i][j] == 0)
    			enter[i][j] = 2;
    		else if(enter[i][j] == 2)
    			enter[i][j] = 0;
    		cout<<enter[i][j]<<" \n"[j==N];
    	}
    }
    return 0;
}