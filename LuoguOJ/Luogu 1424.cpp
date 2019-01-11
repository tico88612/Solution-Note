#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int arr[7]={250,250,250,250,250,0,0};
	int X,N;
	cin>>X>>N;
	long long int ans=0;
	for(int i=X-1;i<7;i++){
		ans+=arr[i];
		N--;
	}
	ans+=1250*(N/7);
	N%=7;
	for(int i=0;i<N;i++){
		ans+=arr[i];
	}
	cout<<ans<<'\n';
	return 0;
}