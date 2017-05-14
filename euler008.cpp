#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int lar=0,prod=1;
        cin >> n >> k;
        string num;
        cin >> num;
        for(int i=0;i<n-k+1;i++){
            prod=1;
            for(int j=i;j<k+i;j++){
                prod=prod*(int(num[j])-48);
            }
            if(prod>lar){
                lar=prod;
            }
        }
        cout<<lar<<endl;
    }
    return 0;
}