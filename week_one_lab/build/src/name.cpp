#include <string>
#include <iostream>
using namespace std;

string askName(){
    string name;
    cout << "What's your name?" << endl;
    cin >> name;
    return name;
}