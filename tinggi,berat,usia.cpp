#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int u;
    float t,b;
    cin >> t; cin >> b; cin >> u; 
    
    if (t>170 && b>55 && u>=15){
        cout << "Lolos" << endl;
    }
    else {
        cout << "Tidak Lolos" << endl;
    }
    
    return 0;
}
