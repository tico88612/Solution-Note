#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int enter[50000+5];
bool run(long long int R,long long int N,long long int K){
	long long int numn=0;
	long long int location,i=0;
	while(i<N) {
		location=enter[i]+R;
		numn++;
		if(numn>K)
			return 0;
		if(enter[N-1]<=location)
			return 1;
		while(enter[i]<=location&&i<N)
			i++;
	}
	return 1;
}
int main(){
	_
	int T,K;
	cin>>T>>K;
	for(int i=0;i<T;i++)
		cin>>enter[i];
	sort(enter,enter+T);
	long long int R=enter[T-1]-enter[0];
	if(K!=1){
		long long int L=1;
		while(run(R-1,T,K)){
			long long int mid=(L+R)/2;
			if(run(mid,T,K))
				R=mid;
			else
				L=mid+1;
			if(L==R)
				break;
		}
	}
	printf("%lld\n",R);
	return 0;
}