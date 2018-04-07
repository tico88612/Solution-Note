#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		printf("Case %d:\n",i);
		int N;
		cin>>N;
		int ssort[101]={0};
		for(int j=0;j<N;j++){
			int q;
			cin>>q;
			if(q>=0&&q<=100)
				ssort[q]++;
		}
		int fir=1;
		for(int j=0;j<=100;j++){
			while(ssort[j]--){
				if(fir){
					printf("%d",j);
					fir=0;
				}
				else{
					printf(" %d",j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}