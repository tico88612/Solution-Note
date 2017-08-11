#include <bits/stdc++.h>
using namespace std;
map<string,int> memo;
int all=1;
void dfs(int N,int maxx,string AAA,int indexx){
	if(N==maxx){
		memo[AAA]=all++;
		//cout<<AAA<<" "<<memo[AAA]<<'\n';
		return ;
	}
	for(int i=indexx;i<26;i++){
		string BBB=AAA;
		BBB+=i+'a';
		dfs(N+1,maxx,BBB,i+1);
		
	}
	return ;
}
int main()
{
	dfs(0,1,"",0);
	dfs(0,2,"",0);
	dfs(0,3,"",0);
	dfs(0,4,"",0);
	dfs(0,5,"",0);
	string enter;
	while(getline(cin,enter)){
		auto iter = memo.find(enter);
		if(iter != memo.end())
			cout<<iter->second<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}