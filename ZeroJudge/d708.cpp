#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	long long int N;
	cin>>N;
	map<int,int> m;
	long long int A;
	for(int i=0;i<N-1;i++){
		cin>>A;
		map<int,int>::iterator it=m.find(A);
		if(it==m.end())
			m[A]=1;
		else
			m[A]++;
	}
	for(auto it=m.begin();it!=m.end();it++)
		if(it->second%2){
			cout<<it->first<<'\n';
			break;
		}
	return 0;
}