#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	int enter[100000+2];
	for(int i=0;i<N;i++)
		cin>>enter[i];
	int ans=0,nowmin=enter[0],nowmax=enter[0];
	for(int i=1;i<N;i++){
		if(nowmax<enter[i]){
			ans=max(ans,nowmax-nowmin);
			nowmin=nowmax=enter[i];
		}
		else if(nowmin>enter[i]){
			nowmin=enter[i];
		}
	}
	ans=max(ans,nowmax-nowmin);
	cout<<ans<<'\n';
	return 0;
}