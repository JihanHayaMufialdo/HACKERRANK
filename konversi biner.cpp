#include <iostream>
using namespace std;

int main(){
	
	int a,arr[10000],i;
	cin >> a;
	
	if(a>=1&&a<=10000){
		for(i=0;a>0;i++){
			arr[i]=a%2;
			a=a/2;
		}
		for(i=i-1 ;i>=0 ;i--){
    		cout << arr[i];
  		}
  		cout << endl;		
	} 
}
