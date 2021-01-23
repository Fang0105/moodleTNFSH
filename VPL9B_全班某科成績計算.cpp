#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	double n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		double k;
		cin>>k;
		sum+=k;
	}
	cout<<fixed<<setprecision(2)<<sum/n<<endl;





	return 0;
}

