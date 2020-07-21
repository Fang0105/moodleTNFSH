#include<bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	if(a>100||a<0||b>100||b<0||c>100||c<0){
		cout<<"BS"<<endl;	
	}else{
		if((a+b+c)/3>=60){
			cout<<"PASS"<<endl;
		}else{
			cout<<"FAIL"<<endl;
		}
	}
	
	

	return 0;
}

