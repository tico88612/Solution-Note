#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> enter(N);
	set<int> sss;
	for(int i=0;i<N;i++)
		cin>>enter[i];
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(enter[j])
				sss.insert(enter[i]+enter[j]);
		}
	}
	int ans=0;
	for(auto it=sss.begin();it!=sss.end();it++){
		for(int i=0;i<N;i++){
			if(*it==enter[i]){
				ans++;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}