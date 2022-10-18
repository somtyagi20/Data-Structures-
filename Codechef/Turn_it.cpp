#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	long n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    long u,v,a,s;
	    cin>>u>>v>>a>>s;
	   if(v>=u){
	       cout<<"Yes"<<endl;
	   }else {
	        long w;
	        w=sqrt(pow(u,2)-(2*a*s));
	    if(v>=w){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	   }
	}
	return 0;
}
