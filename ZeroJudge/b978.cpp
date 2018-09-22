#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	char enter[102];
	while(~scanf("%s",enter)){
		char restoree[102]={0};
		int strn=strlen(enter);
		for(int i=0;i<strn;i++){
			int s;
			scanf("%d",&s);
			restoree[s-1]=enter[i];
		}
		printf("%s\n",restoree);
	}
	return 0;
}