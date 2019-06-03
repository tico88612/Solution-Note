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
char query[4] = {'B' ,'G', 'R'};

int main() {
	_
	int N;
	string enter;
	cin >> N;
	cin >> enter;
	int ans = 0;
	for(int i = 1; i < SZ(enter); i++){
		if(enter[i] == enter[i - 1]){
			if(i == SZ(enter) - 1){
				REP(j, 0, 3){
					if(enter[i - 1] != query[j]){
						enter[i] = query[j];
						ans++;
						break;
					}
				}
			}
			else{
				REP(j, 0, 3){
					if(enter[i - 1] != query[j] && enter[i + 1] != query[j] ){
						enter[i] = query[j];
						ans++;
						break;
					}
				}
			}
		}
	}
	cout << ans << '\n';
	cout << enter << '\n';
    return 0;
}