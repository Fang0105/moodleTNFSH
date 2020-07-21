#include<iostream>
using namespace std;

int main() {
	int n,sum=0,flag=0;
	cin>>n;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			flag=1;
			sum=sum+i;
		}
	}	
	if(flag==1){
		cout<<sum<<endl;
	}	
	else{
		cout<<"XD"<<endl;;
	}

	return 0;
}


