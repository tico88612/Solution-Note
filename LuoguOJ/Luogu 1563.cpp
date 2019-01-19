#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item {
	bool Turn;
	string Name;
};
int main(){
	_
	int N,M;
	cin>>N>>M;
	vector<Item> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i].Turn>>enter[i].Name;
	}
	int Now=0;
	for(int i=0;i<M;i++){
		int TT,ST;
		cin>>TT>>ST;
		if(enter[Now].Turn^TT){
			Now+=ST;
		}
		else{
			Now-=ST;
		}
		Now=((Now%N)+N)%N;
	}
	cout<<enter[Now].Name<<'\n';
	return 0;
}