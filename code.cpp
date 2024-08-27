#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;

void displayRentedCars()
{
    fstream file;
    string line;
    file.open("Details.txt", ios::in);
    if (!file)
    {
        cout << "No rental records found!" << endl;
    }
    else
    {
        cout << "\n\n---------------------- All Rented Cars Record ----------------------\n";
        while (getline(file, line))
        {
            cout << line << endl;
        }
        cout << "--------------------------------------------------------------------\n";
    }
    file.close();
}

void menu() {
    int choice;
    string name;
    int cnic, adv, rentdays, totalfee;

    cout << "Hyundai  ----> cheap Enter 1 - To Select" << endl;
    cout << "Ford     ----> cheap Enter 2 - To Select" << endl;
    cout << "Suzuki   ----> cheap Enter 3 - To Select" << endl;
    cout << "Audi     ----> cheap Enter 4 - To Select" << endl;
    cout << "Tesla    ----> Expensive Enter 5 - To Select" << endl;
    cout << "Lexus    ----> Expensive Enter 6 - To Select" << endl;
    cout << "Mercedes ----> Expensive Enter 7 - To Select" << endl;
    cout << "Range Rover ----> Expensive Enter 8 - To Select" << endl;
    cout << "BMW      ----> Expensive Enter 9 - To Select" << endl;

    cout << "Your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int advancePric = 150, carrentperday = 50, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Hyundai-----------------------------" << endl;
        cout << "Model : BR-V" << endl << "Color : Red" << endl << "Car Seats : 4 Seats" << endl << "Maximum Speed : 100 Km/h" << endl;
        cout << "Advance Price : 150K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = adv - rentdays;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Hyundai (BR-V)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 2: {
        int advancePric = 200, carrentperday = 60, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Ford-----------------------------" << endl;
        cout << "Model : Focus" << endl << "Color : Blue" << endl << "Car Seats : 4 Seats" << endl << "Maximum Speed : 120 Km/h" << endl;
        cout << "Advance Price : 200K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Ford (Focus)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 3: {
        int advancePric = 180, carrentperday = 55, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Suzuki-----------------------------" << endl;
        cout << "Model : Alto" << endl << "Color : White" << endl << "Car Seats : 4 Seats" << endl << "Maximum Speed : 90 Km/h" << endl;
        cout << "Advance Price : 180K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;

                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Suzuki (Alto)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 4: {
        int advancePric = 250, carrentperday = 80, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Audi-----------------------------" << endl;
        cout << "Model : A4" << endl << "Color : Black" << endl << "Car Seats : 4 Seats" << endl << "Maximum Speed : 130 Km/h" << endl;
        cout << "Advance Price : 250K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Audi (A4)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 5: {
        int advancePric = 600, carrentperday = 350, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Tesla-----------------------------" << endl;
        cout << "Model : Model S" << endl << "Color : Silver" << endl << "Car Seats : 5 Seats" << endl << "Maximum Speed : 250 Km/h" << endl;
        cout << "Advance Price : 600K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Tesla (Model S)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 6: {
        int advancePric = 400, carrentperday = 210, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Lexus-----------------------------" << endl;
        cout << "Model : RX 400" << endl << "Color : Brown" << endl << "Car Seats : 4 Seats" << endl << "Maximum Speed : 140 Km/h" << endl;
        cout << "Advance Price : 400K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Lexus (RX 400)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 7: {
        int advancePric = 700, carrentperday = 400, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Mercedes-----------------------------" << endl;
        cout << "Model : S-Class" << endl << "Color : Black" << endl << "Car Seats : 5 Seats" << endl << "Maximum Speed : 200 Km/h" << endl;
        cout << "Advance Price : 700K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Mercedes (S-Class)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 8: {
        int advancePric = 800, carrentperday = 500, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - Range Rover-----------------------------" << endl;
        cout << "Model : Velar" << endl << "Color : Green" << endl << "Car Seats : 5 Seats" << endl << "Maximum Speed : 220 Km/h" << endl;
        cout << "Advance Price : 800K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: Range Rover (Velar)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    case 9: {
        int advancePric = 900, carrentperday = 600, decide;
        system("PAUSE");
        system("CLS");
        cout << "-----------------------------You Have Selected - BMW-----------------------------" << endl;
        cout << "Model : X5" << endl << "Color : Grey" << endl << "Car Seats : 5 Seats" << endl << "Maximum Speed : 250 Km/h" << endl;
        cout << "Advance Price : 900K" << endl;
        cout << "\nAre You Sure you want to rent this Car? (press 1 for yes / press 2 to exit): ";
        cin >> decide;

        if (decide == 1) {
            cout << "Enter Your Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Your National ID: "; cin >> cnic;
            cout << "How many days you want to rent this car: "; cin >> rentdays;
            cout << "Advance Amount: "; cin >> adv;

            if (adv >= advancePric) {
                rentdays *= carrentperday;
                totalfee = rentdays + adv;
                system("CLS");
                cout << "Process has been done successfully!!" << endl;
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	| Invoice No. :" << "------------------|" << setw(15) << "#Cnb81353" << "  |" << endl;
                cout << "\t\t	| Customer Name:" << "-----------------|" << setw(15) << name << "  |" << endl;
                cout << "\t\t	| Customer National ID : " << "--------|" << setw(15) << cnic << "  |" << endl;
                cout << "\t\t	| Advance Amount    :" << "------------|" << setw(15) << adv << "  | " << endl;
                cout << "\t\t	| Rental Amount :" << "----------------|" << setw(15) << rentdays << "  |" << endl;
                cout << "\t\t	| miscellaneous charges :" << "--------|" << setw(15) << "0" << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\n";
                cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(15) << totalfee << "  |" << endl;
                cout << "\t\t	 ________________________________________________________" << endl;
                cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
                cout << "\t\t	 require an authorised signture #" << endl;
                cout << " " << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                cout << "\t\t	You are advised to pay up the amount before due date." << endl;
                cout << "\t\t	Otherwise penelty fee will be applied" << endl;
                cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
                fstream new_file;
                new_file.open("Details.txt", ios::app);
                new_file << "Name: " << name << "\nCNIC: " << cnic << "\nCar: BMW (X5)\nAdvance Amount: " << adv << "\nRent: " << rentdays << "\nTotal Fee: " << totalfee << "\n---------------------------\n";
                new_file.close();
            }
            else {
                cout << "You have entered less Advance Amount. Please enter equal or above amount." << endl;
            }
        }
        break;
    }
    default: {
        system("PAUSE");
        system("CLS");
        cout << "You have entered a wrong number." << endl;
    }
    }
}

int login() {
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t HARIS AND KATIB CAR RENTAL SYSTEM";
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
    ch = _getch();
    while (ch != 13) {  //character 13 is enter
        pass = pass + ch;
        cout << '*';
        ch = _getch();
    }
    if (pass == "12345") {
        cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
        system("PAUSE");
        system("CLS");
        return 1;
    }
    else {
        cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
        system("PAUSE");
        system("CLS");
        return 0;
    }
}

int main() {


    system("Color EF");


    cout << "\033[34m";

    int flag = 0;
    while (flag == 0) {
        flag = login();
    }
    int choice;
    while (1) {
        cout << "\n\n\t\t\t\t\t-------- HARIS AND KATIB CAR RENTAL SYSTEM--------\n";
        cout << "\t\t\t\t\t1. Rent a Car\n";
        cout << "\t\t\t\t\t2. Display All Rented Cars\n";
        cout << "\t\t\t\t\t3. Exit\n";
        cout << "\t\t\t\t\tPlease Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            menu();
            break;
        case 2:
            displayRentedCars();
            break;
        case 3:
            cout << "Exiting system. Thank you!";
            exit(0);
        default:
            cout << "Invalid choice. Please select again.";

        }
    }
    cout << "\033[0m";
    return 0;
}
