#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int prime[1000000]={2,3,5,7},primeN=4;
int enter[21],enterN,enterK;
void build_prime(){
	for(int i=11;i<=10000;i++){
		int isprime=1;
		for(int j=0;isprime&&i>=prime[j]*prime[j];j++){
			if(i%prime[j]==0)
				isprime=0;
		}
		if(isprime)
			prime[primeN++]=i;
	}
}
bool isprime_judge(int N){
	for(int j=0;N>=prime[j]*prime[j];j++){
		if(N%prime[j]==0)
			return false;
	}
	return true;
}
int recursion(int i,int aa,int total){
	if(aa==enterK)
		if(isprime_judge(total))
			return 1;
	int nowtotal=0;
	for(int j=i;j<enterN;j++){
		nowtotal+=recursion(j+1,aa+1,total+enter[j]);
	}
	return nowtotal;
}

int main(){
	build_prime();
	cin>>enterN>>enterK;
	for(int i=0;i<enterN;i++)
		cin>>enter[i];
	cout<<recursion(0,0,0)<<'\n';
	return 0;
}