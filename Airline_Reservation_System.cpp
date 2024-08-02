#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainmenu();

class Management
{
public:
    Management()
    {
        mainmenu();
    }
};

class Detail
{
public:
    static string gender, name;
    static int cID;
    double phone_no;
    int age;
    string address;
    char arr[100];

    void information()
    {
        cout << "Enter the Customer ID: ";
        cin >> cID;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Age: ";
        cin >> age;
        cout << "Enter the Phone no.: ";
        cin >> phone_no;
        cout << "Enter the Address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Enter the Gender: ";
        cin >> gender;
        cout << endl;
        cout << "Your Details Stored Successfully!" << endl
             << endl;
    }
};

int Detail::cID;
string Detail::gender;
string Detail::name;

class Registration
{
public:
    static int choice;
    static float charges;
    int choice1;
    int back;

    void flights()
    {
        string flights[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
        cout << "___________Welcome to the Airlines!_____________" << endl
             << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << ". " << flights[i] << endl;
        }
        cout << endl;
        cout << "Press the no. of your country to book the flight: ";
        cin >> choice;
        cout << endl;
        cout << "Following are the Flights." << endl
             << endl;

        switch (choice)
        {
        case 1:

            cout << "_____________Welcome to Dubai Emirates_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.DUB - 498" << endl;
            cout << "\t 7/8/2024 8:00AM 10hrs Rs. 14000" << endl;
            cout << "2.DUB - 538" << endl;
            cout << "\t 8/8/2024 9:00AM 11hrs Rs. 13000" << endl;
            cout << "3.DUB - 658" << endl;
            cout << "\t 1/8/2024 3:40PM 11hrs Rs. 15000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {

                charges = 14000;
                cout << "You have Successfully Booked the Flight DUB - 498" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 13000;
                cout << "You have Successfully Booked the Flight DUB - 538" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 15000;
                cout << "You have Successfully Booked the Flight DUB - 658" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        case 2:
            cout << "_____________Welcome to Canada Airlines_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.CA - 328" << endl;
            cout << "\t 5/8/2024 1:00AM 29hrs Rs. 29000" << endl;
            cout << "2.CA - 593" << endl;
            cout << "\t 9/8/2024 9:40AM 31hrs Rs. 28000" << endl;
            cout << "3.CA - 891" << endl;
            cout << "\t 1/8/2024 7:20PM 30hrs Rs. 35000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {
                charges = 29000;
                cout << "You have Successfully Booked the Flight CA - 328" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 28000;
                cout << "You have Successfully Booked the Flight CA - 593" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 35000;
                cout << "You have Successfully Booked the Flight CA - 891" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        case 3:
            cout << "_____________Welcome to UK Airways_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.UK - 638" << endl;
            cout << "\t 12/8/2024 1:30PM 14hrs Rs. 44000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {
                charges = 44000;
                cout << "You have Successfully Booked the Flight UK - 638" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        case 4:

            cout << "_____________Welcome to US Airways_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.US - 567" << endl;
            cout << "\t 7/8/2024 10:00AM 24hrs Rs. 24000" << endl;
            cout << "2.US - 787" << endl;
            cout << "\t 11/8/2024 8:40PM 24hrs Rs. 25000" << endl;
            cout << "3.US - 528" << endl;
            cout << "\t 14/8/2024 3:20PM 25hrs Rs. 21000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {
                charges = 24000;
                cout << "You have Successfully Booked the Flight US - 567" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 25000;
                cout << "You have Successfully Booked the Flight US - 787" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 21000;
                cout << "You have Successfully Booked the Flight US - 528" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        case 5:
            cout << "_____________Welcome to Australia Airways_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.AS - 667" << endl;
            cout << "\t 8/8/2024 11:30AM 24hrs Rs. 44000" << endl;
            cout << "2.AS - 627" << endl;
            cout << "\t 12/8/2024 7:40PM 25hrs Rs. 39000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {
                charges = 44000;
                cout << "You have Successfully Booked the Flight AS - 667" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 39000;
                cout << "You have Successfully Booked the Flight AS - 627" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        case 6:
            cout << "_____________Welcome to European Airlines_____________" << endl
                 << endl;
            cout << "Your Comfort is our Priority. Enjoy the Journey!" << endl
                 << endl;
            cout << "1.EU - 654" << endl;
            cout << "\t 5/8/2024 11:00AM 18hrs Rs. 36000" << endl;
            cout << "2.EU - 868" << endl;
            cout << "\t 7/8/2024 1:20PM 19hrs Rs. 37000" << endl;
            cout << "3.EU - 569" << endl;
            cout << "\t 8/8/2024 3:20PM 18hrs Rs. 31000" << endl;
            cout << "4.EU - 468" << endl;
            cout << "\t 13/8/2024 9:20PM 20hrs Rs. 34000" << endl;
            cout << endl;
            cout << "Select the Flight you want to book by entering the no.: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 1)
            {
                charges = 36000;
                cout << "You have Successfully Booked the Flight EU - 654" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 37000;
                cout << "You have Successfully Booked the Flight EU - 868" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 31000;
                cout << "You have Successfully Booked the Flight EU - 569" << endl;
            }
            else if (choice1 == 4)
            {
                charges = 34000;
                cout << "You have Successfully Booked the Flight EU - 468" << endl;
            }
            else
            {
                cout << "Invalid Input, Returning to Main Menu" << endl;
                mainmenu();
            }
            break;
        default:
            cout << "Invalid Input, Returning to Main Menu" << endl;
            mainmenu();
            break;
        }
        cout << endl;
        cout << "Press any key to go back to the main menu: ";
        cin >> back;
        if (back == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, public Detail
{
public:
    void bill()
    {
        ofstream outf("records.txt");
        {
            outf << endl;
            outf << "___________XYZ Airlines_____________" << endl
                 << endl;
            outf << "____________Ticket__________________" << endl
                 << endl;

            outf << "Customer ID: " << Detail::cID << endl;
            outf << "Customer Name: " << Detail::name << endl;
            outf << "Customer Gender: " << Detail::gender << endl
                 << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (Registration::choice == 1)
            {
                outf << "Destination: Dubai" << endl;
            }
            else if (Registration::choice == 2)
            {
                outf << "Destination: Canada" << endl;
            }
            else if (Registration::choice == 3)
            {
                outf << "Destination: UK" << endl;
            }
            else if (Registration::choice == 4)
            {
                outf << "Destination: USA" << endl;
            }
            else if (Registration::choice == 5)
            {
                outf << "Destination: Australia" << endl;
            }
            else if (Registration::choice == 6)
            {
                outf << "Destination: Europe" << endl;
            }

            outf << "Flight cost: " << Registration::charges << endl;
        }
        outf.close();
    }

    void dispbill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File Error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainmenu()
{
    int lchoice, schoice;
    int back;

    cout << endl;
    cout << "\t              Welcome to XYZ Airlines          " << endl
         << endl;

    cout << "\t __________________Main Menu____________________" << endl
         << endl;
    cout << "\t ______________________________________________" << endl;
    cout << "\t|\t                                       |" << endl;

    cout << "\t|\t Press 1 for adding Customer Detail    |" << endl;
    cout << "\t|\t Press 2 for Flight Registration       |" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges        |" << endl;
    cout << "\t|\t Press 4 for Exit                      |" << endl;
    cout << "\t|\t                                       |" << endl;
    cout << "\t|______________________________________________|" << endl;

    cout << endl;
    cout << "Enter the choice: ";
    cin >> lchoice;

    Detail d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
        cout << endl;
        cout << "_____________Customers_____________" << endl
             << endl;
        d.information();
        cout << "Press any key to go back to Main menu: ";
        cin >> back;
        if (back == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
        break;
    case 2:
        cout << endl;
        cout << "__________Book a Flight using this System___________" << endl
             << endl;
        r.flights();
        break;
    case 3:
        cout << endl;
        cout << "____________Get Your Ticket_____________" << endl
             << endl;
        t.bill();
        cout << "Your ticket is printed, you can collect it" << endl
             << endl;
        cout << "Press 1 to Display your ticket ";

        cin >> back;
        if (back == 1)
        {
            t.dispbill();
            cout << "Press any key to go back to Main menu: ";
            cin >> back;
            if (back == 1)
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
        }
        else
        {
            mainmenu();
        }
        break;
    case 4:
        cout << "\n\n\t_____________Thank You!_____________" << endl;
        break;
    default:
        cout << "Invalid Input, Please try again!" << endl;
        mainmenu();
        break;
    }
}

int main()
{
    Management Mobj;
    return 0;
}