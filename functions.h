#include <iostream>
#include <cmath>
#include <string>
#include <cmath>

using namespace std;

void main_start();
inline void wait_on_enter();
double add();
double subtract();
double multiply();
double divide();
double square();


double add(){
    
    double firstNum;
    double secondNum;
    double sum;

    cout<<"What two numbers do you want to add? enter the first, press enter, then enter the second" << endl;

    cin>>firstNum;
    cin>>secondNum;
    sum = firstNum + secondNum;
    return sum;
}

double subtract(){

    double firstNum;
    double secondNum;
    double diff;

    cout<<"What two numbers do you want to subtract? enter the first, press enter, then enter the second" << endl;

    cin>>firstNum;
    cin>>secondNum;
    diff = firstNum - secondNum;
    return diff;
}

double multiply(){

    double firstNum;
    double secondNum;
    double product;

    cout<<"What two numbers do you want to multiply? enter the first, press enter, then enter the second" << endl;

    cin>>firstNum;
    cin>>secondNum;
    product = firstNum * secondNum;
    return product;
}

double divide(){

    double firstNum;
    double secondNum;
    double quotient;

    cout<<"What two numbers do you want to divide? enter the first, press enter, then enter the second" << endl;

    cin>>firstNum;
    cin>>secondNum;
    quotient = firstNum / secondNum;
    return quotient;
}

double square(){
    double num;
    double ans;

    cout<<"What do you want to square?"<<endl;

    cin>>num;

    ans = pow(num, 2);
    return ans;
}

inline void wait_on_enter()
{
    string dummy;
    cout << "Enter to continue..." << endl;
    getline(cin, dummy);
}

void main_start(){

    while (1 == 1){

        int selection;
        double answer;
        string enter;

        cout<<"What do you want to do? Enter 1 for add, 2 for subtract, 3 for multiply, 4 for divide, 5 for square or 6 for end"<<endl;
        cin>>selection;
        if (selection == 1){
            answer = add();
            cout<<"The answer is "<<answer<<endl;
            wait_on_enter();
            system("clear");
            
            
        } else if (selection == 2){
            answer = subtract();
            cout<<"The answer is "<<answer<<endl;
            wait_on_enter();
            system("clear");
            
            
        } else if (selection == 3){
            answer = multiply();
            cout<<"The answer is "<<answer<<endl;
            wait_on_enter();
            system("clear");
            
            
        } else if (selection == 4){
            answer = divide();
            cout<<"The answer is "<<answer<<endl;
            wait_on_enter();
            system("clear");
            
        } else if(selection == 5){
            answer = square();
            cout<<"The answer is "<<answer<<endl;
            wait_on_enter();
            system("clear");
            
        } else if (selection == 6){
            cout<<"Cya later";
            break;
        } else{
            cout<<"Invalid answer. Enter 1, 2, 3, 4, 5"<<endl;
            wait_on_enter();
            system("clear");
            ;
        }

    }
}