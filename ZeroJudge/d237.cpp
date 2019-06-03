#include <bits/stdc++.h>
using namespace std;
int prime[1000000]={2,3,5,7},all=4,maxxx=2000000;
int main(){
	long long int ans=17;
	for(int i=8;i<maxxx;i++){
		int is=1;
		for(int j=0;j<all&&(prime[j]*prime[j]<=i)&&is;j++){
			if(i%prime[j]==0)
				is=0;
		}
		if(is){
			prime[all++]=i;
			ans+=i;
			// printf("%d\n",i);
			//printf("%d\n",all);
		}
	}
	printf("%lld\n",ans);
	return 0;
}