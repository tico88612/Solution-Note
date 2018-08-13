#include <stdio.h>
//時間複雜度 O(N)，空間複雜度 O(1)？
int main(){
	int N,ans=0;
	scanf("%d",&N);
	N--;
	while(N--){
		int S;
		scanf("%d",&S);
		ans^=S;
	}
	printf("%d\n",ans);
	return 0;
}