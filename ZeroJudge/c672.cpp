#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	while(getline(cin,enter)){
		if(enter[0]=='#'){
			for(int i=1;i<6;i+=2){
				int result=0;
				int a=('A'<=enter[i]&&enter[i]<='F')?(enter[i]-'A'+10):(enter[i]-'0');
				int b=('A'<=enter[i+1]&&enter[i+1]<='F')?(enter[i+1]-'A'+10):(enter[i+1]-'0');
				result = a*16+b;
				if(i==1)
					printf("%d", result);
				else
					printf(" %d", result);
			}
			printf("\n");
		}
		else{
			stringstream ss;
			ss<<enter;
			int tmp[3];
			for(int i=0;i<3;i++)
				ss>>tmp[i];
			printf("#");
			for(int i=0;i<3;i++){
				char a = ((tmp[i]/16)>=10)?((tmp[i]/16)-10+'A'):((tmp[i]/16)+'0');
				char b = ((tmp[i]%16)>=10)?((tmp[i]%16)-10+'A'):((tmp[i]%16)+'0');
				printf("%c%c",a,b);
			}
			printf("\n");
		}

	}
	return 0;
}