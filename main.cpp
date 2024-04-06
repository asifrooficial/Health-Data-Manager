#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std;

// Variable to hold user data
string username;
double bloodSugarLevel;
string bloodPressureLevel;
int heartRate;

fstream storage("storage.txt",ios::app);

// Function to add user data
void addData() {

    fstream storage("storage.txt", ios::app);
    // Check if the file is open
    if (storage.is_open()) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter blood sugar level: ";
        cin >> bloodSugarLevel;
        cout << "Enter blood pressure level (upper level/lower level): ";
        cin >> bloodPressureLevel;
        cout << "Enter heart rate: ";
        cin >> heartRate;
        

        // Write data to the file
        storage << username << "," << bloodSugarLevel << "," << bloodPressureLevel << "," << heartRate << endl;

        // Notify success
        cout << "DATA ADDED SUCCESSFULLY;" << endl;
        system("pause");
        system("CLS");
        storage.close();
    }
    else {
        cout << "Failed to open file for writing." << endl;

    }

}
// Function to view user report
void viewUserReport(string username) {

    fstream storage("storage.txt", ios::in);
    cout << setw(15) << "Username" << setw(20) << "Blood Sugar Level" << setw(25) << "Blood Pressure Level" << setw(15) << "Heart Rate" <<  endl;

    if (!storage.is_open()) {
        cerr << "Failed to open file for reading." << endl;
        return;
    }
    cout << "===========================================================================" << endl;
 
    string line;
    int view = 0;
    while (getline(storage, line)) {
        stringstream ss(line);
        string token;
       
        // Tokenize the line using comma as delimiter
        getline(ss, token, ',');   // username
        if (token == username) {
            cout << setw(15) << token;
            getline(ss, token, ',');  // bloodSugarLevel
            cout << setw(20) << token;
            getline(ss, token, ','); // bloodPressureLevel
            cout << setw(25) << token;
            getline(ss, token);      // heartRate
            cout << setw(15) << token << endl;
            view++;

        }
    }
    if (view == 0)
    {
        cout << "\tNo entries found for the user: " << endl;

    }
    storage.close();
    cout << "===========================================================================" << endl;
    system("pause");
    system("CLS");
};
// Function to view all report
void viewAllUserReport() {

    cout << setw(15) << "Username" << setw(20) << "Blood Sugar Level" << setw(25) << "Blood Pressure Level" << setw(15) << "Heart Rate" << setw(20) << endl;
    cout << "===========================================================================" << endl;


    fstream storage("storage.txt", ios::in);

    if (!storage.is_open()) {
        cout << "Failed to open file for reading." << endl;

    }

    string line;
    int viewallcount = 0;
    while (getline(storage, line)) {
        stringstream ss(line);
        string token;

        // Tokenize the line using comma as delimiter
        getline(ss, token, ','); // username
        cout << setw(15) << token;
        getline(ss, token, ','); // bloodSugarLevel
        cout << setw(20) << token;
        getline(ss, token, ','); // bloodPressureLevel
        cout << setw(25) << token;
        getline(ss, token);      // heartRate
        cout << setw(15) << token<<endl;
        viewallcount++;

    }
    if (viewallcount == 0)
    {
        cout << "\tNo entries found: " << endl;

    }
    storage.close();
    cout << "===========================================================================" << endl;

    system("pause");
    system("CLS");
}
// Function to analyze user report
void analyzeUserReport(string username) {
 cout << "this function is underdevelopment " << endl;
    
    system("pause");
    system("CLS");
}

int main() {
    int choice;
    string username;

    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. View user report" << endl;
        cout << "3. View all user report" << endl;
        cout << "4. Analyze user report" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
        case 1:
            system("CLS");
            addData();
            break;
        case 2: {
            system("CLS");

            cout << "Enter username to view report: ";
            cin >> username;
            viewUserReport(username);
            break;
        }

        case 3:
            system("CLS");
            viewAllUserReport();
            break;
        case 4:
            system("CLS");
            cout << "Enter username to analyze report: ";
            cin >> username;
            analyzeUserReport(username);
            break;
        case 5: {
            cout << "Exiting program." << endl;
            system("PAUSE");
            return 0;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
            system("PAUSE");
            system("CLS");
        }
    }

    return 0;
}

