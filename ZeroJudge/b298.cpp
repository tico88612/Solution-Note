#include <bits/stdc++.h>
using namespace std;
bool Store[10001]={0};
vector<vector<int>> v;
void resure(int x){
	if(!Store[x]){
		Store[x]=1;
		for(int i=0;i<(int)v[x].size();i++){
			resure(v[x][i]);
		}
	}
	
}
int main(){
	int N,M,L,Q;
	cin>>N>>M>>L>>Q;
	v.resize(N+1);
	for(int i=0;i<M;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
	}
	for(int i=0;i<L;i++){
		int a;
		cin>>a;
		resure(a);
	}
	for(int i=0;i<Q;i++){
		int a;
		cin>>a;
		if(Store[a])
			cout<<"TUIHUOOOOOO"<<endl;
		else
			cout<<"YA~~"<<endl;
	}
	return 0;
}