#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int vec[50001];
	for(int i=0;i<N;i++)
		cin>>vec[i];
	sort(vec,vec+N);
	int Q;
	cin>>Q;
	while(Q--){
		int query;
		cin>>query;
		int *lower=lower_bound(vec,vec+N,query);
		int *upper=upper_bound(vec,vec+N,query);
		if((lower==vec+N)||(*lower>=query))
			lower--;
		if(lower-vec<0)
			printf("X ");
		else
			printf("%d ",*lower);
		if(upper-vec>=N)
			printf("X\n");
		else
			printf("%d\n",*upper);
	}
	return 0;
}