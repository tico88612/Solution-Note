#include <bits/stdc++.h>
using namespace std;
int enter[300000+5],endd=1,NNN=0;
void numpush(int N){
	enter[endd++]=N;
	NNN++;
	if(NNN>=2){
		int check=NNN;
		while(check>1){
			if(enter[check]<enter[check/2]){
				swap(enter[check],enter[check/2]);
			}
			check/=2;
		}
	}
}
void numpop(){
	endd--;
	enter[1]=enter[NNN];
	enter[endd]=2147483647;
	NNN--;
	int check=1;
	while(check*2<endd&&(enter[check]>enter[check*2]||enter[check]>enter[check*2+1])){
		if(enter[check*2]>enter[check*2+1]){
			swap(enter[check],enter[check*2+1]);
			check*=2;
			check++;
		}
		else{
			swap(enter[check],enter[check*2]);
			check*=2;
		}
	}
}
// void print(){
// 	for(int i=1;i<endd;i++){
// 		printf("%d ",enter[i]);
// 	}
// 	printf("\n");
// }
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin>>N;		//有幾個指令
	while(N--){
		string aaa;
		cin>>aaa;		//輸入指令 top:裡面目前顯示最大值 pop:把最大值刪除 push x:把x放入裡面 
		if(aaa=="top"){
			if(endd==1){
				cout<<"top empty!"<<endl;
			}
			else{
				cout<<enter[1]<<endl;
			}
		}
		else if(aaa=="pop"){
			if(endd==1){
				cout<<"pop empty!"<<endl;
			}
			else{
				numpop();
			}
		}
		else if(aaa=="push"){
			int q;
			cin>>q;
			numpush(q);
		}
		// print();
	}
	return 0;
}