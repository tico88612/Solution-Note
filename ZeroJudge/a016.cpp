//
//  a016.cpp
//  
//
//  Created by 楊承昊 on 2017/6/1.
//
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int enter[9][9];
    while(cin>>enter[0][0]){
    	int legal=1;
    	for(int i=0;i<9;i++){
    		for(int j=0;j<9;j++){
    			if(i==0&&j==0) continue;
    			cin>>enter[i][j];
    		}
    	}
    	for(int i=0;i<9&&legal;i++){
    		int tmp=0;
    		for(int j=0;j<9&&legal;j++)
    			tmp+=enter[i][j];
    		if(tmp!=45)	legal=0; 
    	}
    	for(int i=0;i<9&&legal;i++){
    		int tmp=0;
    		for(int j=0;j<9&&legal;j++)
    			tmp+=enter[j][i];
    		if(tmp!=45)	legal=0; 
    	}
    	for(int k=0;k<9&&legal;k+=3){
    		for(int l=0;l<9&&legal;l+=3){
       			int tmp=0;
    			for(int i=0;i<3&&legal;i++){
    				for(int j=0;j<3&&legal;j++)
    					tmp+=enter[k+i][l+j]; 
    			}
    			if(tmp!=45)	legal=0;
    		}
    	}
    	if(legal)	cout<<"yes"<<endl;
    	else	cout<<"no"<<endl;
    }
    
    return 0;
}
