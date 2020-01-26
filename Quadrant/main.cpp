/**
 https://open.kattis.com/problems/quadrant
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    
    if (a > 0 && b > 0){
        cout << 1 << endl;
    } else if (a < 0 && b < 0){
        cout << 3 << endl;
    } else if (a < 0 && b > 0){
        cout << 2 << endl;
    } else {
        cout << 4 << endl;
    }
    
    return 0;
}
