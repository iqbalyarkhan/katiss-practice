//
//  main.cpp
//  Quality-life
//
//  Created by Iqbal Khan on 2/20/20.
//  Copyright © 2020 Iqbal Khan. All rights reserved.
// https://open.kattis.com/problems/qaly
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    double ans = 0.0;
    for (int i = 0; i < num; i++){
        double a;
        double b;
        cin >> a >> b;
        ans = ans + (a * b);
    }
    
    cout << ans << endl;
    
    return 0;
}
