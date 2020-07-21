#include<iostream>
using namespace std;


int main() {
	int n;
	cin>>n;
	int p[n+1];
	p[1]=1;
	p[2]=3;
	for(int i=3;i<n+2;i++){
		p[i] = p[i-1]+i;
	}
	for(int i=n;i>0;i--){
		cout<<"Sigma("<<i<<")="<<p[i]<<endl;
	}
	

	return 0;
}


