#include<iostream>

using namespace std;

int gcd(int a,int b){
	if (a == 0) return b;
	if (b == 0 ) return a;
	return gcd(b%a,a);
    }



int main(int argc, char  *argv[]){
  cout <<"the gcd is : "<<gcd((int)argv[1],(int)argv[2])<< endl; 
  return 0;
	
}

