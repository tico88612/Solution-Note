#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> enter(N);
	int now=0,ans=0;
	for(int i=0;i<N;i++){
		cin>>enter[i];
		if(i&&enter[i]>enter[i-1]){
			now++;
		}
		else if(!i){
			now++;
		}
		else{
			ans=max(ans,now);
			now=1;
		}
	}
	cout<<ans<<'\n';
	return 0;
}