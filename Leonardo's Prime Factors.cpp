//
//  Leonardo's Prime Factors.cpp
//  Leonardo's Prime Factors
//
//  Created by Orkhan Alizada on 25/03/2017.
//  Copyright © 2017 Orkhan Alizada. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int prime(unsigned long long newValue) {
    int low = 2, count = 0;
    unsigned long long mult = 1;
    bool flag;
    
    while (low <= newValue) {
        flag = true;
        
        for(int i = 2; i <= sqrt(low); i++) {
            if(low % i == 0) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            if(low * mult <= newValue) {
                mult *= low;
                count++;
            } else {
                break;
            }
        }
        
        ++low;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        unsigned long long newValue;
        cin >> newValue;
        
        cout << prime(newValue) << "\n";
    }
}
