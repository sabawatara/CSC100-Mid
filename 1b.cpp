#include <iostream>             //This includes input, output library

using namespace std;

int main()                      //This is the main function
{                               //Start if main body

    cout<< "Description: This program greets only user Nijhum and Rabib with their names."<<endl<<endl;
    string string1[2], string2;     //Declares string

    string1[0] = "Nijhum";      //Assigning values of array
    string1[1] = "Rabib";


        cout<<"What's your name?" <<endl;       //Prompts the user for name
        cout<<"Please enter your name: "<<endl<<endl;

        getline(cin, string2);                 //Assigns user input to string value
        cout<< ""<<endl;

        if (string2 == string1[0])              //Decides the output
        {
            cout <<"Hello! "<<string1[0]<< "."<<endl;

        }
        else if (string2 == string1[1])
        {
            cout <<"Hello! "<<string1[1]<< "."<<endl;
        }
        else
        {
            cout << "Hi!" << endl;
        }

return 0;           // End of program
    }               // End of main body


