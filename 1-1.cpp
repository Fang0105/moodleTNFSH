#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
    cin>>a>>b>>c;
    double g = (-b+sqrt(b*b-4*a*c))/2;
    double h = (-b-sqrt(b*b-4*a*c))/2;
    if(g>h){
    cout<<fixed<<setprecision(2)<<g<<endl<<h<<endl;
    }else{
    cout<<fixed<<setprecision(2)<<h<<endl<<g<<endl;
    }


	return 0;
}


