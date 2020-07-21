#include<iostream>
using namespace std;

int main() {
	int n,x,flag=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x<=60){
			flag=1;
		}
	}	
	if(flag==1){
		cout<<"Oh, No!!!"<<endl;
	}
	else{
		cout<<"HAHA, I PASS!!! Bite me!!!"<<endl;
	}

	return 0;
}


