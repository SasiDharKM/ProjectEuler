#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long int T,c,sum1,sum3,sum2,n1,n2,n3;
    cin>>T;
    for(int j=0;j<T;++j){
        sum1=0,sum3=0,sum2=0,n1=0,n2=0,n3=0;
    cin>>c;
        if(c>0){
        n1=c/3;
        n2=c/5;
        n3=c/15;
        if(n1!=0&&c%3==0)
            n1--;
        if(n2!=0&&c%5==0)
            n2--;
        if(n3!=0&&c%15==0)
            n3--;

        sum1=3*((n1*(n1+1))/2);
        sum2=5*((n2*(n2+1))/2);
        sum3=15*((n3*(n3+1))/2);
    }

           if((sum1+sum2-sum3)!=0){
        cout<<sum1+sum2-sum3<<'\n';}
    }
    return 0;
}
