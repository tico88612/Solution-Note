#include <bits/stdc++.h>
using namespace std;
map<string,string> keyword;
map<char,string> query;

int judge(string a,string b){
	if(a==b) return 0;
	if(a.size()>b.size()) swap(a,b);
	if(a==b.substr(0,a.size())) return b.size()-a.size();
	return 2147483647;
}

string Solve(string S){
	string ans="";
	int nmin=2147483647;
	for(auto it=keyword.begin();it!=keyword.end();++it){
		int d=judge(S,it->second);
		if(!d&&!nmin&&*ans.rbegin()!='!'){
			ans+='!';
			return ans;
		}
		else if(d<=nmin){
			ans = it->first;
			nmin = min(d,nmin);
		}
	}
	if(nmin) ans+="?";
	return ans;
}

int main(){
	char a[2];
	string enter;
	while(~scanf("%s",a)){
		if(strcmp(a,"*")==0)
			break;
		cin>>enter;
		query[a[0]]=enter;
	}
	while(cin>>enter){
		if(enter=="*")
			break;
		string ca;
		for(unsigned int i=0;i<enter.length();i++){
			ca+=query[enter[i]];
		}
		keyword[enter]=ca;
	}
	while(cin>>enter){
		if(enter=="*")
			break;
		cout<<Solve(enter)<<endl;
	}
	return 0;
}