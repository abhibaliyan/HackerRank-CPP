#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    string numbers[] = {"one", "two","three","four","five","six","seven","eight","nine","Greater than 9"};
    if(n>=1 && n<=9){
        cout<<numbers[n-1];
    }
    else{
        cout<<numbers[9];
    }
    return 0;
}
