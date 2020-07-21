#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0,k=n;i<n;i++,k--){
		for(int j=0;j<=i;j++){
			cout<<k;
		}
		cout<<endl;
	}






	return 0;
}

