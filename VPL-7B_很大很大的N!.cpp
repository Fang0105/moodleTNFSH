#include<bits/stdc++.h>
using namespace std;
long long mul(long long a){
	if(a==0){
		return 1;
	}else{
		return a*mul(a-1);
	}
}

int main() {
	long long a;
	cin>>a;
	cout<<mul(a)<<endl;

	return 0;
}

