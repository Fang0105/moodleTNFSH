#include<bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	if(a<0||a>100||b<0||b>100||c<0||c>100){
		cout<<"ReCheckScores"<<endl;
		return 0;
	}
	if(a<60){
		a*=1.25;
	}
	if(b<60){
		b*=1.25;
	}
	if(c<60){
		c*=1.25;
	}
	double total = a+b+c;
	if(a+b+c<180){
		cout<<"PleaseGoToDieOneDie"<<endl;
	}else{
		cout<<"Hmm"<<endl;
	}
	


	return 0;
}
