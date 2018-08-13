#include <stdio.h>
int main(){
	long long int ans=0;
	long long int cnto=0,cntw=0;
	char s=getchar();
	while(1){
		if(s=='\n')
			break;
		if(s=='A'){
			cntw+=cnto;
		}
		if(s=='Q'){
			cnto++;
			ans+=cntw;
		}
		s=getchar();
	}
	printf("%lld\n",ans);
	return 0;
}