#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> a;
    int numberOfArrays, queries; vector<int> b;
    cin>>numberOfArrays>>queries;
    for(int i=0; i<numberOfArrays; i++){
        int lengthOfAnArray, arrayInput;
        cin>>lengthOfAnArray;
        for(int j=0; j<lengthOfAnArray; j++){
            cin>>arrayInput;
            b.push_back(arrayInput);
        }
        a.push_back(b);
        b.clear();
    }
    for(int i=0; i<queries; i++){
        int row,column;
        cin>>row;
        cin>>column;
        cout<<a[row][column]<<endl;
    }
    return 0;
}
