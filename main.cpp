#include<iostream>
#include<string>

using namespace std;

int main() {
    string sentence;
    cout<<"Enter a sentence: ";//displays "Enter a sentence" in the console
    getline(cin,sentence);//allow the user to enter something in the console
    cout<<"Before Encryption\n";
    cout<<sentence<<'\n';//Displays the the actual sentence that the user enters
    /** line 12 to line 17 is the algorithm behind the program
        Thus is the lines of codes that is helping us to
        encrypt any type of sentence the user will enter in the
        console after we have asked the user to enter a sentence
    **/

    for(int i=0;i<sentence.size();i++) {//this code will help us iterate through each symbol in the sentence the user will entered
        if(int(sentence[i]) >= 33 && int(sentence[i]) <= 47) {//this condition checks if the symbol is between ! and / using ASCII table
             sentence[i] = char(80 - int(sentence[i]));//change the original symbol based on the formula given,thus char(80 - numerical value for the symbol on the ASCII table)
        }
            else if(int(sentence[i]) >= 48 && int(sentence[i]) <= 57) {//this condition checks if the symbol is between 0 and 9 using ASCII table
             sentence[i] = char(105 - int(sentence[i]));//change the original symbol based on the formula given,thus char(105 - numerical value for the symbol on the ASCII table)
            }
            else if(int(sentence[i]) >= 58 && int(sentence[i]) <= 64) {//this condition checks if the symbol is between : and @ using ASCII table
             sentence[i] = char(122 - int(sentence[i]));//change the original symbol based on the formula given,thus char(122 - numerical value for the symbol on the ASCII table)
            }
            else if(int(sentence[i]) >= 65 && int(sentence[i]) <= 90) {//this condition checks if the symbol is between A and Z using ASCII table
             sentence[i] = char(155 - int(sentence[i]));//change the original symbol based on the formula given,thus char(155 - numerical value for the symbol on the ASCII table)
            }
            else if(int(sentence[i]) >= 91 && int(sentence[i]) <= 96) {//this condition checks if the symbol is between [ and ` using ASCII table
             sentence[i] = char(187 - int(sentence[i]));//change the original symbol based on the formula given,thus char(187 - numerical value for the symbol on the ASCII table)
            }
            else if(int(sentence[i]) >= 97 && int(sentence[i]) <= 122) {//this condition checks if the symbol is between a and z using ASCII table
             sentence[i] = char(219 - int(sentence[i]));//change the original symbol based on the formula given,thus char(219 - numerical value for the symbol on the ASCII table)
            }
            else if(int(sentence[i]) >= 123 && int(sentence[i]) <= 126) {//this condition checks if the symbol is between | and ~ using ASCII table
             sentence[i] = char(249 - int(sentence[i]));//change the original symbol based on the formula given,thus char(249 - numerical value for the symbol on the ASCII table)
            }
        else {
            sentence[i] = sentence[i];//if the symbol is not between A-Z or a-z,then the original symbol is represented as it is
        }

    }

    cout<<"After Encryption\n";
    cout<<sentence;//Displays the encrypted sentence based on the formula used.
 }
