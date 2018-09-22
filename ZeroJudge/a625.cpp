#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	double query[277]={0},a=0.0;
	for(int i=1;a<=5.20;i++){
		a+=(1.0/(i+1));
		query[i]=a;
	}
	double enter;
	while(cin>>enter){
		int l=0,r=277;
		while(l+1<r){
			int mid=(l+r)/2;
			if(enter>query[mid]){
				l=mid;
			}
			else{
				r=mid;
			}
		}
		cout<<l+1<<" card(s)"<<'\n';
	}
	return 0;
}