#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string enter;
	while(getline(cin,enter)){
		for(unsigned int i=0;i<enter.length();i++){
			while(enter[i]==' '){
				i++;
			}
			for(unsigned int j=0;j<enter.length();j++){
				while(enter[j]==' '){
					printf(" ");
					j++;
				}
				if(i==j)
					printf("%c",toupper(enter[j]));
				else
					printf("%c",tolower(enter[j]));
			}
			printf("\n");

	}
	return 0;
		}
}