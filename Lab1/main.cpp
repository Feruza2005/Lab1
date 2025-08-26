//
//  main.cpp
//  Lab1
//
//  Created by Feruza Jorayeva on 26/08/25.
//

#include <iostream>
int main(int argc, const char * argv[]) {
    int num;
    std::cin>>num;
    int r;
    int sum = 0;
    while (num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
   
    std::cout << sum<<std::endl;
    return 0;
    
    
}

