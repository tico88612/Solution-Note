#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	string c[2];
	
	while(cin>>enter){
		c[0]=enter.substr(0,6);
		c[1]=enter.substr(6,6);
		bool judge[3];
		fill(judge,judge+3,false);
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(!judge[j]&&((c[0][i]==c[1][j]&&c[0][5-i]==c[1][5-j])||(c[0][i]==c[1][5-j]&&c[0][5-i]==c[1][j]))){
					judge[j]=true;
					break;
				}
			}
		}
		if(judge[0]&&judge[1]&&judge[2])
			printf("TRUE\n");
		else
			printf("FALSE\n");
	}
	return 0;
}