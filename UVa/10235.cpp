#include <bits/stdc++.h>
using namespace std;
int prime[100000]={2,3,5,7},primeNUM=4;
int NUM[1000001]={0};
int main(){
	for(int i=11;i<=1000000;i++){
		int judge=1;
		for(int j=0;judge&&prime[j]<=sqrt(i);j++){
			if(i%prime[j]==0)
				judge=0;
		}
		if(judge){
			prime[primeNUM++]=i;
		}
	}
	for(int i=0;i<primeNUM;i++){
		NUM[prime[i]]++;
	}
	int N;
	while(cin>>N){
		if(NUM[N]){
			int q=N,a=0;
			while(q){
				a*=10;
				a+=q%10;
				q/=10;
			}
			if(NUM[a]&&N!=a){
				printf("%d is emirp.\n",N);
			}
			else{
				printf("%d is prime.\n",N);
			}
		}
		else{
			printf("%d is not prime.\n",N);
		}
	}
	return 0;
}