#include <iostream>
using namespace std;

class whatIsToday{
    private: 
    int day , totaldays;

    public:
    string getDay(){
        string days[7] = {"Sunday" , "Monday" , "Tuesday" , "Wedensday" , "Thuresday " , "Friday" , "Saturday"} ;
        return days[day];
    }
    whatIsToday(int d, int m ,int y){
        totaldays = (y-1)*365;
        totaldays += ( (y-1 )/4 ) - 1 ;
        // if(m-1 % 2){
        //     totaldays += ((m-1)/2)*61; 
        // }else{
        //     totaldays += (((m-2)/2)*61) + 31; 
        // }
        totaldays += d;
        day = totaldays % 7 ;
    } 
} ;
int main(){
    int day,month,year;
    cout << "Enter the day :";
    cin >>  day ;
    cout << "Enter the month :";
    cin >>  month ;
    cout << "Enter the year :";
    cin >>  year ;
    whatIsToday date(day,month,year);


    cout << "Today is : " << date.getDay() << endl;

}