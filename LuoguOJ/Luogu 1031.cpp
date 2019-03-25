#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// https://www.luogu.org/discuss/show/51216
int main(){
	int N,sum=0;
	cin>>N;
	vector<int> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i];
		sum+=enter[i];
	}
	int avg=sum/N,timee=N,st=-1;
	sum=0;
	for(int i=0;i<N;i++){
		sum+=enter[i];
		if(sum==(i-st)*avg){
			sum=0;
			timee--;
			st=i;
		}
	}
	cout<<timee<<'\n';
	return 0;
}