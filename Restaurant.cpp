//
//  main.cpp
//  Restaurant
//
//  Created by Orkhan Alizade on 01/04/2017.
//  Copyright © 2017 Orkhan Alizade. All rights reserved.
//

#include <iostream>

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int u, int v) {
    return (v == 0) ? u : gcd (v, u % v);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int l, b;
        cin >> l >> b;
        
        int div = gcd(l, b);
        
        l /= div;
        b /= div;
        
        cout << l * b;
    }
    
    return 0;
}
