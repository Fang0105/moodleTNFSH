#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	double sum = 0;
	for(int i=1;i<=n;i++){
		double a,b;
		cin>>a>>b;
		sum+=b-a;
		cout<<"Inv("<<i<<"): "<<fixed<<setprecision(2)<<sum<<endl;
	}

	return 0;
}


