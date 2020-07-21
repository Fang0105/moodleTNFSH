#include<bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	double m = (a+b+c)/2;
	double k = sqrt(m*(m-a)*(m-b)*(m-c));
	cout<<fixed<<setprecision(2)<<k<<endl;
	return 0;
}
