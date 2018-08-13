#include <stdio.h>
int main(){
	int N;
	while(scanf("%d",&N)&&N){
		int ans=0;
		while(N&1){
			ans++;
			N>>=1;
		}
		printf("%d\n",ans);
	}
	return 0;
}