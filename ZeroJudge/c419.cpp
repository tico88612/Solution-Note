#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	short N;
	while(cin>>N){
		for(short i=0;i<N;i++){
			for(short j=0;j<=N-i-2;j++)
				cout<<"_";
			for(short j=0;j<=i;j++)
				cout<<"*";
			cout<<'\n';
		}
	}
	return 0;
}