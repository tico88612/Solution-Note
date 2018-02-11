#include <bits/stdc++.h>
using namespace std;
int main(){
	char enter[10000];
	while(fgets(enter,10000,stdin)){
		int strn=strlen(enter);
		int now=0;
		for(int i=0;i<strn;i++){
			if(enter[i]=='!'){
				printf("\n");
			}
			else if('0'<=enter[i]&&enter[i]<='9'){
				now+=enter[i]-'0';
			}
			else if(('A'<=enter[i]&&enter[i]<='Z')||enter[i]=='*'||enter[i]==' '||enter[i]=='b'){
				for(int j=0;j<now;j++){
					if(enter[i]=='b')
						printf(" ");
					else
						printf("%c",enter[i]);
				}
				now=0;
			}
		}
		printf("\n");
	}
	return 0;
}