#include<iostream>
// void quiz1();
// void quiz2();
// void quiz3();
// void quiz4();
// void quiz5();
void quiz6();
int main()
{
    using namespace std;
    // quiz3();
    // quiz1();
    // quiz2();
    // quiz4();
    // quiz5();
    quiz6();
    return 0;
}
// void quiz1()
// {
//     using namespace std;
//     const int CONV = 12;
//     int ic;
//     cout<<"Please input a number:_ _";
//     cin>>ic;
//     cout<<"Your height is "<<ic/CONV<<" ft and "<<ic%CONV<<" in";
//     return;
// }

// void quiz2()
// {
//     using namespace std;
//     double in,ft,pound,BMI;
//     const int CONV_H_I = 12;
//     const double CONV_H_M = 0.0254;
//     const double WEIGHT = 2.2;
//     cout<<"Please input your height: ft and in"<<endl;
//     cin>>in>>ft;
//     cout<<"Please input your weights: pound"<<endl;
//     cin>>pound;
//     BMI = WEIGHT*pound/(CONV_H_M*(in+CONV_H_I*ft));
//     cout<<"Your BMI is: "<<BMI;
//     return;
// }

// void quiz3()
// {
//     using namespace std;
//     double degree,minute,second;
//     const int CONV = 60;
//     cout<<"Enter a latitude in degrees,minutes, and seconds:"<<endl;
//     cout<<"First,enter the degrees: ";
//     cin>>degree;
//     cout<<"Next,enter the minutes of arc: ";
//     cin>>minute;
//     cout<<"Finally,enter the seconds of arc: ";
//     cin>>second;
//     cout<<degree<<" degrees, "<<minute<<" minutes, "<<second<<" seconds = "<<degree+minute/CONV+second/(CONV*CONV);
//     return;
// }

// void quiz4()
// {
//     using namespace std;
//     long second;
//     const int HOUR_DAY = 24;
//     const int HOUR_MINUTES = 60;
//     const int MINUTES_SECONDS = 60;
//     cout<<"Enter the number of seconds: ";
//     cin>>second;
//     int day = second/(HOUR_DAY*HOUR_MINUTES*MINUTES_SECONDS);
//     int hour = (second - day*(HOUR_DAY*HOUR_MINUTES*MINUTES_SECONDS))/(HOUR_MINUTES*MINUTES_SECONDS);
//     int minutes = (second - day*HOUR_DAY*HOUR_MINUTES*MINUTES_SECONDS-hour*HOUR_MINUTES*MINUTES_SECONDS)/MINUTES_SECONDS;
//     int last_second = second - day*HOUR_DAY*HOUR_MINUTES*MINUTES_SECONDS-hour*HOUR_MINUTES*MINUTES_SECONDS-minutes*MINUTES_SECONDS;
//     cout<<second<<" seconds = "<<day<<" days, "<<minutes<<" minutes, "<<last_second<<" seconds";
//     return;
// }


// void quiz5()
// {
//     using namespace std;
//     double inmeter,gallon;
//     cout<<"Please input your car inmeter and the cost of gallon:"<<endl;
//     cin>>inmeter>>gallon;
//     cout<<"HaHa,result is "<<inmeter/gallon;
//     return;
// }


void quiz6()
{
    using namespace std;
    double euro_per_kilo;
    cout<<"Please input the cost of petrol per 100 kilo: "<<endl;
    cin>>euro_per_kilo;
    const double DIS = 62.14;
    const double CON = 3.875;
    cout<<"American style: "<<DIS*CON/(100*euro_per_kilo);
    return;
}