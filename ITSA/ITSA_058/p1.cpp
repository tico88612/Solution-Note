#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		long long int N,sum=0;
		cin>>N;
		for(int i=1;i*3<=N;i++)
			sum+=i*3;
		cout<<sum<<'\n';
	}
	return 0;
}