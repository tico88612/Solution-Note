#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long int arr[100000+5]={0};
int main(){
	_
	int N,M;
	while(cin>>N>>M){
		for(int i=1;i<=N;i++){
			cin>>arr[i];
			if(i>1)
				arr[i]+=arr[i-1];
		}
		for(int i=0;i<M;i++){
			int L,R;
			cin>>L>>R;
			printf("%lld\n",arr[R]-arr[L-1]);
		}
	}
	return 0;
}