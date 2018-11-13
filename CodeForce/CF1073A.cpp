#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	string enter;
	cin>>enter;
	for(unsigned int i=0;i<enter.length()-1;i++){
		if(enter[i]!=enter[i+1]){
			cout<<"YES"<<'\n'<<enter[i]<<enter[i+1];
			return 0;
		}
	}
	cout<<"NO"<<'\n';
	return 0;
}