#include <iostream>
using namespace std;

class whatIsToday{
    private: 
    int day , totaldays;

    public:
    string getDay(){
        string days[7] = {"Monday" , "Tuesday" , "Wedensday" , "Thuresday " , "Friday" , "Saturday","Sunday"} ;
        return days[day];
    }
    whatIsToday(int d, int m ,int y){
        totaldays = (float)(y-1)*365.25;
     
        if( (y-1)%4 == 0 ){
             cout << "leap";
             totaldays +=  ((y-1 ) /4 );
        }
        else {
             totaldays += ( (y-1 ) /4 ) -1;
             cout << "!leap " << endl ;
        }

        // months if the month before is a evnen month then there are equal ammount of even months and odd months (30*n/2 ,31*n/2)
        if(m-1 % 2 == 0 ){
            totaldays += ((m-1)/2)*61; 
        }else{
            totaldays += ((m-2)/2)*61 + 31; 
        }
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