/**
 https://open.kattis.com/problems/cold
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    int num = 0;
    cin >> num;
    int ans = 0;
    for (int i = 0; i < num; i++){
        int curr = 0;
        cin >> curr;
        if (curr < 0){
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
