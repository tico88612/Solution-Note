#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	while(getline(cin,str)){
		stack<char> sta;
		int error=0;
		for(int i=0;i<str.length()&&error==0;i++){
			if(str[i]=='{'||str[i]=='('||str[i]=='[')
				sta.push(str[i]);
			else if(str[i]=='}'){
				if(!sta.empty()){
					if(sta.top()!='{')
						error=1;
					else
						sta.pop();
				}
				else
					error=1;
			}
			else if(str[i]==')'){
				if(!sta.empty()){
					if(sta.top()!='(')
						error=1;
					else
						sta.pop();
				}
				else
					error=1;
			}
			else if(str[i]==']'){
				if(!sta.empty()){
					if(sta.top()!='[')
						error=1;
					else
						sta.pop();
				}
				else
					error=1;
			}
		}
		if(!sta.empty())
			error=1;
		if(error)
			cout<<"MS"<<'\n';
		else
			cout<<"SM"<<'\n';
	}
	return 0;
}