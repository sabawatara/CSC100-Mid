#include <iostream>                                     //This includes input, output library
#include <cstdio>

using namespace std;

int main()                                                 //This is the main function
{                                                          // Start of main body

    cout<< "This program checks whether an alphabet is a vowel or consonant."<<endl<<endl;

    string string1[5], string2, c;                          //declaring strings and arrays

    string1[0]="a";                                         //assigning values to array
    string1[1]="e";
    string1[2]="i";
    string1[3]="o";
    string1[4]="u";


        cout<<"Enter letter: "<<endl;                       //prompts user to input a letter
        getline(cin, c);                                    //assigns user's letter to string c
        cout<< ""<<endl;


        if (c == string1[0])
        {                               //checks to match if entered letter is a vowel
            cout<<"entered letter is a vowel"<<endl;
        }

        else if (c == string1[1])
        {
            cout<<"entered letter is a vowel"<<endl;
        }

        else if (c == string1[2])
        {
            cout<<"entered letter is a vowel"<<endl;
        }

        else if (c == string1[3])
        {
            cout<<"entered letter is a vowel"<<endl;
        }

        else if (c == string1[4])
        {
            cout<<"entered letter is a vowel"<<endl;
        }

        else
        {                                                   //checks to match if entered letter is a consonant
            cout<<"entered letter is a consonant"<<endl;
        }

cout<< ""<<endl;
cout<< "The program will now terminate."<<endl;
cout<< "Please restart to try again."<<endl;

    return 0;                                                   //end of program

}                                                               //end of main body
