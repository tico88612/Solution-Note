#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int enter[35]={0},r=0;
int main(){
	_
	long long int run=1;
	while(run/1000000000==0){
		enter[r++]=3*run;
		run*=2;
	}
	long long int T;
	cin>>T;
	while(T--){
		long long int K;
		cin>>K;
		if(K%3==2)
			cout<<2<<'\n';
		else{
			int MINUS=0;
			for(int i=r-1;i>=0&&K>3;i--){
				if(K>enter[i]){
					MINUS++;
					K-=enter[i];
				}
			}
			if(MINUS%2){
				if(K==1)
					cout<<3<<'\n';
				else
					cout<<1<<'\n';
			}
			else
				cout<<K<<'\n';
		}
	}
	return 0;
}