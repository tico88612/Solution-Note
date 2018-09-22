#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	string enter;
	int start=1;
	while(getline(cin,enter)){
		if(start&&enter=="___________"){
			start=0;
		}
		else if(enter=="___________"){
			start=1;
		}
		else{
			char s=0;
			int a=128;
			for(unsigned int i=1;i<10;i++){
				if(i==6)
					continue;
				else{
					s+=((enter[i]=='o')?1:0)*a;
					a>>=1;
				}
			}
			printf("%c",s);
		}
	}
	return 0;
}