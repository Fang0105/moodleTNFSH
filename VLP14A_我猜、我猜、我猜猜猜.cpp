#include<iostream>
using namespace std;

int main() {
	int n,m,a;
	cin>>n>>m>>a;
	int i=1;
	while((n+m)/2!=a){
		cout<<i<<": "<<(m+n)/2<<endl;
		if((n+m)/2>a){
			m = (n+m)/2-1;
		}else{
			n = (n+m)/2+1;
		}
		i++;
	}
	cout<<i<<": "<<a<<endl;

	return 0;
}

