#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	double n;
	cin>>n;
	double sum=0.0;
	if(n<0||n>10000){
		cout<<"Get out!!"<<endl;
		return 0;
	}
	if(n>1000){
		cout<<"RIP!!"<<endl;
		return 0;
	}else{
		if(n<=120){
			sum+=n*2.1;
		}else if(n<=330){
			sum+=120*2.1+(n-120)*3.02;
		}else if(n<=500){
			sum+=120*2.1+(330-120)*3.02+(n-330)*4.39;
		}else if(n<=700){
			sum+=120*2.1+(330-120)*3.02+(500-330)*4.39+(n-500)*4.97;
		}else{
			sum+=120*2.1+(330-120)*3.02+(500-330)*4.39+(700-500)*4.97+(n-700)*5.63;
		}
	}
	cout<<sum<<endl;
	
	


	return 0;
}

