/**
 https://open.kattis.com/problems/autori
 Convert Knuth-Morris-Pratt to KMP
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

int autori(int argc, const char * argv[]) {
    //To hold input from user
    string input;
    //Using getline to get the entire line
    getline(cin,input);
    //Passing the input to stringstream
    stringstream ss(input);
    //To extract character
    char ch;
    int counter = 0;
    string answer = "";
    bool prevHyphen = false;
    while (ss >> ch){
        //While, we get a number from the
        //read string, print it.
        if (counter == 0)
            answer += ch;
        else if (ch == '-')
            prevHyphen = true;
        else if (prevHyphen == true){
            answer += ch;
            prevHyphen = false;
        }
        counter++;
    }
    cout << answer << endl;
    return 0;
}

