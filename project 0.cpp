#include <iostream>
#include <vector>
#include <array>
using namespace std;
string ekh(string x);
int main(){
    int i = 0, l, j = 0, z = 0, n, uu = 0, c = 0, forc = 0, ifc = 0, xx = 0;
    string s = "";
    cin >> s;
//    dghhfuyiu
    i = 0;
    eruifhdrd
    fddjhjgukdi
    jdfkghf
    ddkjhd
    while (i != q)
    {
        if (s[i] == 'F')
        {
            if (forc == 0)
            {
                if (ifc == 0)
                {
                    xx = 1;
                }
            }
            forc++;
        }
        if (s[i] == 'W')
        {
            forc--;4
            if (forc < 0)
            {
                cout << "syntax error";
                exit(0);
            }
            if (forc == 0)
            {
                if (xx == 1)
                {
                    if (ifc != 0)
                    {
                        cout << "syntax error";
                        exit(0);
                    }
                }
            }
        }
        if (s[i] == 'I')
        {
            if (forc == 0)
            {
                if (ifc == 0)
                {
                    xx = 2;
                }
            }
            ifc++;
        }
        if (s[i] == 'E')
        {
            ifc--;
            if (ifc < 0)
            {
                cout << "syntax error";
                exit(0);
            }
            if (ifc == 0)
            {
                if (xx == 2)
                {
                    if (forc != 0)
                    {
                        cout << "syntax error";
                        exit(0);
                    }
                }
            }
        }
        i++;
    }
    if ((ifc == 0) && (forc == 0))
    {
        cout << "compile shod";
    }
    else
    {
        cout << "syntax error";
    }
    return 0;
    
    
    
//    hgujk
}
