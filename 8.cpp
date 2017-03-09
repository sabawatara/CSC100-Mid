#include <iostream>     //This includes input, output library
#include <cmath>
using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program calculates the volume of a sphere from its radius."<<endl;
    cout<< ""<<endl;

    double radius, pi, constant, volume;         // Declares variable with label : radius, pi, constant, volume

    cout<< "Please input the radius of the sphere."<<endl;      //Prompts the user for the radius
    cin>> radius;                              // Takes user input and stores it in variable



    pi = 3.1415;

    constant= 4.0 /3.0;

    volume = constant * pi * radius * radius * radius;

    cout<< "The volume of the sphere is: " <<volume<< "."<<endl;  //Displays the volume to the user


return 0;               //End of program
}                       //End of main body
