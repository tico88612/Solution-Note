#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void g(int t){
	if(t){
		g((t-1)/26);
		putchar('A'+(t-1)%26);
	}
}
int main(){
	int N,x,y;
	char enter[66],*s;
	scanf("%d ",&N);
	while(N--){
		fgets(enter,65,stdin);
		enter[strlen(enter)-1]=0;
		if(sscanf(enter,"%*c%d%*c%d",&x,&y)==2){
			g(y);
			printf("%d\n",x);
		}
		else{
			int ans=0;
			for(s=enter;*s>='A';s++){
				ans=ans*26+(*s-'A'+1);
			}
			//s finally read integer
			printf("R%sC%d\n",s,ans);
		}
	}
	return 0;
}