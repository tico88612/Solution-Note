#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int enter[13],N;
int RRR[6];
void dfs(int s,int mark){
	if(s==6){
		for(int i=0;i<6;i++){
			cout<<RRR[i];
			if(i==5)
				cout<<'\n';
			else
				cout<<' ';
		}
		return;
	}
	else{
		for(int i=mark;i<N;i++){
			RRR[s]=enter[i];
			dfs(s+1,i+1);
		}
		return ;
	}
}
int main(){
	_
	int T=0;
	while(cin>>N&&N){
		if(T)
			cout<<'\n';
		T++;
		for(int i=0;i<N;i++)
			cin>>enter[i];
		dfs(0,0);
	}
	return 0;
}