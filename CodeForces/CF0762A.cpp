#include <bits/stdc++.h>
using namespace std;
vector <long long int> arr;
int main(){
	long long int N,K;
	cin>>N>>K;
	int q=0;
	for(long long int i=1;i<=sqrt(N);i++){
		if(N%i==0){
			arr.push_back(i);
			q++;
			if(N/i!=i){
				arr.push_back(N/i);
				q++;
			}
		}
	}
	sort(arr.begin(),arr.end());
	if(q<=K-1){
		printf("-1\n");
	}
	else{
		printf("%lld\n",arr[K-1]);
	}
	return 0;
}