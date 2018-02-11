#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	while(cin>>enter){
		list<char> text;
		list<char>::iterator textit;
		textit=text.begin();
		for(unsigned int i=0;i<enter.length();i++){
			if(enter[i]=='[') textit=text.begin();
			else if(enter[i]==']') textit=text.end();
			else text.insert(textit,enter[i]);
		}
		for(auto i=text.begin();i!=text.end();i++){
			printf("%c",*i);
		}
		printf("\n");
	}
	return 0;
}