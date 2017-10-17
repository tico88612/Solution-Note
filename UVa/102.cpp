#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Brown[5],Green[5],Clean[5];
	const string answer[10] = { "BCG", "BGC",
    							"CBG", "CGB",
    							"GBC", "GCB" };
    while(cin>>Brown[0]){
    	cin>>Green[0]>>Clean[0];
    	for(int i=1;i<3;i++){
    		cin>>Brown[i]>>Green[i]>>Clean[i];
    	}
    	int move[7];
    	move[0]=Brown[1]+Brown[2]+Clean[0]+Clean[2]+Green[0]+Green[1];
    	move[1]=Brown[1]+Brown[2]+Clean[0]+Clean[1]+Green[0]+Green[2];
    	move[2]=Brown[0]+Brown[2]+Clean[1]+Clean[2]+Green[0]+Green[1];
    	move[3]=Brown[0]+Brown[1]+Clean[1]+Clean[2]+Green[0]+Green[2];
    	move[4]=Brown[0]+Brown[2]+Clean[0]+Clean[1]+Green[1]+Green[2];
    	move[5]=Brown[0]+Brown[1]+Clean[0]+Clean[2]+Green[1]+Green[2];
    	int indexx=0;
    	for(int i=1;i<6;i++){
    		if(move[i]<move[indexx])
    			indexx=i;
    	}
    	cout<<answer[indexx]<<" "<<move[indexx]<<endl;
    }
    return 0;
}