#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct st
{
	int total;
	int no;
};
bool cmp(st a,st b){
	return a.total<b.total;
}
int main(){
	_
	int N,T;
	while(~scanf("%d%d",&N,&T)){
		vector<st> enter(T);
		for(int i=0;i<T;i++){
			enter[i].total=0;
			enter[i].no=i+1;
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<T;j++){
				int H,M;
				scanf("%d:%d",&H,&M);
				enter[j].total+=H*60+M;
			}
		}
		sort(enter.begin(), enter.end(), cmp);
		for(int i=0;i<T;i++){
			cout<<enter[i].no<<' '<<enter[i].total<<'\n';
		}
	}
	return 0;
}