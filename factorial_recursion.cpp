#include <iostream>
using namespace std;

int fact(int n){    //Recursion
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int Ifact(int n){    //Iterative
    int f = 1;
    for(int i = 1;i<=n;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int x = 5;
    cout<<fact(x)<<endl;
    cout<<Ifact(x)<<endl;
    return 0;
}