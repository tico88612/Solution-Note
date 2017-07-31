#include <bits/stdc++.h>
using namespace std;
int main()
{
	int enter[100000]={0},N,num=0;
	while(cin>>N){
		enter[num++]=N;
		sort(enter,enter+num);
		int avgin=num/2;
		if(num%2){
			cout<<enter[avgin]<<endl;
		}
		else{
			cout<<(enter[avgin]+enter[avgin-1])/2<<endl;
		}
	}
	return 0;
}