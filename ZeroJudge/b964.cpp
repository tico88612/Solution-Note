#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		int maxx=-1,minn=101;
		int enter[21];
		for(int i=0;i<N;i++){
			cin>>enter[i];
			if(enter[i]>=60)
				minn=min(minn,enter[i]);
			else
				maxx=max(maxx,enter[i]);
		}
		sort(enter,enter+N);
		for(int i=0;i<N;i++)
			if(i)
				printf(" %d",enter[i]);
			else
				printf("%d",enter[i]);
		printf("\n");
		if(maxx==-1)
			printf("best case\n");
		else
			printf("%d\n",maxx);
		if(minn==101)
			printf("worst case\n");
		else
			printf("%d\n",minn);
	}
	return 0;
}