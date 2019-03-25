#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
map<char,char> m;
int main(){
	int Legal=1;
	string str1,str2;
	cin>>str1>>str2;
	for(int i=0;i<(int)str1.length();i++){
		if(!m[str1[i]]){
			m[str1[i]]=str2[i];
		}
		else if(m[str1[i]]!=str2[i]){
			Legal=0;
		}
	}
	if(m.size()<26)
		Legal=0;
	for(char i='A';Legal&&i<'Z';i++){
		for(char j=i+1;Legal&&j<='Z';j++){
			if(m[j]==m[i])
				Legal=0;
		}
	}
	string enter;
	cin>>enter;
	for(int i=0;Legal&&i<(int)enter.length();i++){
		cout<<m[enter[i]];
	}
	if(!Legal)
		cout<<"Failed";
	cout<<'\n';
	return 0;
}