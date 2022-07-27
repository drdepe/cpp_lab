#include<iostream>

using namespace std;

int gcd(int a,int b){
	if (a == 0) return b;
	if (b == 0 ) return a;
	return gcd(b%a,a);
    }



int main(){
  cout <<gcd(250,180) <<endl;// 10
  cout << gcd(1819,3587)<<endl;//17	
  cout << gcd(0,5)<< endl;//5
  cout << gcd(5,0)<< endl;//5
  return 0;
	
}

