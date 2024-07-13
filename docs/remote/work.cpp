#include<iostream>
using namespace std;


short ReadYear() {

    short Year;

        do {
                cout << "enter your year?" << endl;
                        cin>>Year;


                            } while(Year<1||Year>2050);

                                return Year;


                                }
                                short ReadMonth() {

                                    short Month;

                                        do {
                                                cout << "enter your Month?" << endl;
                                                        cin>>Month;


                                                            } while(Month<1||Month>12);

                                                                return Month;


                                                                }

                                                                bool IsLeapYear(int year) {

                                                                    return ((year%4==0&&year%100!=0)||year%400==0)? true : false;

                                                                    }




                                                                    void PrintCelender(string DayName,short Month,short year) {


                                                                        short N =(IsLeapYear(year)&&Month==2)? 29 : (Month==2)? 28 : (Month==4||Month==6||Month==8||Month==9||Month==11)? 30 : 31 ;

                                                                            string Arr[7]= {"Sun","Mon","Tus","Win","Thr","Fri","Sat"};

                                                                                string ArrM[12]= {"January","February","March","April","May","June","July","August","September","October","November","December"};


                                                                                    cout << "____________________________" <<ArrM[Month-1]<<"____________________________"<< endl;

                                                                                        cout << "Sun\t"<<"Mon\t"<<"Tus\t"<<"Win\t"<<"Thr\t"<<"Fri\t"<<"Sat\t" << endl;



                                                                                            for(short d=0; d<7; d++) {

                                                                                                    if(Arr[d]==DayName) {

                                                                                                                for(short i=1; i<=N; i++) {

                                                                                                                                cout << i <<"\t";

                                                                                                                                                if(i==7-d||i==14-d||i==21-d||i==28-d||(i==29&&DayName=="Sat"||i==30&&DayName=="Fri") ) cout << "\n";
                                                                                                                                                            }

                                                                                                                                                                        break;

                                                                                                                                                                                }

                                                                                                                                                                                        cout << "\t";

                                                                                                                                                                                            }


                                                                                                                                                                                            }












                                                                                                                                                                                            void DateTime() {

                                                                                                                                                                                                short year =ReadYear();
                                                                                                                                                                                                    short Month =ReadMonth();
                                                                                                                                                                                                        short DayInMonth =1;
                                                                                                                                                                                                            short DayInWeek;
                                                                                                                                                                                                                int a,y,m;

                                                                                                                                                                                                                    a=((14-Month)/12);
                                                                                                                                                                                                                        y=year-a;
                                                                                                                                                                                                                            m=Month+(12*a)-2;
                                                                                                                                                                                                                                DayInWeek=(DayInMonth+y+(y/4)-(y/100)+(y/400)+((31*m)/12))%7;




                                                                                                                                                                                                                                    string Arr[7]= {"Sun","Mon","Tus","Win","Thr","Fri","Sat"};


                                                                                                                                                                                                                                        PrintCelender(Arr[DayInWeek],Month,year);


                                                                                                                                                                                                                                        }




                                                                                                                                                                                                                                        int main()
                                                                                                                                                                                                                                        {

                                                                                                                                                                                                                                            DateTime();






                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                }