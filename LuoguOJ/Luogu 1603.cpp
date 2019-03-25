#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// https://blog.csdn.net/qq_25827845/article/details/70304265
string nummm[21]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
bool cmp(string a,string b){
	int length =(int)a.length()+b.length();
	string str1=a+b;
	string str2=b+a;
	for(int i=0;i<length;i++){
		if(str1[i]<str2[i]){
			// cout<<"She";
			return true;
		}
		else if(str1[i]>str2[i]){
			// cout<<"He";
			return false;
		}
	}
	return false;//////
}
int main(){
	_
	vector<string> v(7);
	int N=0;
	while(cin>>v[N]){
		if(v[N][0]=='.')
			break;
		else
			N++;
	}
	vector<string> enter(7);
	for(int i=0;i<7;i++){
		for(int j=1;j<21;j++){
			if(v[i]==nummm[j]){
				int kkkk=j*j%100;
				if(kkkk<10)
					enter[i]="0"+to_string(kkkk);
				else
					enter[i]=to_string(kkkk);
			}
			else if(v[i]=="a"||v[i]=="another"||v[i]=="first"){
				int kkkk=1;
				if(kkkk<10)
					enter[i]="0"+to_string(kkkk);
				else
					enter[i]=to_string(kkkk);
			}
			else if(v[i]=="second"||v[i]=="both"){
				int kkkk=4;
				if(kkkk<10)
					enter[i]="0"+to_string(kkkk);
				else
					enter[i]=to_string(kkkk);
			}
			else if(v[i]=="third"){
				int kkkk=9;
				if(kkkk<10)
					enter[i]="0"+to_string(kkkk);
				else
					enter[i]=to_string(kkkk);
			}
		}
	}
	sort(enter.begin(), enter.end(), cmp);
	int ttttt=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<(int)enter[i].length();j++){
			if(ttttt)
				cout<<enter[i][j];
			else{
				if(enter[i][j]!='0'){
					cout<<enter[i][j];
					ttttt=1;
				}
			}
		}
	}
	if(!ttttt)
		cout<<"0";
	cout<<'\n';
	return 0;
}