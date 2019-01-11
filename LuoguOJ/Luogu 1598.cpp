#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int ALPHA[26]={0};
	string enter;
	int maxx=0;
	while(cin>>enter){
		for(int i=0;i<enter.length();i++){
			if(isalpha(enter[i])){
				ALPHA[toupper(enter[i])-'A']++;
				maxx=max(maxx,ALPHA[toupper(enter[i])-'A']);
			}
		}
	}
	for(int i=maxx;i>=0;i--){
		int qeeee=0;
		if(i){
			for(int j=0;j<26;j++){
				if(ALPHA[j]>=i){
					for(int i=0;i<qeeee;i++)
						cout<<" ";
					qeeee=0;
					cout<<"*";
					qeeee++;
				}
				else{
					qeeee+=2;
				}
			}
		}
		else{
			cout<<"A";
			for(int j=1;j<26;j++){

				cout<<" "<<char('A'+j);
			}
		}
		cout<<'\n';
	}

	return 0;
}
/*
                            *
                            *
        *                   *
        *                   *     *   *
        *                   *     *   *
*       *     *             *     *   *
*       *     * *     * *   *     * * *
*       *   * * *     * *   * *   * * * *
*     * * * * * *     * * * * *   * * * *     * *
* * * * * * * * * * * * * * * * * * * * * * * * * *
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/