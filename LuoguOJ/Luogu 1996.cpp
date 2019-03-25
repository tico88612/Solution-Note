#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N,M;
	cin>>N>>M;
	M--;
	vector<int> v(N);
	for(int i=0;i<N;i++){
		v[i]=i+1;
	}
	int kick=0;
	while(v.size()){
		kick+=M;
		kick%=N;
		auto w = v.begin()+kick;
		cout<<*w<<" \n"[v.size()==1];
		v.erase(v.begin()+kick);
		N--;
	}
	return 0;
}