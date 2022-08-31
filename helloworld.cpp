#include <iostream>
#include <vector>
#include <string>
#include <quadmath.h>
#include <stdio.h>
#include "lib.h"

using namespace std;

int main()
{
    __float128 f1281;
    long double ld1;
    cout << sizeof(f1281) << endl;
    cout << sizeof(ld1) << endl;

    __float128 f1 = 0.555555555555555555555555555555555555555555555555q;
    __float128 f2 = 555555555555555555555555555555555555555555555555.0q;
    __float128 f3 = 0.000000000000000000000000000000000000000000000000555555555555555555555555555555555555555555555555q;
    
    char strf1[200];
    char strf2[200];
    char strf3[200];
    quadmath_snprintf(strf1, sizeof(strf1), "%090.90Qf", f1);
    quadmath_snprintf(strf2, sizeof(strf2), "%090.90Qf", f2);
    quadmath_snprintf(strf3, sizeof(strf3), "%090.90Qf", f3);
    cout << strf1 << endl;
    cout << strf2 << endl;
    cout << strf3 << endl;
    
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int a = 3;
    int b = 4;
    int c = Add(a, b);
    cout << c << endl; 
    cin.get();   
}

// output
// 0.555555555555555555555555555555555576954777159858176145066421584276970205978907202393202169
// 555555555555555555555555555555555539918056849408.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
// 0.000000000000000000000000000000000000000000000000555555555555555555555555555555555553427210