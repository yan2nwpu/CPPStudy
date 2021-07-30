#include <iostream>
using namespace std;


int main() {
    int a;
    cin >> a ;
    int r;
    int count = 0;
    r = a % 2;
        while(a != 0){
            if(r == 1){
                count++;
            }
        a = a/2;
        r = a % 2;
            
        }
    cout<< count << endl;
    return 0;
}
