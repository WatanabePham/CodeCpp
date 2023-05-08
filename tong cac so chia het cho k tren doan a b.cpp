#include <iostream>

using namespace std;

int main(){
    long a,b,k,i,j;
    cin >> a >> b >> k;
    i=a+1;
    j=0;
    while (i % k !=0) ++i;
    while (i<b){
        j+=i;
        cout << i << endl;
        i+=k;

    }
    cout << j;
    return 0;
}
