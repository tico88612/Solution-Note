#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int prime[1000000]={2,3,5,7},primeN=4;
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
bool is_palindrome(int N){
	int arr[20]={0},now=0;
	while(N){
		arr[now++]=N%10;
		N/=10;
	}
	for(int i=0;i<(((now+1)/2)-((now)%2));i++){
		if(arr[i]!=arr[now-1-i])
			return false;
	}
	return true;
}
int main(){
	build_prime();
	int a,b;
	cin>>a>>b;
	// while(cin>>a>>b){
	for(int i=a;i<=b;i++){
		if(i%2&&is_palindrome(i)){
			if(isprime_judge(i))
				cout<<i<<'\n';
		}
		if(i>9999999) break; //What the Fuxk is that??
		// https://www.twblogs.net/a/5c974627bd9eee491b623b86/zh-cn
	}
	// }
	return 0;
}