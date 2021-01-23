#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%2==1){
		cout<<n<<endl;
	}else{
		while(n%2!=1){
			n/=2;
		}
		cout<<n<<endl;
	}

	return 0;
}

