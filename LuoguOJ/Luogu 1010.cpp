#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string dfs(int N){
	if(N==0)
		return "0";
	if(N==2)
		return "2";
	string result = "";
	stack<int> s;
	int cpy = N;
	for(int i=0;cpy;i++){
		if(cpy&1){
			s.push(i);
		}
		cpy>>=1;
	}
	
	while(s.size()){
		result += "2";
		int now = s.top();
		s.pop();
		if(now != 1)
			result += "(" + dfs(now) + ")";
		if(s.size())
			result += "+";
	}
	return result;
}
int main(){
	int N;
	while(cin>>N)
		cout<<dfs(N)<<'\n';
	return 0;
}