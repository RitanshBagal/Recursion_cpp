#include <iostream>
using namespace std;

int pow(int m,int n){
    if(n ==0 ){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}

int pow1(int m,int n){           // takes less time
    if(n == 0){
        return 1;
    }
    if(n%2 == 0){
        return pow1(m*m,n/2);
    }
    else{
        return m*pow1(m*m,(n-1)/2);
    }
}
int main(){
    int a = 2, b = 9;
    cout<<pow(a,b)<<endl;
    cout<<pow1(a,b)<<endl;
    return 0;
}