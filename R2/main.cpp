/**
 https://open.kattis.com/problems/r2
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int r1 = 0;
    int s = 0;
    cin >> r1 >> s;
    int r2 = (2 * s) - r1;
    cout << r2 << endl;
    return 0;
}
