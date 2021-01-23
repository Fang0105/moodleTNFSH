#include <bits/stdc++.h>
using namespace std;


	
int main(){
	int e,r;
	vector<int>ve1;
	vector<int>ve2;
	while(cin>>e>>r){
		ve1.push_back(e);
		ve2.push_back(r);
	}
	for(int o=0;o<ve1.size();o++){
		int ans=0;
		int n=ve1[o],m=ve2[o];
		int nn=ve1[o],mm=ve2[o];
		if(n>m){
			swap(n,m);
		}
		for(int i=n;i<=m;i++){
			int j=i;
			int h=1;
			while(j!=1){
				if(j%2!=0){
					j=3*j+1;
				}else{
					j=j/2;
				}
				h++;
			}
			if(h>ans){
				ans=h;
			}
		} 
		cout<<nn<<" "<<mm<<" "<<ans;
		if(o==ve1.size()-1){
			cout<<endl;
		}else{
			cout<<"   ";
		}
	
	}
		
	

	return 0;
}

