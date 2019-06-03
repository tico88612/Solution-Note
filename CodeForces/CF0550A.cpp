#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	cin>>enter;
	int AB=0,BA=0;
	for(unsigned int i=0;i<enter.length();i++){
		if(enter[i]=='A'&&i!=enter.length()-1&&AB==0){
			if(enter[i+1]=='B'){
				AB=1;
				i++;
			}
		}
		else if(enter[i]=='B'&&i!=enter.length()-1&&BA==0&&AB==1){
			if(enter[i+1]=='A'){
				BA=1;
				i++;
			}
		}
	}
	int fron=(AB&BA),back=0;
	AB=BA=0;
	for(unsigned int i=0;i<enter.length();i++){
		if(enter[i]=='B'&&i!=enter.length()-1&&BA==0){
			if(enter[i+1]=='A'){
				BA=1;
				i++;
			}
		}
		else if(enter[i]=='A'&&i!=enter.length()-1&&AB==0&&BA==1){
			if(enter[i+1]=='B'){
				AB=1;
				i++;
			}
		}
	}
	back=(AB&BA);
	if(fron||back)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}