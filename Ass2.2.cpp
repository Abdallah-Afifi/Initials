


#include <iostream>
#include <cctype> //including char type library to use the function toupper 

using namespace std;

int main()
{
    
    char firstinitial, secondinitial; //declaring two variables of the type char

    cout << "Enter your first initial: "; //prompting the user to enter their first initial
    cin >> firstinitial;  //storing the user's input in the already-declared variable firstinitial

    cout << "Enter your second initial: ";  //prompting the user to enter their second initial
    cin >> secondinitial;  //storing the user's input in the already-declared variable secondinitial

    //printing welcoming statement to the user, using toupper function to make sure that the printed initials are in uppercase
    cout << "Welcome " << (char) toupper(firstinitial) << '.' << (char) toupper(secondinitial) << '.';  

    return 0;

}

