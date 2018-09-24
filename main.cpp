/*
 Traxxon Stecklein
 CSCI 1410
 Programming Assignement 1
 ID: 109163860
 */
#include <iostream>
using namespace std;

int main() {
    
    //print out myname & student ID
    cout << "Traxxon Stecklein ID: 109163860\n";
    
    //start switch 'choose option'
    int userChoice, userNum, userNumTen, specialTen = 0, specialOne, tempNum, revNum, subNum, finalNum, doubleNum, sumNum, divNum;
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
                cout << "This option takes your input and transforms it to 99!\n";
                
                cout << "Choose a number between 0 and 99: \n";
                
                cin >> userNum;
                if (userNum >= 0 && userNum <= 99)
                {
                //adjust usernum by *10
                    if (userNum < 10)
                    {
                        userNumTen = userNum * 10;
                        userNum = userNumTen;
                        cout << "Your number has been multiplied by 10 giving: " << userNum << endl;
                    }// closing userNum < 10
                
                
                //get the ones digit
                specialOne = userNum % 10;
                cout << "Your number broken into ones is: " << specialOne << endl;
                
                //get the tens digit
                tempNum = userNum - specialOne;
                //put out results
                cout << "Your number broken into tens is: " << tempNum << endl;
                specialTen = tempNum / 10;
                
                //get rev number and put out the rev number
                revNum = (specialOne * 10) + specialTen;
                cout << "The reverse number is " << revNum << endl;
                
                //get sub number and put it out
                subNum = userNum - revNum;
                cout << "The reversed minus the original is: " << subNum << endl;
                
                //if that number is less than 10 or negative, adjust it
                    if (subNum < 0)
                    {
                        cout << "Because your number is negative we will fix it!\n";
                        subNum = subNum * -1;
                            if (subNum < 10)
                            {
                                cout << "Because your number is less than ten, we will multiply it by ten!\n";
                                subNum = subNum * 10;
                            }//closing subNum < 10
                    }//closing subNum < 0
                
                //reset variables for next steps
                specialOne = 0;
                specialTen = 0;
                tempNum = 0;
                revNum = 0;
                
                //get the ones digit
                specialOne = subNum % 10;
                cout << "Your new number broken into ones is: " << specialOne << endl;
                
                //get the tens digit
                tempNum = subNum - specialOne;
                //put out results
                cout << "Your new number broken into tens is: " << tempNum << endl;
                specialTen = tempNum / 10;
                
                //get rev number and put out the rev number
                revNum = (specialOne * 10) + specialTen;
                cout << "The new reverse number is " << revNum << endl;
                
                //add the new revNum to old revNum
                finalNum = revNum + subNum;
                
                //if number not 99, give something went wrong, else give success line
                    if (finalNum != 99)
                    {
                        cout << "Oh-no! Something went wrong with my logic, your number did not turn out to be 99!\n";
                    }//closing if of finalNum
                    else
                    {
                        cout << "Success!\n";
                        cout<< "After adding the reversed minus the original ("<< revNum << ") to the new reversed number (" << subNum << "):\n";
                        cout << "The magic number is: " << finalNum << endl;
                    break;
                    }//closing success else
                }//closing if not 0-99
                else
                    cout << "Please retry and choose a number between 0-99 next time!\n";
                    break;
            case 2:
                //resesting variables used in following case
                userNum = 0;
                subNum = 0;
                finalNum = 0;
                
                //ask for user input
                cout << "This option takes any number you pick and transforms it to 3!\n";
                cout << "Please pick a number!\n";
                
                //get user input
                cin >> userNum;
                
                //double the number
                doubleNum = userNum * 2;
                
                //put out that number
                cout << "You number doubled is: " << doubleNum << endl;
                
                //add 9 to that number
                sumNum = doubleNum + 9;
                
                //put out new number
                cout << "Your doubled number plus nine is: " << sumNum << endl;
                
                //subtract 3 from the number
                subNum = sumNum - 3;
                
                //put out subtracted number
                cout << "Your doubled number plus nine minus 3 is: " << subNum << endl;
                
                //divide number
                divNum = subNum / 2;
                
                //put out that divided number
                cout << "Your doubled number plus nine minus three divided by 2 is: " << divNum << endl;
                
                //subtract original from final number
                finalNum = divNum - userNum;
                
                //put out error if final num is not 3, if it is 3 congrats message
                    if (finalNum == 3)
                    {
                        cout << "Success! After subtracting the original number from the altered number, the final number is: " << finalNum << endl;
                    }//closing if of finalSum
                    else
                        cout << "Oh-no! An error has occured. Something has gone wrong!\n";
                    break;
                
            case 3:
                //exit the progam with ending message
                cout << "The program is now exiting \n";
                menuOn = false;
                break;
                
            default:
                //invalid option so ask to choose again
                cout << "Please choose option 1, 2, or 3: \n";
                break;
        }//closing switch
        
    }//closing while loop
    return 0;
} // closing main
