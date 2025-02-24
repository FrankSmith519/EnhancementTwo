/*
 * Name        : ClockTime.cpp
 * Author      : Frank Smith
 * Description : Chada Tech Clock Skills Test */

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

void addHour(int hour, int hour_24) { // adds one hour if not 11 or 23. sets to 0 if 11 or 23
    if (hour == 11) {
        hour = 0;
    }
    else {
        hour += 1;
    }

    if (hour_24 == 23) {
        hour_24 = 0;
    }
    else {
        hour_24 += 1;
    }
}


void addMin(int min, int min_24) {  // adds one minute if not 59. sets to 0 if 59
    if (min == 59) {
        min = 0;
        
    }
    else {
        min += 1;
    }

    if (min_24 == 59) {
        min_24 = 0;

    }
    else {
        min_24 += 1;
    }
}

void addSec(int sec, int sec_24) {  // adds one second if not 59. sets to 0 if 59
    if (sec == 59) {
        sec = 0;
        
    }
    else {
        sec += 1;
    }

    if (sec_24 == 59) {
        sec_24 = 0;

    }
    else {
        sec_24 += 1;
    }
}


int main() {

    int userInput = 0;
    int hour = 10;
    int min = 57;
    int sec = 57;
    int hour_24 = 22;
    int min_24 = 57;
    int sec_24 = 57;

    system("CLS");

    cout << "**************************\t" << "**************************" << endl;
    cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
    cout << "*     " << hour << ":" << min << ":" << sec << " " << "A M" << "       *\t"
        << "*        " << hour_24 << ":" << min_24 << ":" << sec_24 << "        *" << endl;
    cout << "**************************\t" << "**************************" << endl;
    cout << endl;

    cout << "\t\t**************************" << endl;
    cout << "\t\t*  1-Add One Hour        *" << endl;
    cout << "\t\t*  2-Add One Minute      *" << endl;
    cout << "\t\t*  3-Add One Second      *" << endl;
    cout << "\t\t*  4-Exit Program        *" << endl;
    cout << "\t\t**************************" << endl;

    while (userInput != 4) {
        cin >> userInput;
        switch (userInput) {     // template below referenced from githup user pbouland
        case 1:
            //adds one hour to time
            addHour(hour, hour_24);
            cout << "**************************\t" << "**************************" << endl;
            cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
            cout << "*     " << hour << ":" << min << ":" << sec << " " << "A M" << "       *\t"
                << "*        " << hour_24 << ":" << min_24 << ":" << sec_24 << "        *" << endl;
            cout << "**************************\t" << "**************************" << endl;
            cout << endl;
            break;
        case 2:
            //adds one minute to time
            addMin(min, min_24);
            cout << "**************************\t" << "**************************" << endl;
            cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
            cout << "*     " << hour << ":" << min << ":" << sec << " " << "A M" << "       *\t"
                << "*        " << hour_24 << ":" << min_24 << ":" << sec_24 << "        *" << endl;
            cout << "**************************\t" << "**************************" << endl;
            cout << endl;
            break;
        case 3:
            //adds one second to time
            addSec(sec, sec_24);
            cout << "**************************\t" << "**************************" << endl;
            cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
            cout << "*     " << hour << ":" << min << ":" << sec << " " << "A M" << "       *\t"
                << "*        " << hour_24 << ":" << min_24 << ":" << sec_24 << "        *" << endl;
            cout << "**************************\t" << "**************************" << endl;
            cout << endl;
            break;
        case 4:
            //exits program
            return EXIT_SUCCESS;
            break;

        }
    }

    return 0;
    
}
