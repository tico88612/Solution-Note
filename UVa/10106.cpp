#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[1000],b[1000];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(cin>>a>>b){
		int ans[2000];
		memset(ans,-1,sizeof(ans));
		int stran=strlen(a),strbn=strlen(b);
		int ansn=0;
		reverse(a,a+stran);
		reverse(b,b+strbn);
		for(int i=0;i<stran;i++)
			a[i]-='0';
		for(int i=0;i<strbn;i++)
			b[i]-='0';
		for(int i=0;i<strbn;i++){
			for(int j=0;j<stran;j++){
				if(i==0){
					ans[j]=a[j]*b[i];
				}
				else{
					if(ans[j+i]==-1)
						ans[j+i]=a[j]*b[i];	
					else
						ans[j+i]+=a[j]*b[i];
				}
			}
			ansn=0;
			while(ans[ansn]!=-1){
				if(ans[ansn]>=10){
					if(ans[ansn+1]==-1){
						ans[ansn+1]=ans[ansn]/10;
					}
					else{
						ans[ansn+1]+=ans[ansn]/10;	
					}
				}
				ans[ansn]%=10;
				ansn++;
			}

		}
		int bann=0;
		for(int i=ansn-1;i>=0;i--){
			if(bann==0){
				if(ans[i]>0)
					bann=1;
			}
			if(bann||i==0)
				printf("%d",ans[i]);
		}
		printf("\n");
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	}
	return 0;
}