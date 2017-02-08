#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool pali(int n){
    int digit,rev=0,num= n;
    do{
        digit = num %10;
        rev=(rev*10)+digit;
        num/=10;
    }while(num!=0);
    
    if(rev == n){
        return true;
    }
    return false;
}


int main(){
    int t,temp,large = 0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        for(int i =100; i<1000;i++){
            for(int j=100;j<1000;j++){
                temp = i*j;
                 if (pali(temp) && (temp< n && temp > large)){
                     large = temp;
                 }
            }
        }
        cout<< large <<'\n';
        
                
    }
    
    return 0;
}
