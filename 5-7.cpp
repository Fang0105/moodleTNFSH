#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string(i,' ')<<string(2*(n-i)-1,'*')<<endl;
	}
	for(int i=1;i<n;i++){
		cout<<string(n-i-1,' ')<<string(2*(i+1)-1,'*')<<endl;
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);







	return 0;
}

