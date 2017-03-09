#include <iostream>         //This includes input, output library

using namespace std;

int main()                   //This is the main function
{                            //Start of main body
    cout<< " Description: This program prints a block F using a user given input,"<<endl;
    cout<< "where the F has a height of six characters and width of five and four characters."<<endl<<endl;

    string symbol;          //declaring string name
    int i;
    cout<<"enter your symbol to draw F with: "<<endl;       //Prompts the user for symbol to draw pattern with
    getline(cin, symbol);       //Assigns user input to string value

    cout<< ""<<endl;

    i=0;                        //initializing variable
    while (i<5)                 //loop to run code 5 times
    {
        cout<<symbol;
        ++i;
    }
    cout<<""<<endl;

    cout<<symbol<<endl;
    cout<<symbol<<endl;

    i=0;                        //re-assigned value for variable
    while (i<4)                 //loop to run code 4 times
    {
        cout<<symbol;
        ++i;
    }
    cout<<""<<endl;

    cout<<symbol<<endl;
    cout<<symbol<<endl;
    cout<<symbol<<endl;

    return 0;                   //End of program
}                               //End of main body
