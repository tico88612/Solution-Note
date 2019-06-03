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
	int x1, y1, x2, y2;
	while(cin >> x1 >> y1 >> x2 >> y2){
		int a = (x2 - x1) * (x2 - x1);
		int b = y2 - y1;
		int c = -2 * x1 * b;
		int d = b * x1 * x1 + y1 * a;
		int g = __gcd(a, __gcd(b, __gcd(c, d)));
		g = abs(g);
		cout << a / g << "y = " << b / g << "x^2 + " << c / g << "x + " << d / g << '\n';
	}
    return 0;
}