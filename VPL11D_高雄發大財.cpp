#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int h;
		cin>>h;
		int t[h];
		bool b = false;
		for(int p=0;p<h;p++){
			cin>>t[p];
			if(t[p]==87){
				b = true;
			}
		}
		cout<<i<<":"<<(b==true?"YES":"NO")<<endl;
		
	}

	return 0;
}

