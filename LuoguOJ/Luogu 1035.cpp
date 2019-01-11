#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	double ans=0,k;
	cin>>k;
	for(int i=1;i;i++){
		ans+=(double)1.0/(double)(i);
		if(ans>k){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}