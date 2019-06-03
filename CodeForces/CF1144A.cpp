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
	int N;
	cin >> N;
	while(N--){
		string enter;
		cin >> enter;
		if(SZ(enter) == 1){
			cout << "Yes" << '\n';
		}
		else{
			bool judge = true;
			int al[26] = { 0 };
			for(int i = 0; i < SZ(enter) && judge; i++){
				if(al[enter[i] - 'a'])
					judge = false;
				al[enter[i] - 'a']++;
			}
			int dd = 1;
			for(int i = 0; i < 26; i++){
				while(al[i] == 0 && i < 26){
					i++;
				}
				while(al[i] && i < 26){
					i++;
				}
				while(al[i] == 0 && i < 26){
					i++;
				}
				while(al[i] && i < 26){
					dd = 0;
					i++;
				}
			}
			if(!dd)
				judge = false;
			if(judge)
				cout << "Yes" << '\n';
			else
				cout << "No" << '\n';
		}
	}
    return 0;
}