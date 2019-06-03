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
    stack<int> s;
    int N;
    cin >> N;
    while(N--){
        int a, b;
        cin >> a;
        if(a == 1){
            cin >> b;
            s.push(b);
        }
        else{
            if(s.empty())
                cout << "empty!" << '\n';
            else{
                cout << s.top() << '\n';
                s.pop();
            }
        }
    }
    return 0;
}