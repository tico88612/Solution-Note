#include <stdio.h>

int main(){
	int a[101]={0};
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int s;
		scanf("%d",&s);
		a[s]++;
	}
	for(int i=0;i<101;i++){
		while(a[i]--) {
		    printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}