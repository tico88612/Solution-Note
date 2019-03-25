#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	string enter;
	cin>>enter;
	for(int i=0;i<(int)enter.length();i++){
		if(enter[i]=='-'){
			if(tolower(enter[i-1])<tolower(enter[i+1])&&((isalpha(enter[i+1])&&isalpha(enter[i-1]))||(isdigit(enter[i+1])&&isdigit(enter[i-1])))){
				if(p3==2){
					for(char j=enter[i+1]-1;j>enter[i-1];j--){
						for(int k=0;k<p2;k++){
							if(p1==1)
								cout<<(char)tolower(j);
							else if(p1==2)
								cout<<(char)toupper(j);
							else
								cout<<"*";
						}
					}
				}
				else{
					for(char j=enter[i-1]+1;j<enter[i+1];j++){
						for(int k=0;k<p2;k++){
							if(p1==1)
								cout<<(char)tolower(j);
							else if(p1==2)
								cout<<(char)toupper(j);
							else
								cout<<"*";
						}
					}
				}
			}
			else{
				cout<<enter[i];
			}
		}
		else{
			cout<<enter[i];
		}
	}
	cout<<'\n';
	return 0;
}