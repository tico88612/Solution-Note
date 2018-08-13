#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

template<typename T>

T mod(T a,T b,T c) {
	T ans = 1;
	while(b > 0) {
		if(b & 1) ans = ans * a % c;
		a = a * a % c;
		b >>= 1;
	}	
	return ans;
}
int main(){
	long long int a,b,c=10007;
	cin>>a>>b;
	cout<<mod(a,b,c)<<'\n';
	return 0;
}