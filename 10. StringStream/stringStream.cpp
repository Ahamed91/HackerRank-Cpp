#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
    stringstream ss(str);
    int a;
    char b;
    vector<int> ar;
    while(ss>>a){
        ar.push_back(a);
        ss>>b;
    }
    return ar;
}

int main() {
    string str;
    getline(cin, str);
    vector<int> ab = parseInts(str);
    for(int a: ab){
        cout<<a<<"\n";
    }
    return 0;
}
