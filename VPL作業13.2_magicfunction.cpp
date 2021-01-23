#include<bits/stdc++.h>
using namespace std;
void k(int a){
	double l = 0.0;
	if(a==1){
		cout<<0.0000<<endl;
		return;
	}
	for(double i=1;i<=a;i++){
		l+=(1/i);
	}
	cout<<fixed<<setprecision(4)<<l<<endl;
	return;
}

int main() {
	int a;
	cin>>a;
	k(a);

	return 0;
}

