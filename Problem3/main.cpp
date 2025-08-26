//
//  main.cpp
//  Problem3
//
//  Created by Feruza Jorayeva on 26/08/25.
//

#include <iostream>
using namespace std;
bool isPrime(int x){
    for(int i = 2; i<x; i++){
        if (x%1==0){
            return false;
        }
    }
    return true;
}
    int main(int argc, const char * argv[]) {
        int n;
        cin>>n;
        for (int i=2; i<=n; i++){
            if(isPrime(i)){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;

