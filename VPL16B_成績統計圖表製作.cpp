#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	m = n;
	int k[n];
	int u=0;
	double avg = 0;
	while(n--){
		int j;
		cin>>j;
		k[u] = j;
		avg+=j;
		u++;
	}
	avg/=m;
	int big = 0;
	int a=0,b=0,c=0,d=0,e=0;
	for(int i=0;i<m;i++){
		if(k[i]>k[big]){
			big = i;
		}
		if(k[i]>=90){
			a++;
		}else if(k[i]>=80){
			b++;
		}else if(k[i]>=70){
			c++;
		} else if(k[i]>=60){
			d++;
		}else{
			e++;
		}
	}
	printf("%.2f\n",avg);
	cout<<big+1<<'\n';
	cout<<"A:"<<string(a,'*')<<'\n';
	cout<<"B:"<<string(b,'*')<<'\n';
	cout<<"C:"<<string(c,'*')<<'\n';
	cout<<"D:"<<string(d,'*')<<'\n';
	cout<<"E:"<<string(e,'*')<<'\n';
	








return 0;
}

