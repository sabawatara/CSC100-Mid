#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program finds the largest of three numbers."<<endl;
    cout<< ""<<endl;

    int num1, num2, num3;               // Declares integer variable with label : num1, num2, num3

    cout<< "Please enter the first number: "<<endl;      //Prompts the user for first number
    cin>> num1;                                          // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Please enter the second number: "<<endl;     //Prompts the user for the second number
    cin>> num2;                                          // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Please enter the third number: "<<endl;      // Prompts the user for the third number
    cin>> num3;                                          // Takes user input and stores it in variable
    cout<< ""<<endl;
    if (num1 > num2)                                    // Decides which number is greater
    {
        if (num1 > num3 )
            cout<< "The largest amongst" <<num1<< "," <<num2<< "and" <<num3<< "is" <<num1<< "."<<endl;
    }

    if (num2 > num1)
    {
        if (num2 > num3)
            cout<< "The largest amongst" <<num1<< "," <<num2<< "and" <<num3<< "is" <<num2<< "."<<endl;
    }
    if (num3 > num1)
    {
        if (num3 > num2)
            cout<< "The largest amongst  " <<  num1  << " , " <<  num2  << "  and  " <<   num3   << " is " << num3 << "."<<endl;
    }

cout<< ""<<endl;
cout<< "The program will now terminate."<<endl;
cout<< "Please restart to try again."<<endl;

return 0;               //End of program
}                       //End of main body
