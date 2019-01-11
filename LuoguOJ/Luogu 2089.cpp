#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int ans[10000][10]={0},ansN=0;
int nowrun[10]={0};
void dfs(int nowN,int i){
	if(i==10&&nowN==0){
		for(int j=0;j<10;j++){
			ans[ansN][j]=nowrun[j];
		}
		ansN++;
		return;
	}
	if(i==10){
		return;
	}
	for(int j=1;j<=3;j++){
		nowrun[i]=j;
		if(nowN-j>=0)
			dfs(nowN-j,i+1);
	}
	return;
}
int main(){
	_
	int N;
	cin>>N;
	if(N<10||N>30)
		cout<<"0"<<'\n';
	else{
		dfs(N,0);
		cout<<ansN<<'\n';
		for(int i=0;i<ansN;i++){
			cout<<ans[i][0];
			for(int j=1;j<10;j++){
				cout<<" "<<ans[i][j];
			}
			cout<<'\n';
		}
	}
	return 0;
}