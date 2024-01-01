#include <iostream>
using namespace std;
int main(){
    int n , m = 0;
    string s1 , s2;
    cin >> n;
    cin >> s1 >> s2;
    for(int i = 0 ; i < n ; i++){
        if(s1[i] != s2[i]){
            m++;
        }
    }
    cout << m;
}