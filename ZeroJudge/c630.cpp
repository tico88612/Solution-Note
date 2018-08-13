#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct c630 {
	double a,n,s;
};
bool operator < (c630 A,c630 B){
	return A.s>B.s;
}
int main(){
	_
	c630 Store[10000];
	int N=0;
	while(cin>>Store[N].a>>Store[N].n){
		Store[N].s=log10(Store[N].a)*Store[N].n;
		N++;
	}
	sort(Store,Store+N);
	for(int i=0;i<N;i++){
		printf("%.0lf %.0lf\n",Store[i].a,Store[i].n);
	}
	return 0;
}