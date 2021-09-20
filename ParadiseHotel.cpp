#include <iostream>
#include <iomanip>

using namespace std;

void GuestIdentity(string livAdd, string vinNum, string emailAdd, int socSecNum);

int main()
{
    string livAdd;
    string vinNum;
    string emailAdd;
    int socSecNum;
    GuestIdentity(livAdd, vinNum, emailAdd, socSecNum);
}

void GuestIdentity(string livAdd, string vinNum, string emailAdd, int socSecNum){
    cout << "Enter your home address: " << endl;
    cin >> livAdd;
    getline(cin, livAdd);

    cout << "Enter your Vehicle Identification Number: " << endl;
    cin >> vinNum;
    getline(cin, vinNum);

    cout << "Enter your email address: " << endl;
    cin >> emailAdd;
    getline(cin, emailAdd);

    cout << "Enter your social security number: " << endl;
    cin >> socSecNum;
    getline(cin, socSecNum);

    cout << setw(20) << "Home Address: " << livAdd << endl;
    cout << "VIN Number: " << vinNum << endl;
    cout << "Email Address: " << emailAdd <<endl;
    cout << "Social Security Number: " << socSecNum << endl;
}
