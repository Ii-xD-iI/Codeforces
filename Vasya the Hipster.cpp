#include <iostream>
#include <math.h>
 
using namespace std;
 
int main () {
    int a,b;
    cin >> a >> b;
    
    cout << min(a,b) <<  " " << max((a-min(a,b))/2,(b-min(a,b))/2) << endl;
    
    
    return 0;
}
