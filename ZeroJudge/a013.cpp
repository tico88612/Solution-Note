#include <bits/stdc++.h>
using namespace std;
int str_to_num(string a){
	int result = 0;
	if(a=="ZERO")
		return 0;
	for(unsigned int i=0;i<a.length();i++){
		if(a[i]=='M')
			result+=1000;
		else if(a[i]=='D'){
			result+=500;
		}
		else if(a[i]=='C'){
			if(i+1<a.length()&&a[i+1]=='M'){
				result+=900;
				i++;
			}
			else if(i+1<a.length()&&a[i+1]=='D'){
				result+=400;
				i++;
			}
			else{
				result+=100;
			}
		}
		else if(a[i]=='L'){
			result+=50;
		}
		else if(a[i]=='X'){
			if(i+1<a.length()&&a[i+1]=='C'){
				result+=90;
				i++;
			}
			else if(i+1<a.length()&&a[i+1]=='L'){
				result+=40;
				i++;
			}
			else{
				result+=10;
			}
		}
		else if(a[i]=='V'){
			result+=5;
		}
		else if(a[i]=='I'){
			if(i+1<a.length()&&a[i+1]=='X'){
				result+=9;
				i++;
			}
			else if(i+1<a.length()&&a[i+1]=='V'){
				result+=4;
				i++;
			}
			else{
				result+=1;
			}
		}
	}
	return result;
}
string num_to_str(int a){
	string result = "";
	if(a==0)
		return "ZERO";
	while(a){
		if(a>=1000){
			result+="M";
			a-=1000;
		}
		else if(a>=900){
			result+="CM";
			a-=900;
		}
		else if(a>=500){
			result+="D";
			a-=500;
		}
		else if(a>=400){
			result+="CD";
			a-=400;
		}
		else if(a>=100){
			result+="C";
			a-=100;
		}
		else if(a>=90){
			result+="XC";
			a-=90;
		}
		else if(a>=50){
			result+="L";
			a-=50;
		}
		else if(a>=40){
			result+="XL";
			a-=40;
		}
		else if(a>=10){
			result+="X";
			a-=10;
		}
		else if(a>=9){
			result+="IX";
			a-=9;
		}
		else if(a>=5){
			result+="V";
			a-=5;
		}
		else if(a>=4){
			result+="IV";
			a-=4;
		}
		else if(a>=1){
			result+="I";
			a-=1;
		}
	}
	return result;
}
int main(){
	string a,b;
	while(cin>>a){
		if(a=="#")
			break;
		cin>>b;
		int ans = str_to_num(a)-str_to_num(b);
		ans = abs(ans);
		cout<<num_to_str(ans)<<endl;
	}
	return 0;
}