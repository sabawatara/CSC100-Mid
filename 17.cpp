#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program read temperature in centigrade and display a suitable message according to temperature"<<endl;
    cout<< ""<<endl;

    int temp;            // Declares integer variable with label : num

    cout<< "Please enter the temperature in centigrade: "<<endl;       //Prompts the user for temperature
    cin>> temp;                                          // Takes user input and stores it in variable

    if (temp <0)                                        //Decides the suitable message
    {
        cout<< "Freezing weather."<<endl;
    }

    if (temp >0)
    {
        if (temp < 10)
            cout<< "Very cold weather."<<endl;
    }
    if (temp > 10)
    {
        if (temp < 20)
            cout<< "Cold weather."<<endl;
    }
    if (temp > 20)
    {
        if (temp < 30)
            cout<< "Normal temperature."<<endl;
    }
    if (temp >30)
    {
        if (temp < 40)
            cout<< "Its hot."<<endl;
    }
    if (temp >= 40)
    {
        cout<< "It's very hot."<<endl;
    }

cout<< ""<<endl;
cout<< "The program will now terminate."<<endl;
cout<< "Please restart to try again.";
cout<< ""<<endl;

 return 0;               //End of program
}                       //End of main body
