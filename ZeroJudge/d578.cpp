#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	long long int N,M;
	while(~scanf("%lld %lld",&N,&M)&&N){
		int cnt[1024][128]={0};
		int RUN=N*M-1;
		char str[1024];
		getchar();
		while(RUN--){
			fgets(str,1024,stdin);
			for(int i=0;str[i]!='\n';i++){
				cnt[i][str[i]]++;
			}
		}
		for(int i=0;i<1024;i++){
			for(int j=0;j<128;j++){
				if(cnt[i][j]%M){
					printf("%c",j);
					j=128;
				}
			}
		}
		printf("\n");
	}
	return 0;
}