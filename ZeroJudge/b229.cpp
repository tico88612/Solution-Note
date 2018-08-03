#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	unsigned long long up[52]={0,1},le[52]={0,1},ri[52]={0,1};
	for(int i=1;i<51;i++){
		up[i+1]=up[i]+le[i]+ri[i];
		le[i+1]=up[i]+le[i];
		ri[i+1]=up[i]+ri[i];
	}
	int N;
	cin>>N;
	cout<<up[N]+le[N]+ri[N]<<'\n';
	return 0;
}