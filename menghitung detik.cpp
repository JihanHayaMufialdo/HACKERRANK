#include <iostream>
using namespace std;
int main() 
{
   int n,jam,menit;
   cin >> n;
    
    if(n>3600){
    	jam=n/3600 ;
    	menit=(n-jam*3600)/60 ;	
	cout << jam << " jam " << menit << " menit " << n-jam*3600-menit*60 << " detik " << endl;
    }
    else{
        jam=n/3600 ;
        menit=n/60 ;  
        cout << jam << " jam " << menit << " menit " << n-menit*60 << " detik " << endl;
    }
    
    return 0;
}
