#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	  float a,b,x,y,fir,sec;
	  cin>>a>>b>>x>>y;
	  
	  fir=a/x;
	  sec=b/y;
	  
	  if(fir>sec){
	      cout<<"Chefina"<<endl;
	  }else if(fir==sec){
	      cout<<"Both"<<endl;
	      
	  }else{
	      cout<<"Chef"<<endl;
	  }
	  
	}
	return 0;
}
