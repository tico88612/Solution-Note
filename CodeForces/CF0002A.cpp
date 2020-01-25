#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	map<string, int> m;
	string maxname;
	int maxx=-99999;

	int T;
	cin>>T;
	while(T--){
		string enter;
		int NN;
		cin>>enter>>NN;
		if(!m[enter])
			m[enter]=NN;
		else
			m[enter]+=NN;
	}
	for(auto it=m.begin();it!=m.end();it++){
		if(maxx<it->second){
			maxname=it->first;
			maxx=it->second;
		}
	}
	cout<<maxname<<'\n';
	return 0;
}