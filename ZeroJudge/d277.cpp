#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	while(cin>>N)
		cout<<((N%2)?N-1:N)<<'\n';
	return 0;
}