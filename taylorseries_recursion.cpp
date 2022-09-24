#include <iostream>
using namespace std;
 
// Recursive Function with static
// variables p and f
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
 
    // Termination condition
    if (n == 0){
        return 1;
    }
    else{
    r = e(x, n - 1);//Recursive call
    p = p * x;// Update the power of x
    f = f * n;//Factorial
    return (r + p / f);
    }
}
int main()
{
    int x = 4, n = 15;
    cout<<e(x, n);
    return 0;
}



