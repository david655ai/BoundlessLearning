#include<iostream>
#include<cstring>
#include<string>
using namespace std;
// struct personal_info{
//     string last_name;
//     string first_name;
//     char letter;
//     int age;
// };quiz1

struct CandyBar
{
    string label;
    double weight;
    int caro;
    /* data */
};//quiz5

// struct company
// {
//     string name;
//     double zj;
//     double weight;
//     /* data */
// };quiz7、8


int main()
{
    // personal_info person1;
    // cin>>person1.first_name>>person1.last_name>>person1.letter>>person1.age;
    // cout<<"first name: "<<person1.first_name<<" last name: "<<person1.last_name<<" Grade: "<<(char)(person1.letter+1)<<" age "<<person1.age;//quiz1

    // const int SIZE = 20;
    // string name,dessert;
    // cout<<"Enter your name: \n";
    // cin>>name;
    // cout<<"Enter your favorite dessert: \n";
    // cin>>dessert;
    // cout<<"I have some delicious "<<dessert;
    // cout<<" for you. "<<name<<".\n";//quiz2

    // char first_name[20];
    // char last_name[20];
    // cout<<"Enter your first name: ";
    // cin.get(first_name,20).get();
    // cout<<"Enter your last name: ";
    // cin.get(last_name,20).get();
    // cout<<"Here's the information in a single string: "<<strcat(strcat(last_name,", "),first_name);
    //quiz3

    // string first_name;
    // string last_name;
    // cout<<"Enter your first name: ";
    // cin>>first_name;
    // cout<<"Enter your last name: ";
    // cin>>last_name;
    // cout<<"Here's the information in a single string: "<<last_name+", "+first_name;
    //quiz4

    // CandyBar snack = {"Mocha Munch",2.3,350};
    // cout<<snack.label<<" "<<snack.weight<<" "<<snack.caro;//quiz5

    // CandyBar snack;
    // cout<<"Input elementary: \n";
    // cin>>snack.label>>snack.weight>>snack.caro;
    // cout<<snack.label<<" "<<snack.weight<<" "<<snack.caro;//quiz6
    // struct company com;
    // cout<<"input info: \n";
    // cin>>com.name>>com.weight>>com.zj;
    // cout<<com.name<<" "<<com.weight<<" "<<com.zj;//quiz7

    // struct company *q = new company;
    // cin>>q->zj>>q->name>>q->weight;
    // cout<<q->zj<<" "<<q->name<<" "<<q->weight;//quiz8


    // struct CandyBar *q = new CandyBar[3];
    // cin>>q->caro>>q->label>>q->weight;
    // cin>>(q+1)->caro>>(q+1)->label>>(q+1)->weight;
    // cin>>(q+2)->caro>>(q+2)->label>>(q+2)->weight;
    // cout<<q->caro<<" "<<q->label<<" "<<q->weight<<endl;
    // cout<<(q+1)->caro<<" "<<(q+1)->label<<" "<<(q+1)->weight<<endl;
    // cout<<(q+2)->caro<<" "<<(q+2)->label<<" "<<(q+2)->weight<<endl;//quiz9

    return 0;




}