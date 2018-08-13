#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N,k;
	vector<int> v;
	cin>>N>>k;
	v.resize(N);
	for(int i=0;i<N;i++)
		cin>>v[i];
	while(k--){
		int S;
		cin>>S;
		int down=0,up=N;
		while(down+1<up){
			int mid=(up+down)/2;
			if(S>=v[mid]){
				down=mid;
			}
			else if(S<v[mid]){
				up=mid;
			}
		}
		if(v[down]==S){
			cout<<down+1<<'\n';
		}
		else{
			cout<<0<<'\n';
		}
	}
	return 0;
}