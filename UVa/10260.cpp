#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Soundexquery[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	char enter[200];
	while(cin>>enter){
		int previous=-1,strn=strlen(enter);
		for (int i = 0; i < strn; i++)
		{
			int indexxx=enter[i]-'A';
			int Soundex=Soundexquery[indexxx];
			if(previous==Soundex){
				continue;
			}
			else{
				previous=Soundex;
				if(Soundex)
					cout<<Soundex;
			}
		}
		cout<<endl;
	}
	return 0;
}