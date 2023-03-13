#include <iostream>
using namespace std;
string judge(){
    int age;
    string name;
    int experience;
    string cader;
    string exp;
    cout<<"Please input your age;";
    cin >> age ;
    cout<<"Please input your name;";
    cin >> name ;
    cout<<"Please input your experience;";
    cin >> experience ;
    if (experience > 15){
        cader = "higher senior";
    }
    else if (experience > 10){
        cader = "lower senior";
    }
    else if (experience> 5){
        cader = "junior";
    }
    else{
        cader = "lower junior";
    }
exp="mr "+name +" your cader is ";
    return exp+cader;
}
int main(){
    cout<<judge();
    return 0;
}
