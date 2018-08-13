#include <cstdio>
using namespace std;
int main(){
	int N;
	scanf("%d",&N);
	getchar();
	while(N--){
		long long int ans=0;
		long long int cnto=0,cntw=0;
		char s=getchar();
		while(1){
			if(s=='\n')
				break;
			if(s=='w'){
				cntw+=cnto;
			}
			if(s=='O'){
				cnto++;
				ans+=cntw;
				ans%=1000000007;
			}
			s=getchar();
		}
		printf("%lld\n",ans);
	}
	return 0;
}