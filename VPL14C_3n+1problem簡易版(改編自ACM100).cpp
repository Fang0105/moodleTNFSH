#include<iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int i=1;
	while(n!=1){
		i++;
		if(n%2==0){
			n/=2;
		}else{
			n=3*n+1;
		}
	}
	cout<<i<<endl;
	return 0;
}

