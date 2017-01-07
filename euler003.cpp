#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long int t,a,b,c;
    int i;
    cin>>t;
    for(i=0;i<t;i++){
       cin>>a;
        c=1;
        for(b=2;b*b<=a;){
            while(a%b==0){
                a/=b;
                c=b;
            }
            b++;
        }
        if(a>1){
            cout<<a<<'\n';
        }
        else{
          cout<<c<<'\n';
        }
    }
    return 0;
}
