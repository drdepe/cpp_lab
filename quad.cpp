#include <iostream>
#include <math.h>

using namespace std;

void quad_int(int a , int b , int c ){
	int under_sqrt = sqrt(b*b - 4*a*c);
	int root1 = (-1*b + under_sqrt)/ ( 2*a);
	int root2 = (-1*b -  under_sqrt)/  (2*a);
 cout << root1 << " or " << root2 <<  endl;


}

void quad_float(float a , float b , float c ){
	float under_sqrt = sqrt(b*b - 4*a*c);
	float root1 = (-1*b + under_sqrt) /( 2*a);
	float root2 = (-1*b -  under_sqrt) / (2*a);
 cout << root1 << " or " << root2 << endl;


}


int main (){
	quad_int(1,0,-1);
	quad_int(2,0,-2);


	quad_float(1,0,-1);
	quad_float(2,0,-2);
	return 0;
}