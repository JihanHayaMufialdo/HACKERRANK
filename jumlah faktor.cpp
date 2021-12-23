#include <iostream>
using namespace std;

int main(){
	
	int n,arr[n],jumlah=0;
	cin >>n;
	
	for(int i=n;i>0;i--){
	   if(n%i==0){
    	      jumlah+=1;
	   }		
	}
	
	if(jumlah==5){
	   cout << "YES";
	}
	else{
	   cout << "NO";
	}
}
