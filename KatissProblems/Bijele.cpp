/**
 https://open.kattis.com/problems/bijele
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

int bijele(int argc, const char * argv[]) {
    //To hold input from user
    string input;
    //Using getline to get the entire line
    getline(cin,input);
    //Passing the input to stringstream
    stringstream ss(input);
    //To extract the number from stringstream
    int num;
    int counter = 0;
    while (ss >> num){
        //While, we get a number from the
        //read string, print it.
        if (counter == 0 || counter == 1)
            cout << (1 - num);
        else if (counter == 5)
            cout << (8 - num);
        else
            cout << (2 - num);
        cout << " ";
        counter++;
    }
    cout << endl;
    return 0;
}
