#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int catalan(long long int N){
	long long int n2=2*N;
	long long int ans=1;
	for(long long int i=N+1;i<=n2;i++){
		ans*=i;
		ans/=(i-N);
	}
	ans/=(N+1);
	return ans;
}
int main(){
	_
	long long int query[21]={0,1};
	for(long long int i=1;i<21;i++){
		query[i]=catalan(i);
	}
	int N;
	cin>>N;
	cout<<query[N]<<'\n';
	return 0;
}