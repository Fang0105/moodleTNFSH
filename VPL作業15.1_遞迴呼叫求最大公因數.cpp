#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	cout<<"gcd("<<a<<","<<b<<")"<<endl;
	if(a<b){
		swap(a,b);
		return gcd(a,b);
	}
	if(a%b==0){
		return b;
	}else{
		return gcd(b,a%b);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;




	
	return 0;
}

