#include <iostream>
using namespace std;

string i(int k){

   string result = (k%4 == 0 ) ?  "1" :
    (k-2%4 == 0 ) ?  "-1":
    (k-1%4 == 0) ?  "i" : "-i" ;
 return result ;
}

int main(){

    int k=0;
    cout << "Enter the power of the complex number i :   ";
    cin >> k; 
    cout << "The value of i is : " << i(k)<<endl;

}