#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int N;
	while(cin>>N&&N){
		long long int total=0;
		for(long long int i=1;i<N;i++){
			for(long long int j=i+1;j<=N;j++){
				total+=__gcd(i,j);
			}
		}
		printf("%lld\n",total);
	}
	return 0;
}