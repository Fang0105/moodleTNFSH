#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>10000){
		cout<<"Sleeping in school"<<endl;
	}else if(n<=1500){
		cout<<70<<endl;
	}else{
		n-=1500;
		int ans = 70;
		if(n%500==0){
			ans+=(n/500)*5;
			cout<<ans<<endl;
		}else{
			ans+=((n/500)+1)*5;
			cout<<ans<<endl;
		}
	}

	return 0;
}

