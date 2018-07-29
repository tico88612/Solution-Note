#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string S;
int A,B;
void solve(unsigned int N){
	if(A<B)
		return;
	if(S.size()==N*2){
		if(A==B)
			cout<<S<<'\n';
	}
	else{
		S.push_back('(');A++;solve(N);S.pop_back();A--;
		S.push_back(')');B++;solve(N);S.pop_back();B--;
	}
}
int main(){
	_
	unsigned int N;
	while(cin>>N){
		A=B=0;
		S="";
		solve(N);
		cout<<'\n';
	}
	return 0;
}