#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<long long int> enter;
int main(){
	int N,K;
	cin>>N>>K;
	enter.resize(N+1);
	long long int nowsum=0;
	int nowK=0;
	for(int i=0;i<=N;i++){
		if(i==0){
			enter[i]=1;
			nowsum+=enter[i];
			nowsum%=100003;
			nowK++;
		}
		else{
			enter[i]=nowsum;
			nowsum+=enter[i];
			nowsum%=100003;
			nowK++;
			if(nowK>K){
				nowsum-=enter[i-K];
				nowsum+=100003;
				nowsum%=100003;
			}
		}
	}
	cout<<enter[N]<<'\n';
	return 0;
}