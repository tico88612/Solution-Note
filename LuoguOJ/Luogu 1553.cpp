#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string enter;
	while(cin>>enter){
		int dot=0,div=0;
		for(int i=0;i<enter.length()&&!dot&&!div;i++)
			if(enter[i]=='.')
				dot=i;
			else if(enter[i]=='/')
				div=i;
		if(enter[enter.length()-1]=='%'){
			string qu;
			int nowzero=1;
			for(int i=enter.length()-2;i>=0;i--){
				if(nowzero&&enter[i]!='0'){
					nowzero=0;
					qu+=enter[i];
				}
				else if(!nowzero){
					qu+=enter[i];
				}
			}
			if(qu=="")
				cout<<"0";
			else
				cout<<qu;
			cout<<"%"<<'\n';
		}
		else if(dot||div){
			string qu;
			int nowzero=1;
			for(int i=((dot)?dot:div)-1;i>=0;i--){
				if(nowzero&&enter[i]!='0'){
					nowzero=0;
					qu+=enter[i];
				}
				else if(!nowzero){
					qu+=enter[i];
				}
			}
			if(qu=="")
				cout<<"0";
			else
				cout<<qu;
			cout<<enter[((dot)?dot:div)];
			qu="";
			nowzero=1;
			for(int i=enter.length()-1;i>((dot)?dot:div);i--){
				if(nowzero&&enter[i]!='0'){
					nowzero=0;
					qu+=enter[i];
				}
				else if(!nowzero){
					qu+=enter[i];
				}
			}
			int aaa=qu.length();
			aaa--;
			while(qu[aaa]=='0'&&aaa>=0) {
			    qu[aaa]=0;
			    aaa--;
			}
			if(qu=="")
				cout<<"0";
			else
				cout<<qu;
			cout<<'\n';
		}
		else{
			string qu;
			int nowzero=1;
			for(int i=enter.length()-1;i>=0;i--){
				if(nowzero&&enter[i]!='0'){
					nowzero=0;
					qu+=enter[i];
				}
				else if(!nowzero){
					qu+=enter[i];
				}
			}
			if(qu=="")
				cout<<"0"<<'\n';
			else
				cout<<qu<<'\n';
		}
	}
	return 0;
}