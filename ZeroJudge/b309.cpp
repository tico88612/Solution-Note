#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	char enter;
	int Saber=0,Lancer=0,Archer=0,Rider=0,Caster=0,Assassin=0,Berserker=0;
	while(enter=getchar()){
		if(enter==EOF)
			break;
		enter=toupper(enter);
		if(!isalpha(enter))
			continue;
		int cal=enter-'A';
		if(cal%7==0)
			Saber++;
		else if(cal%7==1)
			Lancer++;
		else if(cal%7==2)
			Archer++;
		else if(cal%7==3)
			Rider++;
		else if(cal%7==4)
			Caster++;
		else if(cal%7==5)
			Assassin++;
		else if(cal%7==6)
			Berserker++;
	}
	int maxx=max(Saber,max(Lancer,max(Archer,max(Rider,max(Caster,max(Assassin,Berserker))))));
	if(maxx==Saber)
		printf("Saber\n");
	else if(maxx==Lancer)
		printf("Lancer\n");
	else if(maxx==Archer)
		printf("Archer\n");
	else if(maxx==Rider)
		printf("Rider\n");
	else if(maxx==Caster)
		printf("Caster\n");
	else if(maxx==Assassin)
		printf("Assassin\n");
	else if(maxx==Berserker)
		printf("Berserker\n");
	return 0;
}