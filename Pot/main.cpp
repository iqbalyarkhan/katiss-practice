//
//  main.cpp
//  Pot
//
//  Created by Iqbal Khan on 2/20/20.
//  Copyright © 2020 Iqbal Khan. All rights reserved.
// https://open.kattis.com/problems/pot

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int tot;
    cin >> tot;
    long long ans = 0;
    for (int i = 0; i < tot; i++){
        int power;
        int num;
        int actual;
        cin >> actual;
        power = actual % 10;
        num = actual / 10;
        ans = ans + pow(num,power);
    }
    
    cout << ans << endl;
    
    return 0;
}
