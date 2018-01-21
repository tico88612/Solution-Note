#include <bits/stdc++.h>
using namespace std;
int prime[100000]={2,3,5,7},primenum=4;
int mmmmmm[1000002]={0};
int main(){
	for(int i=8;i<=1000000;i++){
		int judge=1;
		for(int j=0;judge&&prime[j]<=sqrt(i);j++){
			if(i%prime[j]==0){
				judge=0;
			}
		}
		if(judge){
			// printf("%d ",i);
			prime[primenum++]=i;
		}
	}
	// printf("\n");
	int numm[1000001]={0},nummmm[1000001]={0};
	for(int i=0;i<primenum;i++){
		numm[prime[i]]=1;
		nummmm[prime[i]]=1;
		int q=prime[i];
		int a=0;
		while(q>0){
			a+=q%10;
			q/=10;
		}
		if(nummmm[a]==0){
			numm[prime[i]]=0;
		}
		// if(numm[prime[i]]==1)
		// 	printf("%d ",prime[i]);
	}
	
	for(int i=1;i<1000001;i++){
		mmmmmm[i]=mmmmmm[i-1]+numm[i];
	}
	int T;
	cin>>T;
	while(T--){
		int st,en;
		cin>>st>>en;
		cout<<mmmmmm[en]-mmmmmm[st-1]<<endl;
	}
	return 0;
}