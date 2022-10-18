#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int x, m ,n,max_count=0,max_freq,sim=0;
	    cin>>x;
	    
	    int arr[x];
	    for(int j=0;j<x;j++){
	        cin>>arr[j];
	    }
	    
           for(m=0;m<x;m++)	   {
               int count=0;
               for(n=0;n<x;n++){
                   if(arr[m]==arr[n]){
                       count++;
                   }
               } if(count>max_count){
                   max_count=count;
                   max_freq=arr[m];
               }
           }
           
           for(int z=0;z<x;z++){
           
               if(max_freq!=arr[z] ){
                   sim++;
               }
           }
	    cout<<sim<<endl;
	      }
	return 0;
}
