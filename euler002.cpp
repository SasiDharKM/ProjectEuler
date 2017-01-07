#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long int c,a,b,j,t,sum=0;
    cin>>t;
    int i;
    for(i=0;i<t;i++){
        cin>>c;
        a=1;
        b=2;

        for(j=3;j<c;j=a+b){
          if(j%2==0){
              sum+=j;
          }
            a=b;
            b=j;
        }
        cout<<sum+2<<'\n';
        sum=0;
    }

    return 0;
}
