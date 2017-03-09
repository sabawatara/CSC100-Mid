#include <iostream>             //Includes input, output library
#include <stdlib.h>

using namespace std;

int main()                      //Main function
{                               //Start of main body


    string string1;
    double Z;

    cout<<"enter string: "<<endl;
    getline(cin, string1);

    Z = atof(string1.c_str());

    cout<<"converting double: "<<Z<<endl;


    return 0;                //End of program
}                            //End of main body
