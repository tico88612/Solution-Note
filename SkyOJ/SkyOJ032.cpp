#include <bits/stdc++.h>
using namespace std;
int main(){
	char enter[2001];
	while(~scanf("%s",enter)){
		int a=0,b=strlen(enter)-1;
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
		}
		printf("\n");
	}
	return 0;
}