#include <bits/stdc++.h>
using namespace std;
char enter[11];
//https://www.ettoday.net/dalemon/post/34112
bool vaild(){
	// 2
	if(enter[2]=='A'){
		if(enter[5]!='C'){
			return false;
		}
	}
	else if(enter[2]=='B'){
		if(enter[5]!='D'){
			return false;
		}
	}
	else if(enter[2]=='C'){
		if(enter[5]!='A'){
			return false;
		}
	}
	else if(enter[2]=='D'){
		if(enter[5]!='B'){
			return false;
		}
	}
	//3
	if(enter[3]=='A'){
		if(!(enter[3]!=enter[6]&&enter[6]==enter[2]&&enter[6]==enter[4])){
			return false;
		}
	}
	else if(enter[3]=='B'){
		if(!(enter[3]!=enter[6]&&enter[3]==enter[2]&&enter[3]==enter[4])){
			return false;
		}
	}
	else if(enter[3]=='C'){
		if(!(enter[3]!=enter[2]&&enter[3]==enter[6]&&enter[3]==enter[4])){
			return false;
		}
	}
	else if(enter[3]=='D'){
		if(!(enter[3]!=enter[4]&&enter[3]==enter[6]&&enter[3]==enter[2])){
			return false;
		}
	}
	//4
	if(enter[4]=='A'){
		if(enter[1]!=enter[5]){
			return false;
		}
	}
	else if(enter[4]=='B'){
		if(enter[2]!=enter[7]){
			return false;
		}
	}
	else if(enter[4]=='C'){
		if(enter[1]!=enter[9]){
			return false;
		}
	}
	else if(enter[4]=='D'){
		if(enter[6]!=enter[10]){
			return false;
		}
	}
	//5
	if(enter[5]=='A'){
		if(enter[5]!=enter[8]){
			return false;
		}
	}
	else if(enter[5]=='B'){
		if(enter[5]!=enter[4]){
			return false;
		}
	}
	else if(enter[5]=='C'){
		if(enter[5]!=enter[9]){
			return false;
		}
	}
	else if(enter[5]=='D'){
		if(enter[5]!=enter[7]){
			return false;
		}
	}
	//6
	if(enter[6]=='A'){
		if(!(enter[2]==enter[8]&&enter[4]==enter[8])){
			return false;
		}
	}
	else if(enter[6]=='B'){
		if(!(enter[1]==enter[8]&&enter[6]==enter[8])){
			return false;
		}
	}
	else if(enter[6]=='C'){
		if(!(enter[3]==enter[8]&&enter[10]==enter[8])){
			return false;
		}
	}
	else if(enter[6]=='D'){
		if(!(enter[5]==enter[8]&&enter[9]==enter[8])){
			return false;
		}
	}
	//7
	int eee[4]={0},minnn=11,minindex=-1;
	for(int i=1;i<=10;i++){
		eee[enter[i]-'A']++;
	}
	for(int i=0;i<4;i++){
		if(eee[i]<minnn){
			minnn=eee[i];
			minindex=i;
		}

	}
	if(enter[7]=='A'){
		if(('A'+minindex)!='C')
			return false;
	}
	else if(enter[7]=='B'){
		if(('A'+minindex)!='B')
			return false;
	}
	else if(enter[7]=='C'){
		if(('A'+minindex)!='A')
			return false;
	}
	else if(enter[7]=='D'){
		if(('A'+minindex)!='D')
			return false;
	}
	//8
	if(enter[8]=='A'){
		if(enter[7]==enter[1]+1||enter[7]==enter[1]-1)
			return false;
	}
	else if(enter[8]=='B'){
		if(enter[5]==enter[1]+1||enter[5]==enter[1]-1)
			return false;
	}
	else if(enter[8]=='C'){
		if(enter[2]==enter[1]+1||enter[2]==enter[1]-1)
			return false;
	}
	else if(enter[8]=='D'){
		if(enter[10]==enter[1]+1||enter[10]==enter[1]-1)
			return false;
	}
	//9
	if(enter[9]=='A'){
		if(enter[1]==enter[6]){
			if(enter[6]==enter[5]){
				return false;
			}
		}
		else{
			if(enter[6]!=enter[5]){
				return false;
			}
		}
	}
	else if(enter[9]=='B'){
		if(enter[1]==enter[6]){
			if(enter[10]==enter[5]){
				return false;
			}
		}
		else{
			if(enter[10]!=enter[5]){
				return false;
			}
		}
	}
	else if(enter[9]=='C'){
		if(enter[1]==enter[6]){
			if(enter[2]==enter[5]){
				return false;
			}
		}
		else{
			if(enter[2]!=enter[5]){
				return false;
			}
		}
	}
	else if(enter[9]=='D'){
		if(enter[1]==enter[6]){
			if(enter[9]==enter[5]){
				return false;
			}
		}
		else{
			if(enter[9]!=enter[5]){
				return false;
			}
		}
	}
	//10
	int qqq[4]={0},maxx=-1,minn=11;
	for(int i=1;i<=10;i++){
		qqq[enter[i]-'A']++;
	}
	for(int i=0;i<4;i++){
		maxx=max(qqq[i],maxx);
		minn=min(qqq[i],minn);
	}
	if(enter[10]=='A'){
		if(maxx-minn!=3)
			return false;
	}
	else if(enter[10]=='B'){
		if(maxx-minn!=2)
			return false;
	}
	else if(enter[10]=='C'){
		if(maxx-minn!=4)
			return false;
	}
	else if(enter[10]=='D'){
		if(maxx-minn!=1)
			return false;
	}
	//end
	return true;
}
void solve(int e){
	for(int i=0;i<4;i++){
		bool ans=false;
		enter[e]=i+'A';
		if(e<10){
			solve(e+1);
		}
		else{
			ans=vaild();
			if(ans){
				for(int i=1;i<=10;i++){
					printf("%c",enter[i]);
					if(i==5){
						printf(" ");
					}
				}
				printf("\n");
			}
		}
	}
}
int main(){
	solve(1);
	return 0;
}