#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
 	ifstream fin("13 - Numbers.txt");
 	
    vector<string> rows;
    string str;
    while(getline(fin,str))
        rows.push_back(str);

    
}