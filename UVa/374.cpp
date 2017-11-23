#include <bits/stdc++.h>
using namespace std;
long long int run(long long int B,long long int P,long long int M){
	long long int rrr=1;
	if(P==0){
		return rrr%M;
	}
	else if(P==1){
		return B%M;
	}
	else{
		rrr = run(B,P/2,M);
		if(P%2){
			return rrr*rrr*B%M;
		}
		else
			return rrr*rrr%M;
	}
}
int main(){
	long long int B,P,M;
	while(cin>>B>>P>>M){
		printf("%lld\n",run(B,P,M));
	}
	return 0;
}