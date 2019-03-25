#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int H11=0,L11=0,H21=0,L21=0;
	int memory[10000][2],eee=0;
	char ch;
	while(ch=getchar()){
		if(ch=='E')
			break;
		if(ch=='W'){
			H11++;
			H21++;
		}
		else if(ch=='L'){
			L11++;
			L21++;
		}
		if((H11>=11&&H11-L11>=2)||(L11>=11&&L11-H11>=2)){
			printf("%d:%d\n", H11, L11);
			H11=L11=0;
		}
		if((H21>=21&&H21-L21>=2)||(L21>=21&&L21-H21>=2)){
			memory[eee][0]=H21;
			memory[eee++][1]=L21;
			H21=L21=0;
		}
	}
	// if(H11>0||L11>0)
		printf("%d:%d\n", H11, L11);
	printf("\n");
	for(int i=0;i<eee;i++)
		printf("%d:%d\n", memory[i][0], memory[i][1]);
	// if(H21>0||L21>0)
		printf("%d:%d\n", H21, L21);
	return 0;
}