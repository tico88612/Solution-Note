#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	for(int i=100;i<=333;i++){
		vector<bool> NN(10,0);
		NN[0]=1;
		int enter[3];
		for(int j=0;j<3;j++){
			enter[j]=i*(j+1);
		}
		bool ans=1;
		for(int j=0;j<3&&ans;j++){
			int sss=enter[j];
			while(sss&&ans){
				if(NN[sss%10]){
					ans=0;
				}
				else{
					NN[sss%10]=1;
				}
				sss/=10;
			}
		}
		if(ans){
			printf("%d %d %d\n",enter[0],enter[1],enter[2]);
		}

	}
	return 0;
}