//
//  main.cpp
//  Handshake
//
//  Created by Orkhan Alizade on 01/04/2017.
//  Copyright © 2017 Orkhan Alizade. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int nodesCount;
        cin >> nodesCount;
        
        int count = ((nodesCount - 1) * nodesCount) / 2;
        
        cout << count << endl;
    }
    
    return 0;
}
