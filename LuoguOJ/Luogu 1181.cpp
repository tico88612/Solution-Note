#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	long long int N,M;
	cin>>N>>M;
	long long int ans=1;
	vector<long long int> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i];
	}
	long long int nowM=0;
	for(int i=0;i<N;i++){
		if(nowM+enter[i]>M){
			nowM=enter[i];
			ans++;
		}
		else{
			nowM+=enter[i];
		}
	}
	cout<<ans<<'\n';
	return 0;
}