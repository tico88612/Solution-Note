#include <stdio.h>
using namespace std;
int main(){
	int N;
	char enter[2001];
	scanf("%d\n",&N);
	for(int i=0;i<N;i++){
		scanf("%c\n",&enter[i]);
	}
	int a=0,b=N-1,i=0;
	while(a<=b){
		int judge=0;
		for(int i=0;a+i<=b;i++){
			if(enter[a+i]<enter[b-i]){
				judge=1;
				break;
			}
			else if(enter[a+i]>enter[b-i]){
				judge=0;
				break;
			}
		}
		if(judge){
			printf("%c",enter[a++]);
		}
		else{
			printf("%c",enter[b--]);
		}
		i++;
		if(i>=80){
			printf("\n");
			i=0;
		}
	}
	return 0;
}