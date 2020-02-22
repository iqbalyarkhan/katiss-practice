//
//  main.cpp
//  Everywhere
//
//  Created by Iqbal Khan on 2/21/20.
//  Copyright © 2020 Iqbal Khan. All rights reserved.
// https://open.kattis.com/problems/everywhere

#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_set>
using namespace std;
int main(int argc, const char * argv[]) {
    int tot = 0;
    int curr = 0;
    cin >> tot;
    for (int i = 0; i < tot; i++){
        cin >> curr;
        unordered_set<string> s;
        int ans = 0;
        for (int j = 0; j < curr; j++){
            string name = "";
            cin >> name;
            auto search = s.find(name);
            if (search != s.end()){
             //Do nothing
            }
            else{
                s.insert(name);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
