#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int T;
	cin>>T;
	getchar();
	while(T--){
		int judge=1;
		stack<char> s;
		string str;
		getline(cin,str);
		for(int i=0;judge&&i<int(str.length());i++){
			if(str[i]=='['){
				s.push('[');
			}
			else if(str[i]=='('){
				s.push('(');
			}
			else if(str[i]==']'){
				if(!s.empty()){
					if(s.top()=='['){
						s.pop();
					}
					else
						judge=0;
				}
				else
					judge=0;
			}
			else if(str[i]==')'){
				if(!s.empty()){
					if(s.top()=='('){
						s.pop();
					}
					else
						judge=0;
				}
				else
					judge=0;
			}
		}
		if(judge&&s.empty())
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}