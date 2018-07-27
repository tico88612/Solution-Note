#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	_
	int N,enter[50000+2];
	while(cin>>N){
		bool visit[50000+2]={0};
		for(int i=0;i<N;i++){
			cin>>enter[i];
		}
		int ans=0;
		for(int i=0;i<N;i++){
			if(!visit[i])
				ans++;
			while(!visit[i]){
				visit[i]=true;
				i=enter[i];
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}