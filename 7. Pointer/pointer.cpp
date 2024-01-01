#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update(int *a, int *b){
    int c =*a+*b;
    int d =abs(*b-*a);
    cout<<c<<"\n"<<d;
}
int main() {
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    return 0;
}