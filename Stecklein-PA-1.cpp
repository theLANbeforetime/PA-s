/*
Traxxon Stecklein
CSCI 1410
Programming Assignement 1
Outline
*/
#include <iostream>
using namespace std;

int main() {
    
    //print out myname & student ID
    cout << "Traxxon Stecklein ID: 109163860\n";
    
    //start switch 'choose option'
    int userChoice, userNum, userNumTen, specialTen = 0, specialOne, tempNum, revNum;
    bool menuOn = true;
    
    // print out 3 options
    while (menuOn != false){
        cout << endl;
        cout << "1. Almost Always 99\n";
        cout << "2. Always 3\n";
        cout << "3. Exit\n";
        
        cin >> userChoice;
        
switch (userChoice){
                
            case 1:
                cout << "Choose a number between 0 and 99: \n";
                cin >> userNum;
        if (userNum < 10)
                {
                    userNumTen = userNum * 10;
                    userNum = userNumTen;
                }
                specialOne = userNum % 10;
                tempNum = userNum - specialTen;
                specialTen = tempNum / 10;
                revNum = (specialOne * 10) + specialTen;
                cout << "The reverse number is " << revNum << endl;
        
    case 2:
        
    case 3:
        cout << "The program is now exiting \n";
        menuOn = false;
        break;
        
    default:
        cout << "Please choose option 1, 2, or 3: \n";
        break;
                    }
    
}


//if choice not 1-3, then loop until choice is 1-3
//end loop 'choice option' when valid choice is input -- continue to next step

//if option 1 and number less than 10, multiply number by 10

//break new number into a tens digit and ones digit

/*reverse or swap the digits places (ones place becomes 10s, vice versa)
 and make it a new variable '2' -- print*/

//subtract var '2' by var '1' -- print

// if result is negative

//multiply by -1 --print

//else if result less than 10

//multiply by 10 -- print

//else do nothing

//take result and reverse digits again, make it a new variable '4' -- print

//add var '3' to var '4' and make new variable '5' -- print

// take var '5' and...

//if = 99 then print out congrats

//else print out something went wrong

//else if option 2

//prompt user to pick a number, make it a var 'userInput'

//double 'userInput' and make it new var 'num' -- print

//add 9 to 'num' -- print

//subtract 3 from 'num'  -- print

//divide 'num' by 2 -- print

//subtract 'num' by 'userInput'

//if answer = 3 print out congrats

//else print something went wrong

//else if option 3

//give user ending message and exit Program



return 0;
}
