#include <iostream>                         //This includes inpit, output library

using namespace std;

int main()                                  //This is the main function
{                                           //Start of main body
    cout<< "Description: This program calculates the profit or loss on a transaction."<<endl<<endl;

    double x,y,p;                           //declare variables
    cout<<"Enter cost price: "<<endl;       //prompts user to input cost price
    cin>>x;                                 //assigns user input to variable x
    cout<<"Enter selling price: "<<endl;    //prompts user to input selling price
    cin>>y;                                 //assigns user input to variable y
    cout<< ""<<endl;

    p=y-x;                                  //calculates profit-loss

    if (p>0)                                   //prints if there's a profit
    {
        cout<<"You made a profit of amount: "<<p<<endl;
    }

    else if (p<0)                               //prints if there's a loss
    {
        cout<<"You made a loss of amount: "<<p<<endl;
    }

    else if (p==0)                              //prints if there;s no profit-loss
    {

        cout<<"There was no profit or loss from that transaction."<<endl;
    }

    cout<< ""<<endl;
    cout<< "The program will now terminate."<<endl;
    cout<< "Restart to try again."<<endl;

    return 0;
}
