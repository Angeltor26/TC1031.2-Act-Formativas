#include <iostream>
using namespace std;

unsigned int suma(int n){
    int k=0;
    for(int c=1; c<=n; c++){
        k = k+c;
    }
    return k;
}

unsigned int recursivo(int n){
    if (n<=0){
        return 0;
    }
    else{
        return Recursivo(n-1)+n;
    }
}

unsigned int sumdire(int n){
    int sum = 0;
    sum = (n*(n+1))/2;
    return sum;
}

int main()
{
    cout<<suma(7)<<endl;
    cout<<recursivo(4)<<endl;
    cout<<sumdire(12)<<endl;
}

