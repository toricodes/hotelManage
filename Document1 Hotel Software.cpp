GuestLogin(){
	username
	password
	PrivateKey
	PublicKey
}

void Guest(){
	string Name;
	long phnNum;
	char emailAddress;
	
}

void getData()
void printData()
void 

void priceOfStay(){
	double cost;
	double salesTax;
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>


struct Guest {
        string GuestInfoType firstName;
        GuestInfoType GuestInfo;
        string lastName;
        char ( or string) homeAddress;
        long phnNumber;
        char emailAddress;
        int familySize;
        char vinNumber;
        int lengthOfStay;
        string roomType;
        int roomNumber;

 } ;


using namespace std;

 void  GuestInfo(string, int);
 void GuestLogin(string);
 void ReservInfo(string);
 //void rmSelect();
 //void availRms();
 //void priceOfHotelStay();
 void credCardInfo(string);
 void CheckOut(string, int);

int main()
{
    string Guest.firstName = "";
    cin >> Guest.firstName;
    getline(cin, Guest.firstName);

    string Guest.lastName = "";
    cin >> Guest.lastName;
    getline(cin, Guest.lastName);

    char Guest.homeAddress = [50];
    cin >> Guest.homeAddress;
    getline(cin, Guest.homeAddress);

    int Guest.cellNumber = "";
    cin >> Guest.phnNumber;
    getline(cin, Guest.phnNumber);

    char Guest.emailAddress = [50];
    cin >> Guest.emailAddress;
    getline(cin, Guest.emailAddress);

    int Guest.familySize = "";
    cin >> Guest.familySize;
    getline(cin, Guest.familySize);

    char Guest.vinNumber = [17];
    cin >> Guest.vinNumber;
    getline(cin, Guest.vinNumber);

    int Guest.lengthOfStay = "";
    cin >> Guest.lengthOfStay;
    getline(cin, Guest.lengthOfStay);

    int Guest.roomNumber = "";
    cin >> Guest.roomNumber;
    getline(cin, Guest.roomNumber);

    int Guest.roomType = "";
    cin >> Guest.roomType;
    getline(cin, Guest.roomType);

    cout << " ================================ WELCOME TO RICH PARADISE HOTEL ======================================= " << endl;
    cout << "                     Enter your personal information to schedule a reservation! .....................     "  << endl;
    cout << " ======================================================================================================== " << endl;
    cout << " ======================================================================================================== " << endl;
    cout << " ======================================================================================================== " << endl;
    cout << " ======================================================================================================== " << endl;

    cout << " <<<<<<<<<<<<<<<< First Name: >>>>>>>>>>>>>>>>>>>>>>> " << Guest.firstName << endl;
    cout << " <<<<<<<<<<<<<<<< Last Name:  >>>>>>>>>>>>>>>>>>>>>>> " << Guest.lastName << endl;
    cout << " <<<<<<<<<<<<<<<< Home Address: >>>>>>>>>>>>>>>>>>>>> " << Guest.homeAddress << endl;
    cout << " <<<<<<<<<<<<<<<<  Cell Phone: >>>>>>>>>>>>>>>>>>>>>> " << phnNumber << endl;
    cout << " <<<<<<<<<<<<<<<< Email Address: >>>>>>>>>>>>>>>>>>>> " << emailAddress << endl;
    cout << " <<<<<<<<<<<<<<<< Family Size: >>>>>>>>>>>>>>>>>>>>>> " << familySize << endl;
    cout << " <<<<<<<<<< Vehicle Identification Number: >>>>>>>>>> " << vinNumber << endl;
    cout << " <<<<<<<<<<<<<<< Duration of Hotel Stay: >>>>>>>>>>>> " << lengthOfStay << " days " << endl;
    cout << " <<<<<<<<<<<<<<< Room Type >>>>>>>>>>>>>>>>>>>>>>>>>> " << roomType << endl;
    cout << " <<<<<<<<<<<<<<<<< Room Number >>>>>>>>>>>>>>>>>>>>>> " << roomNumber << endl;
	
	void  GuestInfo();
 	void GuestLogin();
 	void ReservInfo();
 	void rmSelect();
 	void availRms();
 	void priceOfHotelStay();
 	void credCardInfo();
 	void CheckOut();	
	
	
}





 	void  GuestInfo(){
	
		string GuestFirstName;
		string GuestLastName;
		
		string GuestHomeAddress;
		string GuestPhnNumber;
		string GuestEmailAddress;
		int NumberOfGuests;
		string GuestVinNumber;
		int GuestLengthOfStay;
	}
 	void GuestLogin(){
		string username;
		string password;
		string publicKey;
		string privateKey;
	}
 	void ReservInfo(){
		string checkInTime;
		string checkOutTime;
		string RoomNumber;
		string RoomType;
		string FloorNumber;
			
	}
 	void rmSelect()
		/// have the program scan for available rooms ////
		string RmOfChoice;
 	void availRms(){
		/// binary search or some other data structure, I'll figure it out ///
	}
 	void priceOfHotelStay(){
		//////////////////
		
		/////////////////
	}
 	void credCardInfo(){
		string GuestFirstName;
		string GuestLastName;
		string creditCardNum;
		string expirationDate;
		string securityCode;
		string billingAddress;
	
	}
 	void CheckOut(){
	cout <<	GuestInfo() << endl;
 	cout <<	ReservInfo() << endl;
 	cout <<	rmSelect() << endl;
 	cout <<	priceOfHotelStay() << endl;
 	cout <<	credCardInfo() << endl;
	}
	
	void getData(){
		// export excel spreadsheet or whatever.......... some kind of function does this. I know it...........
		// read the data in the excel spreadsheet or something like that //////////////
	}
void printData(){
	cout << getData() << endl;
}


----------- START OVER, REDO ----------------------
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

void GuestLogin(string userN, string passW, string pubK, string privK)
void GuestName(string FirName, string LasName)
void GuestAddInfo(string livAdd, string phnNum, string vinNum)
void GuestIdentity(string emailAdd, string socSecNum)
void RsrvInfo(string lenOfStay, string checkInTime,string checkOutTime, string RmNum, string RmType, string FloorNum)

int main()
{
	GuestLogin(userN, passW, pubK, privK)
	GuestName(firName, midName,lasName)
	GuestIdentity(livAdd, phnNum, vinNum, emailAdd, socSecNum)
	GuestRsrvInfo(lenOfStay, checkInTime, checkOutTime, RmNum, RmType, FlrNum)
}

void GuestLogin(string userN, string passW, string pubK, string privK){
	
}


void GuestName(string FirName, string LasName){
	
}


void GuestAddInfo(string livAdd, string phnNum, string vinNum){
	
}



void GuestIdentity(string emailAdd, string socSecNum){
	
}
void RsrvInfo(string lenOfStay, string checkInTime,string checkOutTime, string RmNum, string RmType, string FloorNum){
	
}

/////////// FIRST FUNCTION //////////////
#include <iostream>

using namespace std;
void Name(string fName, string mName, string lName);

int main()
{
    string fName;
    string mName;
    string lName;
    Name(fName, mName, lName);
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


