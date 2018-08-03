#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	long long int enter[10001]={1,1};
	for(int i=2;i<10001;i++){
		enter[i]=(enter[i-1]+enter[i-2])%1000000007;
	}
	int N;
	while(cin>>N){
		cout<<enter[N]<<'\n';
	}
	return 0;
}