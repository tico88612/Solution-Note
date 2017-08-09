#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--){
		char enter[10000]={0};
		cin>>enter;
		int strn=strlen(enter);
		//MARGARITA
		int Mint=0,Aint=0,Rint=0,Gint=0,Iint=0,Tint=0;
		for (int i = 0; i < strn; ++i)
		{
			switch(enter[i]){
				case 'M':
					Mint++;
					break;
				case 'A':
					Aint++;
					break;
				case 'R':
					Rint++;
					break;
				case 'G':
					Gint++;
					break;
				case 'I':
					Iint++;
					break;
				case 'T':
					Tint++;
					break;
				default :
					break;
			}
		}
		Aint/=3;
		Rint/=2;
		int minn=min(Mint,min(Aint,min(Rint,min(Gint,min(Iint,Tint)))));
		cout<<minn<<endl;
	}
}