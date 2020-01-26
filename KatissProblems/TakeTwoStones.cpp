/**
 
 https://open.kattis.com/problems/twostones
 Alice and Bob are playing a new game of stones. There are 𝑁 stones placed on the ground, forming a sequence. The stones are labeled from 1 to 𝑁.

 Alice and Bob in turns take exactly two consecutive stones on the ground until there are no consecutive stones on the ground. That is, each player can take stone 𝑖 and stone 𝑖+1, where 1≤𝑖≤𝑁−1. If the number of stone left is odd, Alice wins. Otherwise, Bob wins.

 Assume both Alice and Bob play optimally and Alice plays first, do you know who the winner is?

 Input
 The input contains an integer 𝑁 (1≤𝑁≤10000000), the number of stones.

 Output
 Output the winner, “Alice” or “Bob” (without the quotes), on a line.
 */

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    
    int num = 0;
    cin >> num;
    if (num % 2 == 0){
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
    
}
