#include <bits/stdc++.h>
using namespace std;
int c(int m,int n){
	if(n==0){
		return 1;
	}else if(n==m){
		return 1;
	}else{
		return c(m-1,n)+c(m-1,n-1);
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<c(n,m)<<endl;




	
	return 0;
}

