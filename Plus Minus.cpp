//
//  main.cpp
//  Plus Minus
//
//  Created by Orkhan Alizade on 09.04.17.
//  Copyright © 2017 Orkhan Alizade. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    double pos = 0, neg = 0, zero = 0;
    
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    
    for(int j = 0; j < n; j++) {
        if(arr[j] > 0) {
            pos++;
        } else if(arr[j] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    
    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << zero / n << endl;
    
    return 0;
}
