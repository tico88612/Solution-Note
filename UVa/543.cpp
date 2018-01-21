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
	cin>>N;
	while(N){
		int i,judge=0;
		for(i=0;prime[i]<=N/2;i++){
			if(NUM[N-prime[i]]){
				judge=1;
				break;
			}
		}
		if(judge){
			printf("%d = %d + %d\n",N,prime[i],N-prime[i]);
		}
		else{
			printf("Goldbach's conjecture is wrong.\n");
		}
		cin>>N;
	}
	return 0;
}