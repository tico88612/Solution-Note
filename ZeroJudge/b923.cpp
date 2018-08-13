#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int T;
	stack<int> s;
	cin>>T;
	while(T--){
		int C;
		cin>>C;
		if(C==1){
			if(!s.empty())
				s.pop();
		}
		else if(C==2){
			if(!s.empty())
				cout<<s.top()<<'\n';
		}
		else if(C==3){
			int ww;
			cin>>ww;
			s.push(ww);
		}
	}
	return 0;
}