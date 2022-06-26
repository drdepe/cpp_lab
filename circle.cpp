#include <iostream>
using namespace std;

class Circle{
private:
	double radius , diameter , circumference , area ,pi=3.14151;

public:
	void getCircleInfo(){
		cout << "radius : " << radius  << "\n" << "diameter : " << diameter << "\n";
		cout << "circumference : " <<  circumference <<"\n" << "area : " << area<<"\n" ;
	}
Circle(){
	radius=0;
	diameter=0;
	circumference=0;
	area=0;
 }
Circle(double r){
	radius = r; 
	diameter = 2*r ; 
	circumference = 2 * pi * r ; 
	area = pi*r*r;
 }
};	

int main(){
	Circle c(3);
	c.getCircleInfo();
	return 0;
}
