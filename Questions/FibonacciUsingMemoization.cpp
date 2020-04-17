// Fibonacci using Memoization
#include <iostream>
using namespace std; 

int mem[1000]; 
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    if (mem[n] != 0) 
        return mem[n]; 
    else
    {
        mem[n] = fib(n - 1) + fib(n - 2); 
        return mem[n]; 
    } 
} 

int main() 
{ 
    int n = 1600; 
    printf("%d", fib(n));
    cout<<fib(n)<<endl; 
    return 0; 
}