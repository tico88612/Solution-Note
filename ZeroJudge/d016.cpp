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
	string enter;
	while(getline(cin, enter)){
		stack<ll> sint;
		int p = 0, p1 = 0;
		while(p != -1){
			p = enter.find(' ', p1);
			string sss = enter.substr(p1, p - p1);
			if(isdigit(sss[0])){
				ll now = 0;
				REP(i, 0, SZ(sss)){
					now *= 10;
					now += sss[i] - '0';
				}
				sint.push(now);
			}
			else if(sss[0] == '+' || sss[0] == '-' || sss[0] == '*' || sss[0] == '/' || sss[0] == '%'){
				ll b = sint.top();
				sint.pop();
				ll a = sint.top();
				sint.pop();
				if(sss[0] == '+')
					sint.push(a + b);
				else if(sss[0] == '-')
					sint.push(a - b);
				else if(sss[0] == '*')
					sint.push(a * b);
				else if(sss[0] == '/')
					sint.push(a / b);
				else if(sss[0] == '%')
					sint.push(a % b);
			}
			p1 = p + 1;
		}
		if(!sint.empty())
			cout << sint.top() << '\n';
		else
			cout << 0 << '\n';
	}

    return 0;
}