#include <iostream>             //This includes input, output library

using namespace std;

int main()                      //Main function
{                               //Start of main body
    int n,i;                    //Declares integer variable with label : n, i

        cout<< "Description: This program converts a string to an unsigned integer."<<endl<<endl;

        cout << "Enter your string: " << endl;         //Prompts the user for number

        cin>>n;                                     //Takes user input

        i = n*(-1);

        if (n > 0)
        {
            cout << "The unsigned integer is: " << n << endl;
        }
        else
        {
            cout << "The unsigned integer is: " << i << endl;
        }

        cout<< "The program will now terminate."<<endl;
        cout<< "Restart to try again."<<endl;
    return 0;               //End of program
}                           //End of main body
