#include <iostream>                                                     //This includes input, output library

using namespace std;

int main()                                                              //This is the main function
{                                                                       //start of main body
    cout<< "Description: This program accepts a grade and declares an equivalent description."<<endl<<endl;

    string string1[5], string2, string3[5];                             //declares strings and arrays
    string1[0]="Excellent";                                             //assigns values to arrays
    string1[1]="Very Good";
    string1[2]="Good";
    string1[3]="Average";
    string1[4]="Fail";

    string3[0]="E";
    string3[1]="V";
    string3[2]="G";
    string3[3]="A";
    string3[4]="F";


        cout << "Enter your Grade: " << endl;                           //prompts user to input grade
        getline(cin, string2);                                          //assigns user input to string2
        cout << "your grade is: ";

        if (string2 == string3[0]) {                                    //prints output from corresponding mapping
            cout << string1[0];
        } else if (string2 == string3[1]) {
            cout << string1[1];
        } else if (string2 == string3[2]) {
            cout << string1[2];
        } else if (string2 == string3[3]) {
            cout << string1[3];
        } else if (string2 == string3[4]) {
            cout << string1[4];
        } else {
            cout << "Invalid Input";
        }
        cout<<""<<endl;


    return 0;                                                       //end of program

}                                                                   // end of main body
