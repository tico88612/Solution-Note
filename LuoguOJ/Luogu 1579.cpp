#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int prime[10000]={2,3,5,7},primeN=4;
void build_prime(){
	for(int i=8;i<20000;i++){
		int judge=1;
		for(int j=0;judge&&prime[j]*prime[j]<=i;j++){
			if(i%prime[j]==0)
				judge=0;
		}
		if(judge){
			// cout<<i<<'\n';
			prime[primeN++]=i;
		}
	}
}
int main(){
	build_prime();
	int enter;
	while(cin>>enter){
		int fail=1;
		for(int i=0;fail&&i<primeN;i++){
			for(int j=i;j<primeN&&fail;j++){
				bool yes=binary_search(prime,prime+primeN,enter-prime[i]-prime[j]);
				if(yes){
					cout<<prime[i]<<" "<<prime[j]<<" "<<enter-prime[i]-prime[j]<<'\n';
					fail=0;
				}
			}
		}
	}
	return 0;
}