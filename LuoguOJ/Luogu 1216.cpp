#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
ll enter[1000][1000];
int main(){
    _
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++){
			cin>>enter[i][j];
		}
	}
	for(int i=N-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			enter[i][j]+=max(enter[i+1][j],enter[i+1][j+1]);
		}
	}
	cout<<enter[0][0]<<'\n';
	return 0;
}