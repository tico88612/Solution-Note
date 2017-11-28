#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int N;
	scanf("%lld",&N);
	if(N>0)
		printf("%lld\n",(1+N)*N/2);
	else
		printf("%lld\n",(1-N)*N/2+1);
	return 0;
}