#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter[10];
	for(int i=0;i<10;i++){
		cin>>enter[i];
	}
	int N;
	cin>>N;
	int ans=0;
	for(int i=0;i<10;i++){
		if(N+30>=enter[i])
			ans++;
	}
	cout<<ans<<'\n';
	return 0;
}