#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	while(cin>>N){
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N-i;j++)
				cout<<"_";
			for(int j=1;j<=2*(i-1)+1;j++)
				cout<<"*";
			for(int j=1;j<=N-i;j++)
				cout<<"_";
			cout<<'\n';
		}
	}
	return 0;
}