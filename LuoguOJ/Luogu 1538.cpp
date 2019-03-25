#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string up[10]={"-"," ","-","-"," ","-","-","-","-","-"};
string leftup[10]={"|"," "," "," ","|","|","|"," ","|","|"};
string rightup[10]={"|","|","|","|","|"," "," ","|","|","|"};
string center[10]={" "," ","-","-","-","-","-"," ","-","-"};
string leftdown[10]={"|"," ","|"," "," "," ","|"," ","|"," "};
string rightdown[10]={"|","|"," ","|","|","|","|","|","|","|"};
string down[10]={"-"," ","-","-"," ","-","-"," ","-","-"};
int main(){
	int K;
	cin>>K;
	string enter;
	cin>>enter;
	for(int i=0;i<2*K+3;i++){
		if(!i){
			for(int j=0;j<(int)enter.length();j++){
				cout<<" ";
				for(int wk=0;wk<K;wk++)
					cout<<up[(enter[j]-'0')];
				cout<<" ";
				if(j+1!=(int)enter.length())
					cout<<" ";
			}
		}
		else if(i==1+K){
			for(int j=0;j<(int)enter.length();j++){
				cout<<" ";
				for(int wk=0;wk<K;wk++)
					cout<<center[(enter[j]-'0')];
				cout<<" ";
				if(j+1!=(int)enter.length())
					cout<<" ";
			}
		}
		else if(i==2+2*K){
			for(int j=0;j<(int)enter.length();j++){
				cout<<" ";
				for(int wk=0;wk<K;wk++)
					cout<<down[(enter[j]-'0')];
				cout<<" ";
				if(j+1!=(int)enter.length())
					cout<<" ";
			}
		}
		else if(i<=K){
			for(int j=0;j<(int)enter.length();j++){
				cout<<leftup[(enter[j]-'0')];
				for(int wk=0;wk<K;wk++)
					cout<<" ";
				cout<<rightup[(enter[j]-'0')];
				if(j+1!=(int)enter.length())
					cout<<" ";
			}
		}
		else{
			for(int j=0;j<(int)enter.length();j++){
				cout<<leftdown[(enter[j]-'0')];
				for(int wk=0;wk<K;wk++)
					cout<<" ";
				cout<<rightdown[(enter[j]-'0')];
				if(j+1!=(int)enter.length())
					cout<<" ";
			}
		}
		cout<<'\n';
	}
	
	return 0;
}