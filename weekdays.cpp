#include <iostream>
using namespace std;

int main() {
    string weekday;                     // couldnt get the tolower function working or some other case instensitive functions to convert to uppercase to lower or assign them the same value. Just assigned a string variable to everypermutation.
    string string1 = "Monday";
    string string2 = "monday";
    string string3 = "Tuesday";
    string string4 = "tuesday";
    string string5 = "Wednesday";
    string string6 = "wednesday";
    string string7 = "Thursday";
    string string8 = "thursday";
    string string9 = "Friday";
    string string10 = "friday";
    string string11 = "Saturday";
    string string12 = "saturday";
    string string13 = "Sunday";
    string string14 = "sunday";
    int day;                     // intitializes a integer variable called day to be able to use different cases
    cout << "What day is it? ";
    cin >>weekday;



    if (string1 == weekday || string2 == weekday || string3 == weekday || string4 == weekday || string7 == weekday || string8 == weekday || string9 == weekday || string10 == weekday){
        day=1; // assigns a value to day based of keyboard input. (tried to establish a list with coomas but could not get the proper syntax, again went through every per)
    }else if (weekday == string5 || weekday == string6){
        day=2;
    } else if (weekday == string11 || weekday == string12 || weekday == string13 || weekday == string14) {
        day = 3; // nested if statments seem to also work
    } else { day = 4; // assigns an input for random names not days of the week
    }
    
    switch (day) {  // switch statment to have an output
        case 1:
        cout << "It's the weekday! ";
        break;
        case 2:
        cout << "It's Huuump DaaaaYYY!";
        break;
        case 3: 
         cout << "It's the Weekend!";
        break;
        case 4:
         cout << "invalid input";
    }

return 0;
}