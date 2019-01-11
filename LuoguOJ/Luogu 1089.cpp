#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter[12];
	for(int i=0;i<12;i++)
		cin>>enter[i];
	int modd=0,sum=0,wrong=0;
	for(int i=0;i<12&&modd>=0;i++){
		modd+=300;
		modd-=enter[i];
		if(modd>=0){
			sum+=modd/100;
			modd%=100;
		}
		else{
			wrong=i; 
		}
	}
	if(modd<0){
		printf("-%d\n", wrong+1);
	}
	else{
		sum*=100;
		sum+=sum/10*2;
		sum+=modd;
		printf("%d\n", sum);
	}
	return 0;
}