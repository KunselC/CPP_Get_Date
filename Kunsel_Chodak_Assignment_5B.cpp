#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to get date from user input in the format "dd-mmm-yyyy"
void getDate(int* dptr, int* mptr, int* yptr) {
    string dateStr;
    cout << "Enter the date in the format dd-mmm-yyyy (e.g., 22-Jul-2024): ";
    getline(cin, dateStr);

    // Create stringstreams to extract day, month, and year
    stringstream ss(dateStr);
    string dayStr, monthStr, yearStr;

    // Extract day (dd)
    getline(ss, dayStr, '-');
    *dptr = stoi(dayStr);

    // Extract month (mmm)
    getline(ss, monthStr, '-');
    //Months are represented by their numeric values
    if (monthStr == "Jan") {
        *mptr = 1;
    }
    else if (monthStr == "Feb") {
        *mptr = 2;
    }
    else if (monthStr == "Mar") {
        *mptr = 3;
    }
    else if (monthStr == "Apr") {
        *mptr = 4;
    }
    else if (monthStr == "May") {
        *mptr = 5;
    }
    else if (monthStr == "Jun") {
        *mptr = 6;
    }
    else if (monthStr == "Jul") {
        *mptr = 7;
    }
    else if (monthStr == "Aug") {
        *mptr = 8;
    }
    else if (monthStr == "Sep") {
        *mptr = 9;
    }
    else if (monthStr == "Oct") {
        *mptr = 10;
    }
    else if (monthStr == "Nov") {
        *mptr = 11;
    }
    else if (monthStr == "Dec") {
        *mptr = 12;
    }
    else {
        // Default to 1 (January) if month string is unrecognized
        *mptr = 1;
    }

    // Extract year (yyyy)
    getline(ss, yearStr);
    *yptr = stoi(yearStr);
}

int main() {
    int day, month, year;

    // Call getDate function to retrieve date from user
    getDate(&day, &month, &year);

    // Output the retrieved date components
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;

    return 0;
}