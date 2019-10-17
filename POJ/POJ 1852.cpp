#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int L,n,x[1000000];
		cin>>L>>n;
		for(int i=0;i<n;i++)
			cin>>x[i];
		int minT=0,maxT=0;
		for(int i=0;i<n;i++){
			minT=max(minT,min(x[i],L-x[i]));
			maxT=max(maxT,max(x[i],L-x[i]));
		}
		cout<<minT<<" "<<maxT<<'\n';
	}
	return 0;
}