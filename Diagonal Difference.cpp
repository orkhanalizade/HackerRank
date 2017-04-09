//
//  main.cpp
//  Diagonal Difference
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
    int n, leftDiagonal = 0, rightDiagonal = 0;
    cin >> n;
    
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0; a_i < n; a_i++){
        for(int a_j = 0; a_j < n; a_j++){
            cin >> a[a_i][a_j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        leftDiagonal += a[i][i];
        rightDiagonal += a[i][n - i - 1];
    }
    
    cout << abs(leftDiagonal - rightDiagonal);
    
    return 0;
}