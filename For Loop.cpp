#include<bits/stdc++.h>
using namespace std;

int main() {
    string numbers[] = {"one","two","three","four","five","six","seven","eight","nine"};
    string evenOdd[] = {"even","odd"};
    int lower_limit, upper_limit;
    cin>>lower_limit>>upper_limit;
    for(int i = lower_limit; i<= upper_limit; i++){
        if (i>=1 && i<=9){
            cout<<numbers[i-1]<<endl;
        }
        else{
            if(i>9){
                cout<<((i%2==0)?evenOdd[0]:evenOdd[1])<<endl;
            }
        }
    }
    return 0;
}
