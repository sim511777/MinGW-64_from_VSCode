#include <iostream>
#include <vector>
#include <string>
#include "lib.h"

using namespace std;

int main()
{
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
}