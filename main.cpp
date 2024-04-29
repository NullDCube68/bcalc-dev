#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
//setlocale (LC_ALL,0);

int main (){
    // General variable inicialization
    double P0; // Initial poblation (in unities)
    double PA; // Actual poblation (in unites)
    double t; // Future time (in minutes)
    double td; // Duplication time (in minutes)

    cout << "Thank you for trying this alpha!" << endl << "Please, if you notice something that is working wrong or if you want to share some improvements or ideas, report it on the github repo." << endl ;
    cout << "Insert the initial poblation: ";
    cin >> P0;
    cout << "\nInsert the actual poblation: ";
    cin >> PA;
    cout << "\nInsert the duplication time from the inicial poblation to now (in minuites): ";
    cin >> td;
    cout << "\nInsert the time (in minutes) you want to know the poblation: ";
    cin >> t;

    // Calculating the growth rate
    double rt = P0-PA;
    double r = log2(P0/PA)/td;

    // Calculating the poblation
    double Pt = P0*exp(r*rt);

    // Print the final result
    cout << "The poblation in " << t << " seconds from the initial poblation will be: " << Pt << endl;
}
