//Make CSP great again
//Vengeance
#include <bits/stdc++.h>
#define TASK "TESTCODE"
using namespace std;
int main()
{
    const int test = 20;
    for (int i = 1; i <= test; ++ i)
    {   
        system("generator.exe");
        system("a.exe");
        system("b.exe");
        if (system("fc A.OUT B.OUT") != 0)
        {
            cout << "Test " << i << " Wrong";
            exit(0);
        }
        cout << "Test " << i << ": Accepted" << '\n';
    }
}
