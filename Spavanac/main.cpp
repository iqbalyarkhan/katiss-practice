//
//  main.cpp
//  Spavanac
//
//  Created by Iqbal Khan on 2/20/20.
//  Copyright © 2020 Iqbal Khan. All rights reserved.
//
/**
 Input
 The first and only line of input will contain exactly two integers 𝐻 and 𝑀 (0≤𝐻≤23,0≤𝑀≤59) separated by a single space, the input time in 24-hour notation. 𝐻 denotes hours and 𝑀 minutes.

 Output
 The first and only line of output should contain exactly two integers, the time 45 minutes before input time.
 */

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int H;
    int M;
    cin >> H >> M;
    
    int newM = M - 45;
    if (newM < 0){
        H--;
        newM = newM + 60;
    }
    if (H < 0){
       H = H + 24;
   }
    cout << H << " " << newM << endl;
    
    
    return 0;
}
