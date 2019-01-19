#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> enter(N+1);
	for(int i=N;i>=0;i--)
		cin>>enter[i];
	int isfirst=1;
	for(int i=N;i>=0;i--){
		if(enter[i]!=0){
			if(isfirst){
				if(abs(enter[i])!=1)
					printf("%d", enter[i]);
				else if(enter[i]<0)
					printf("-");
				isfirst=0;
			}
			else{
				if(abs(enter[i])!=1)
					printf("%+d", enter[i]);
				else if(enter[i]<0)
					printf("-");
				else if(enter[i]>0)
					printf("+");
			}
			if(i>1)
				printf("x^%d", i);
			else if(i==1)
				printf("x");
			else if(abs(enter[i])==1)
				printf("%d", abs(enter[i]));
		}
	}
	if(isfirst)
		printf("0");
	printf("\n");
	return 0;
}