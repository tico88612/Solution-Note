#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int enter;
	char s[10000];
	while(cin>>s){
		if(s[0]=='-'){
			break;
		}
		else if(s[1]=='x'){
			sscanf(s,"%llx",&enter);
			printf("%lld\n",enter);
		}
		else{
			sscanf(s,"%lld",&enter);
			printf("0x%llX\n",enter);
		}
	}
	return 0;
}