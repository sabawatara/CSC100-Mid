#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program reads the age of the candidate and determines whether he/she is eligible for vote or not."<<endl;
    cout<< ""<<endl;

    int age;                                      // Declares integer variable with label

    cout<< "Please enter your age: "<<endl;       //Prompts the user for age
    cin>> age;                                    // Takes user input and stores it in variable
    cout<< ""<<endl;

    if (age < 18)                                   // Output if age is less than 18
    {
        cout<< "Sorry you're not eligible for vote."<<endl;
        cout<< ""<<endl;
    }
    else                                            // Output if age is greater than 18
    {
        cout<< "Congratulations! You are eligible for casting your vote!"<<endl;
        cout<< "(P.S. Make Bangladesh great again!)"<<endl;
        cout<< ""<<endl;
    }

return 0;               //End of program
}                       //End of main body
