#include<iostream>
using namespace std;

int main() {
	int n,sum=0,t=0;
	while(cin>>n){
		sum+=n;
		t++;
		if(sum>=70000){
			cout<<t<<endl<<sum<<endl;
			return 0;
		}
	}

	return 0;
}

