#include <iostream>
using namespace std;

double e(int x, int n){
    static double s;
    if(n == 0){
        return s;
    }
    else{
        s = 1 + x*s/n;
        return e(x,n-1);
    }
}
int main(){
    cout<<e(2,10);
    return 0;
}