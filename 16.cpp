#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description : This program determines the nature of root of a quadratic equation."<<endl;
    cout<< ""<<endl;

    int a, b, c;                // Declares integer variable with label : a, b, c

    cout<< "Enter the coefficient of x^2, a= "<<endl;     //Prompts the user for a
    cin>> a;                                              // Takes user input and stores it in variable
    cout<< "Enter the coefficient of x, b= "<<endl;       // Prompts the user for b
    cin>> b;
    cout<< "Please enter the constant, c= "<<endl;
    cin>> c;
    cout<< ""<<endl;

    double x;                                           // Declares real variable with the label: x

    x= b * b - 4 * a * c;                               //States formula for discriminant

    cout<< "Discriminant= " <<x<< "."<<endl;            // Displays the discriminant
    cout<< ""<<endl;

    if (x > 0)                                          // Decides the nature of root
    {
        cout<< "The roots are real."<<endl;
    }

    if (x< 0)
    {
        cout<< "The roots are imaginary, there is no real solution."<<endl;
    }

    if (x == 0)
    {
        cout<< "The roots are real and equal."<<endl;
    }


return 0;               //End of program
}                       //End of main body
