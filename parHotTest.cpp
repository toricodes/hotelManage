#include <iostream>

using namespace std;
void Name(string fName, string mName, string lName);
//void GuestIdentity(string livAdd, string phnNum, string vinNum, string emailAdd, string socSecNum);

int main()
{
    string fName;
    string mName;
    string lName;
    Name(fName, mName, lName);

    //string livAdd,
    //string phnNumber;
    //string vinNum;
    //string emailAdd;
    //string socSecNum;
}

void Name(string fName, string mName, string lName)
{
    cout << "Enter your first name: " << endl;
    cin >> fName;

    cout << "Enter your middle name " << endl;
    cin >> mName;

    cout << "Enter your last name: " << endl;
    cin >> lName;

    cout << fName << " " << mName << " " << lName << endl;
}

//void GuestIdentity(string livAdd, string phnNum, string vinNum, string emailAdd, string socSecNum);
