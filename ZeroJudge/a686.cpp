#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int T;
	cin>>T;
	while(T--){
		long long int x,y,z;
		cin>>x>>y>>z;
		long long int minnn=x-y;
		if(minnn<=0){
			printf("1\n");
		}
		else if(y-z<=0){
			printf("Poor Snail\n");
		}
		else{
			long long int ans=(minnn)/(y-z);
			long long int ans2=(minnn)/(y-z)+2;
			if((minnn)%(y-z)==0)
				printf("%lld\n",ans+1);
			else
				printf("%lld\n",ans2);
		}
		
	}
	return 0;
}