#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include<vector>
#include<chrono>
#include<limits>
using namespace std;

class Date {      // 1st class
protected:
	int day;
	int month;
	int year;

public:
	void setday(int d) {
		day = d;
	}

	int getday() const {
		return day;
	}

	void setmonth(int m) {
		month = m;
	}

	int getmonth() const {
		return month;
	}

	void setyear(int y) {
		year = y;
	}

	int getyear() const {
		return year;
	}
	void setcompleteDate()
	{
		cout << "\nDay: "; cin >> day;  cout << "\nMonth: "; cin >> month; cout << "\nYear: "; cin >> year;
	}
	void getcompleteDate()
	{
		cout << "\n" << day << "/" << month << "/" << year;
	}

};
class Time {    // 2nd class
protected:
	int hours;
	int minutes;
	int seconds;

public:
	void sethours(int h) {
		hours = h;
	}

	int gethours() const {
		return hours;
	}

	void setminutes(int m) {
		minutes = m;
	}

	int getminutes() const {
		return minutes;
	}

	void setseconds(int s) {
		seconds = s;
	}

	int getseconds() const {
		return seconds;
	}
	void setcompleteTime()
	{
		cout << "\nHour: "; cin >> hours;  cout << "\nMinutes: "; cin >> minutes; cout << "\nSeconds: "; cin >> seconds;
	}
	void getcompleteTime()
	{
		cout << "\n" << hours << ":" << minutes << ":" << seconds;
	}
};

class Disaster {                  // 3rd major Abstract class
public:
	string type;
	string location;
	int severity;
	int life_loss;
	double property_loss;
	Date date;
	Time time;
	string pessengername;
	char username[20];
	char uusername[20];
	char pin[8];
	char password[8];
	string fname, lname; char gender;
	string cpass;
	int yearofbirth;
	char cnic[14];
	string city;
	string address;
	string p;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
public:

	/*	virtual void setType(string newType) {
			type = newType;
		}*/

	void setLocation(string); /*{
		location = newLocation;
	}*/

	void setSeverity(float); /*{
	   severity = newSeverity;
   }*/

	void setLifeLoss(int); /*{
	   life_loss = newLifeLoss;
   }*/

	void setPropertyLoss(double); /*{
	   property_loss = newPropertyLoss;
   }*/

	void setDate(Date); /*{
	   date = newDate;
   }*/

	void setTime(Time); /*{
	   time = newTime;
   }*/


   // virtual string getType() const = 0;

	void getLocation();

	void getSeverity();

	void getLifeLoss();

	void getPropertyLoss();

	void getDate();

	void getTime();

	void logo() {
		SetConsoleTextAttribute(h, 12);
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<****<-D-I-S-A-S-T-E-R>***>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<***|<<<<<<<>>>>>>>|**>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<***<-M-A-N-G-E-M-E-N-T>***>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<******<-S-Y-S-T-E-M->******>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	}
	void detail() {
		SetConsoleTextAttribute(h, 12);
        cout<<"\nSignup Information:-------"<<endl;
        cout<<endl;
		cout << "\tEnter First Name : ";
		SetConsoleTextAttribute(h, 12);
		cin >> fname;
		cout << endl;
		cout << "\tLast Name : ";
		cin >> lname;
		cout << endl;
		cout << "\tEnter Gender M/F : ";
		 while (true) {
        cout << "\tEnter Gender M/F : ";
        cin >> gender;

        // Convert to uppercase for case-insensitive comparison
        gender = toupper(gender);

        if (gender == 'M' || gender == 'F') {
            break; // Exit the loop if the input is 'M' or 'F'
        } else {
            cout << "Please re-enter the correct gender (M/F)." << endl;
        }
    }
		cout << endl;
		bool validInput = false;
    int currentYear = chrono::system_clock::to_time_t(chrono::system_clock::now());
    
    while (!validInput) {
        cout << "Enter your year of birth (at most 4 digits): ";
        cin >> yearofbirth;

        if (cin.fail() || yearofbirth < 0 || yearofbirth > 9999 || yearofbirth >= currentYear) {
            cout << "Please re-enter the year of birth. You entered an invalid date." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
		cout << endl;
		cout << "\tEnter CNIC NUMBER : ";
		for (int i = 0; i < 14; i++)
		{

			cnic[i] = _getche();
		

		}
		cout << endl;
		cnic[14] = '\0';
		cout << endl;
		cout << "\tEnter City : ";
		cin >> city;
		cout << endl;
		cout << "\tEnter Address : ";
		cin >> address;
		cout << endl;
		cout << "\nDeveloped by:-- 1- Muhammad Ahsan Waqar(049)  2- Syed Obaid Ali Shah(013)  3- Hashir Sohaib(098)";

		cout << "\n\n\n";

		system("pause");
		system("cls");

	}
	void display() {
		SetConsoleTextAttribute(h, 12);
		
		Sleep(250); cout<<"Here is your Information that you provided us... Please check...\n\n";
		Sleep(250); cout << "The Full Name is : " << fname << " " << lname << endl;
		Sleep(250); cout << "Gender is : " << gender << endl;
		Sleep(250); cout << "Year of Birth is : " << yearofbirth << endl;
		Sleep(250); cout << "ID Card Number is : " << cnic << endl;
		Sleep(250); cout << "Your City is : " << city << endl;
		Sleep(250); cout << "Address is : " << address << endl;
		cout << "\n Developed under the supervision of Mam Nabia Khalid(Object Oriented Programming) on 12 June,2023...";
		cout << "\n Updated under the supervision of Mam Maryam Aslam(Data Structures and Algorithms) on 21 December,2023...";

		cout << "\n\n\n\n";

	}


};
class user :public Disaster {
public:

	void login()
	{
		ifstream inFile;
	ree:
		system("cls");
		logo();
		inFile.open("users.txt", ios::in);
		cout << "Enter your username: ";
		cin >> uusername;
		cout << "Enter your password: ";
		for (int i = 0; i < 8; i++)
		{

			pin[i] = _getch();
			cout << "*";

		}
		cout << endl;
		pin[8] = '\0';
		char u[20];
		char p[8];
		while (inFile >> u >> p) {
			if (strcmp(uusername, u) == 0 && strcmp(pin, p) == 0) {
				cout << "LOGIN SUCCESSFULLY" << endl;

			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tUsername or Password is Incorrect";
				system("CLS");

				goto ree;
			}
			inFile.close();
		}


	}

	void getusernamepassword() {
	user:
		ofstream file;
		file.open("users.txt", ios::out);
		SetConsoleTextAttribute(h, 12);
        cout<<"\nPRovide your credentials for your Sign up..\n\n";
        
		cout << "Enter Username : ";
		SetConsoleTextAttribute(h, 12);
		cin >> username;
		file << username << endl;

		cout << endl;
		cout << "Enter Password(8 characters only) : ";
		for (int i = 0; i < 8; i++)
		{

			pin[i] = _getch();
			cout << "*";

		}
		pin[8] = '\0';
		cpass = pin;

		cout << endl;

		cout << "Enter Confirm Password : ";
		for (int i = 0; i < 8; i++)
		{
			password[i] = _getch();
			cout << "*";
			file << password[i];
		}

		password[8] = '\0';
		p = password;
		if (cpass == p) {
			cout << endl << "Your Password is Same " << endl;
			cout << "                                        You Have Successfully Created Your Account . " << endl;


			file.close();
			_getch();
		re:
			system("cls");
			logo();
			ifstream infile;
			infile.open("users.txt");

			cout << "\t\t\t\t\t\t\tSIGN-IN" << endl;
			cout << "\tEnter Username : ";
			cin >> uusername;
			cout << "\tEnter Password : ";
			for (int i = 0; i < 8; i++)
			{

				pin[i] = _getch();
				cout << "*";

			}
			pin[8] = '\0';


			cout << endl;
			char fn[20], fp[8];
			infile >> fn >> fp;
			if (infile.good()) {
				if (strcmp(uusername, fn) == 0 && strcmp(pin, fp) == 0) {
					cout << "LOGIN SUCCESSFULLY";

				}
				else {
					cout << "\n\t\t\tINCORRECT PASSWORD";
					cout << endl;
					goto re;
				}

				infile.close();
			}
		}
		else {
			cout << endl << "Incorrect Password!" << endl;
			cout << "Enter Username and Password Again ! " << endl;
			goto user;
			_getch();
			system("cls");


		}
		system("cls");


	}
	void createanaccount()
	{
	account:
		string choice;

		logo();

		cout << endl;
		detail();
		cout << endl;
		display();
		SetConsoleTextAttribute(h, 12);


		cout << "Are You Sure You Want to Continue With This Detail (Y/N) : ";
		SetConsoleTextAttribute(h, 12);

		cin >> choice;
		if (choice == "Y" || choice == "y") {
			system("cls");
			logo();
			getusernamepassword();
		}
		else {
			system("cls");
			goto account;
		}


	}



	void Login() {
		logo();
		string choice;
		SetConsoleTextAttribute(h, 12);

		system("cls");
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              1.Facebook                                        |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              2.Gmail                                           |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              3.Create an account                               |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              4.Already have an account                         |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		cout << "\n\t\t\t ENTER CHOICE : ";
		SetConsoleTextAttribute(h, 12);
		cin >> choice;
		if (choice == "1") {
			system("cls");
			logo();
			cout << endl;
			cout << "Enter the username : ";
			cin >> username;
			cout << "Enter Password : ";
			for (int i = 0; i < 8; i++)
			{

				pin[i] = _getch();
				cout << "*";
			}
			pin[8] = '\0';

		}
		else if (choice == "2") {
			system("cls");
			logo();
			cout << endl;
			cout << "Enter Gmail Account : ";
			cin >> username;
			cout << "Enter Password : ";
			for (int i = 0; i < 8; i++)
			{

				pin[i] = _getch();
				cout << "*";
			}
			pin[8] = '\0';

		}
		else if (choice == "3") {
			system("cls");
			createanaccount();

		}
		else if (choice == "4") {
			login();

		}
		system("cls");


	}
	void customerdetails() {};
	void TICKET() {};

};



class Earthquake : public Disaster {   // 4th one Inherited from disaster
protected:
	string depth; string magnitude; string earthno;
public:
	void setDepth(string dpth)
	{
		depth = dpth;
	}
	string getDepth()
	{
		return depth;
	}
	void setMagnitude(string mgntude)
	{
		magnitude = mgntude;
	}
	string getMagnitude()
	{
		return magnitude;
	}
	void setLocation(string locatequke)
	{

		location = locatequke;
	}


	void getLocation()
	{
		cout << location;
	}
	void setSeverity(float svrtyquke)
	{

		severity = svrtyquke;
	}
	void getSeverity()
	{
		cout << severity;
	}
	void setLifeLoss(int lifelossEarth)
	{

		life_loss = lifelossEarth;
	}
	void getLifeLoss()
	{
		cout << life_loss;
	}
	void setPropertyLoss(double propertylossEarth)
	{

		property_loss = propertylossEarth;
	}
	void setDate()
	{
		date.setcompleteDate();
	}
	void getDate()
	{

		date.getcompleteDate();
	}
	void setEarthRecord()
	{
		cout << "\nEnter the Earthquake Record no: ";
		cin >> earthno;
	}
	string getEarthRecord()
	{
		return earthno;
	}
	void setTime()
	{
		time.setcompleteTime();
	}
	void getTime() {

		time.getcompleteTime();
	}
	void setCompleteEarthquake()
	{
		setEarthRecord();
		cout << "\nEnter the Depth: ";
		cin >> depth;
		cout << "\nEnter the Magnitude: ";
		cin >> magnitude;
		cout << "\nEnter the Location: ";
		cin >> location;
		cout << "\nEnter the Severity: ";
		cin >> severity;
		cout << "\nEnter the Life Loss: ";
		cin >> life_loss;
		cout << "\nEnter the Property Loss: ";
		cin >> property_loss;
		date.setcompleteDate();
		time.setcompleteTime();
		
	}
	void getCompleteEarthquake()
	{
		cout << "\nRecord number of EarthQuake:--- " << getEarthRecord();
		cout << "\nEarthquake Record no...:" << earthno;
		cout << "\nDepth: " << depth;
		cout << "\nMagnitude: " << magnitude;
		cout << "\nLocation: " << location;
		cout << "\nSeverity: " << severity;
		cout << "\nLife Loss: " << life_loss;
		cout << "\nProperty Loss: " << property_loss;
		date.getcompleteDate();
		time.getcompleteTime();
		
	}


};
class Flood : public Disaster {     
protected:
	string waterlevel; string floodno;
public:
	void setWaterlevel(string wtrlvl)
	{
		waterlevel = wtrlvl;
	}
	string getWaterlevel()
	{
		return waterlevel;
	}
	void setLocation(string locatequke)
	{

		location = locatequke;
	}


	void getLocation()
	{
		cout << location;
	}
	void setSeverity(float svrtyquke)
	{

		severity = svrtyquke;
	}
	void getSeverity()
	{
		cout << severity;
	}
	void setLifeLoss(int lifelossEarth)
	{

		life_loss = lifelossEarth;
	}
	void getLifeLoss()
	{
		cout << life_loss;
	}
	void setPropertyLoss(double propertylossEarth)
	{

		property_loss = propertylossEarth;
	}
	void setFloodRecord()
	{
		cout << "\nEnter the Flood Record no: ";
		cin >> floodno;
	}
	string getFloodRecord()
	{
		return floodno;
	}
	void setDate()
	{
		date.setcompleteDate();
	}
	void getDate()
	{

		date.getcompleteDate();
	}

	void setTime()
	{
		time.setcompleteTime();
	}
	void getTime() {

		time.getcompleteTime();
	}
	void setCompleteFlood()
	{
		setFloodRecord();
		cout << "\nEnter the Water Level: ";
		cin >> waterlevel;
		cout << "\nEnter the Location: ";
		cin >> location;
		cout << "\nEnter the Severity: ";
		cin >> severity;
		cout << "\nEnter the Life Loss: ";
		cin >> life_loss;
		cout << "\nEnter the Property Loss: ";
		cin >> property_loss;
		date.setcompleteDate();
		time.setcompleteTime();
		/*
		cout<<"\n"
		cout<<"\n"
		cout<<"\n"
		*/
	}
	void getCompleteFlood()
	{
		cout << "\nRecord Number of Flood:--- " << getFloodRecord();
		cout << "\nWater Level: " << waterlevel;
		cout << "\nLocation: " << location;
		cout << "\nSeverity: " << severity;
		cout << "\nLife Loss: " << life_loss;
		cout << "\nProperty Loss: " << property_loss;
		date.getcompleteDate();
		time.getcompleteTime();
		/*
		cout<<"\n"
		cout<<"\n"
		cout<<"\n"
		*/
	}

};
class Volcano : public Disaster {    // 6th class child
protected:
	string temprature; string volcanono;
public:
	void setTemprature(string temprtre)
	{
		temprature = temprtre;
	}
	string getTemprature()
	{
		return temprature;
	}
	void setLocation(string locatequke)
	{

		location = locatequke;
	}


	void getLocation()
	{
		cout << location;
	}
	void setSeverity(float svrtyquke)
	{

		severity = svrtyquke;
	}
	void getSeverity()
	{
		cout << severity;
	}
	void setLifeLoss(int lifelossEarth)
	{

		life_loss = lifelossEarth;
	}
	void getLifeLoss()
	{
		cout << life_loss;
	}
	void setPropertyLoss(double propertylossEarth)
	{

		property_loss = propertylossEarth;
	}
	void setVolcanoRecord()
	{
		cout << "\nEnter the Volcano Record no: ";
		cin >> volcanono;
	}
	string getVolcanoRecord()
	{
		return volcanono;
	}
	void setDate()
	{
		date.setcompleteDate();
	}
	void getDate()
	{

		date.getcompleteDate();
	}

	void setTime()
	{
		time.setcompleteTime();
	}
	void getTime() {

		time.getcompleteTime();
	}
	void setCompleteVolcano()
	{
		setVolcanoRecord();
		cout << "\nEnter the Temprature of Area: ";
		cin >> temprature;
		cout << "\nEnter the Location: ";
		cin >> location;
		cout << "\nEnter the Severity: ";
		cin >> severity;
		cout << "\nEnter the Life Loss: ";
		cin >> life_loss;
		cout << "\nEnter the Property Loss: ";
		cin >> property_loss;
		date.setcompleteDate();
		time.setcompleteTime();
	
	}
	void getCompleteVolcano()
	{
		cout << "\nRecord number of Volcano Disaster: " << getVolcanoRecord();
		cout << "\nArea Temprature: " << temprature;
		cout << "\nLocation: " << location;
		cout << "\nSeverity: " << severity;
		cout << "\nLife Loss: " << life_loss;
		cout << "\nProperty Loss: " << property_loss;
		date.getcompleteDate();
		time.getcompleteTime();
		
	}

};
class Tornado : public Disaster {   // 7th
protected:
	string airspeed; string tornadono;
public:
	void setAirspeed(string srspd)
	{
		airspeed = srspd;
	}
	string getAirspeed()
	{
		return airspeed;
	}
	void setLocation(string locatequke)
	{

		location = locatequke;
	}


	void getLocation()
	{
		cout << location;
	}
	void setSeverity(float svrtyquke)
	{

		severity = svrtyquke;
	}
	void getSeverity()
	{
		cout << severity;
	}
	void setLifeLoss(int lifelossEarth)
	{

		life_loss = lifelossEarth;
	}
	void getLifeLoss()
	{
		cout << life_loss;
	}
	void setPropertyLoss(double propertylossEarth)
	{

		property_loss = propertylossEarth;
	}
	void setTornadoRecord()
	{
		cout << "\nEnter the Tornado Record no: ";
		cin >> tornadono;
	}
	string getTornadoRecord()
	{
		return tornadono;
	}
	void setDate()
	{
		date.setcompleteDate();
	}
	void getDate()
	{

		date.getcompleteDate();
	}

	void setTime()
	{
		time.setcompleteTime();
	}
	
	void getTime() {

		time.getcompleteTime();
	}
	
	void setCompleteTornado()
	{
		setTornadoRecord();
		cout << "\nEnter the Air Speed: ";
		cin >> airspeed;
		cout << "\nEnter the Location: ";
		cin, location;
		cout << "\nEnter the Severity: ";
		cin >> severity;
		cout << "\nEnter the Life Loss: ";
		cin >> life_loss;
		cout << "\nEnter the Property Loss: ";
		cin >> property_loss;
		date.setcompleteDate();
		time.setcompleteTime();
		
	}
	void getCompleteTornado()
	{
		cout << "\nThe Record no of tornadono....:" << getTornadoRecord();
		cout << "\nAir speed: " << airspeed;
		cout << "\nLocation: " << location;
		cout << "\nSeverity: " << severity;
		cout << "\nLife Loss: " << life_loss;
		cout << "\nProperty Loss: " << property_loss;
		date.getcompleteDate();
		time.getcompleteTime();
		
	}



};


class EmergencyService {        //11th
protected:
	int personnel; int noofcamps;  int nooffooditems; int noofshelterhomes;
public:

	void setPersonnel(int prsnel)
	{
		personnel = prsnel;
	}
	int getPersonnel()
	{
		return personnel;
	}

	void setService()
	{
		system("CLS");
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<****<-D-I-S-A-S-T-E-R>***>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<***|<<<<<<<>>>>>>>|**>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<***<-M-A-N-G-E-M-E-N-T>***>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<******<-S-Y-S-T-E-M->******>>>>>>>" << endl;
		Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		
		Sleep(250); cout<<"\n\n\nNow enter the Data for emergency service";
		cout << "\nEnter the Personnel number of the Service Provider for these victims : ";
		cin >> personnel;
		cout << "\nEnter the number of camps provided to the victims: ";
		cin >> noofcamps;
		cout << "\nEnter the number of food items provided to the victims: ";
		cin >> nooffooditems;
		cout << "\nEnter the number of Shelter homes provided to the victims: ";
		cin >> noofcamps;


	}
	void getService()
	{
		cout << "\nPersonnel number: " << personnel;
		cout << "\nRhe number of camps provided to the victims: " << noofcamps;
		cout << "\nThe number of food items provided to the victims: " << nooffooditems;
		cout << "\nEnter the number of Shelter homes provided to the victims: " << noofcamps;


	}
};

void injuries() {
   
    Sleep(250);
    cout<<"\nWhat type of injury victims got during the disaster??? Enter your choice below from the given \n\n";
    
    Sleep(250);
    cout << "1. Cuts and lacerations" << endl;
    Sleep(250);
    cout << "2. Fractures" << endl;
    Sleep(250);
    cout << "3. Concussions" << endl;
    Sleep(250);
    cout << "4. Burns" << endl;
    Sleep(250);
    cout << "5. Crush injuries" << endl;
    Sleep(250);
    cout << "6. Sprains and strains" << endl;
    Sleep(250);
    cout << "7. Hypothermia" << endl;
    Sleep(250);
    cout << "8. Heatstroke" << endl;
    Sleep(250);
    cout << "9. Electrocution" << endl;
    Sleep(250);
    cout << "10. Smoke inhalation" << endl;
    Sleep(250);
    cout << "11. Drowning" << endl;
    Sleep(250);
    cout << "12. Traumatic brain injuries (TBI)" << endl;
    Sleep(250);
    cout << "13. Chemical burns" << endl;
    Sleep(250);
    cout << "14. Animal bites or stings" << endl;
    Sleep(250);
    cout << "15. Post-traumatic stress disorder (PTSD)" << endl;
    Sleep(250);
    cout << "16. Other Injuries" << endl;
}

class Victims : public EmergencyService, public Date {         //10th
protected:
	int victimno; string injurytype; string victiminitiallocation; string victimfinallocation; string disasterType; int city;
	vector<vector<string>> cityLocations; int injurech;
	string recordNumber;
public:
	Victims() {

		cityLocations = {
			   {"E-8", "F-10", "G-9", "G-10", "Parliament Area"},
			   {"Paragon City", "Gulberg III", "Faisal Town", "Saeed Colony", "Samanabad Town"},
			   {"Napier Quater", "Mithader", "Lyari", "Abidabad", "Machar Colony"},
			   {"Zehri Town", "Rehmat Colony", "Chiltan Housing Society", "Kuchlak", "Kolpur"},
			   {"Peshawar Cantonment", "University Town", "Doran Pur", "Shero Jahngi", "DHA Peshawar"}
		};
	}
	void setInjurytype(string injrytp)
	{
		injurytype = injrytp;
	}
	string getInjurytype()
	{
		return injurytype;
	}
	void setvictiminitiallocation()
	{
		cout << "\nCities:---";
		cout << "\n\n1- Islamabad";
		cout << "\n2- Lahore";
		cout << "\n3- Karachi";
		cout << "\n4- Quetta";
		cout << "\n5- Peshawar";
		cout << "\n\nEnter the city: ";
		cin >> city;

		if (city >= 1 && city <= cityLocations.size()) {
			int initiallochoice;
			cout << "\nThe locations in this city are:";

			for (int i = 0; i < cityLocations[city - 1].size(); ++i) {
				cout << "\n" << (i + 1) << "- " << cityLocations[city - 1][i];
			}

			cout << "\nSelect your initial location: ";
			cin >> initiallochoice;

			if (initiallochoice >= 1 && initiallochoice <= cityLocations[city - 1].size()) {
				victiminitiallocation = cityLocations[city - 1][initiallochoice - 1];
				cout << "\nThe initial location of the victims is: " << victiminitiallocation;
			}
			else {
				cout << "Invalid Location";
			}
		}
		else {
			cout << "Invalid City";
		}
	}

	void setvictimfinallocation()
	{


		int choice;
		cout << "\nWhere you want to shift victims in the following nearest Hospital of " << victiminitiallocation << "?";

		// Display hospital options based on the current victim initial location
		for (int i = 0; i < cityLocations[city - 1].size(); ++i)
		{
			cout << "\n" << (i + 1) << "- " << cityLocations[city - 1][i];
		}

		cout << "\n\nSelect the location where you want to shift the Victims: ";
		cin >> choice;

		if (choice >= 1 && choice <= cityLocations[city - 1].size())
		{
			victimfinallocation = cityLocations[city - 1][choice - 1];
			cout << "\nThe final location of the victims is: " << victimfinallocation;
		}
		else
		{
			cout << "\nInvalid location";
		}


	}
	void setVictimRecordNumber()
	{
		cout << "\n Enter the Victims record number in this file:-- ";
		cin >> recordNumber;
	}
	string getVictimRecordNumber()
	{
		return recordNumber;
	}
	void setVictimRecord()
	{

		Date::setcompleteDate();
		setVictimRecordNumber();
		cout << "\nEnter the number of victims: ";
		cin >> victimno;
		setvictiminitiallocation();
		setvictimfinallocation();
		//	cout << "\nEnter the final location of victims where they are shifted: ";
		//	cin >> victimfinallocation;
		injuries();
		cout << "\nEnter the option number here: ";
		cin >> injurech;
		  switch (injurech) {
        case 1:
            injurytype = "Cuts and lacerations";
            break;
        case 2:
            injurytype = "Fractures";
            break;
        case 3:
            injurytype = "Concussions";
            break;
        case 4:
            injurytype = "Burns";
            break;
        case 5:
            injurytype = "Crush injuries";
            break;
        case 6:
            injurytype = "Sprains and strains";
            break;
        case 7:
            injurytype = "Hypothermia";
            break;
        case 8:
            injurytype = "Heatstroke";
            break;
        case 9:
            injurytype = "Electrocution";
            break;
        case 10:
            injurytype = "Smoke inhalation";
            break;
        case 11:
            injurytype = "Drowning";
            break;
        case 12:
            injurytype = "Traumatic brain injuries (TBI)";
            break;
        case 13:
            injurytype = "Chemical burns";
            break;
        case 14:
            injurytype = "Animal bites or stings";
            break;
        case 15:
            injurytype = "Post-traumatic stress disorder (PTSD)";
            break;
        case 16:
            injurytype = "Other Injuries";
            break;
        default:
            injurytype = "Unknown Injury";
            break;
    }
		setService();

	}
	void getVictimRecord()
	{
		cout << "\nVictims Record number:--- " << getVictimRecordNumber();
		cout << "\nDisaster Type: " << disasterType;
		Date::getcompleteDate();
		cout << "\nRecord number:-- " << recordNumber;
		cout << "\nNumber of Victims: " << victimno;
		cout << "\nInitial Location of Victims: " << victiminitiallocation;
		cout << "\nFinal Location of Victims where they are shifted: " << victimfinallocation;
		cout << "\nInjury type received by the victims: " << injurytype;
		getService();
	}
	string getvictiminitiallocation()
	{
		return victiminitiallocation;
	}
	string getvictimfinallocation()
	{
		return victimfinallocation;
	}
};


// Hierarchies have completed 
// First global object declaration
fstream f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40,
f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80;
Earthquake earthIslamabad, earthLahore, earthKarachi, earthQuetta, earthPeshawar;
Flood floodIslamabad, floodLahore, floodKarachi, floodQuetta, floodPeshawar;
Volcano volcanoIslamabad, volcanoLahore, volcanoKarachi, volcanoQuetta, volcanoPeshawar;
Tornado tornadoIslamabad, tornadoLahore, tornadoKarachi, tornadoQuetta, tornadoPeshawar;
Victims victimEarthIslamabad, victimEarthLahore, victimEarthKarachi, victimEarthQuetta, victimEarthPeshawar, victimFloodIslamabad, victimFloodLahore, victimFloodKarachi, victimFloodQuetta, victimFloodPeshawar,
victimVolcanoIslamabad, victimVolcanoLahore, victimVolcanoKarachi, victimVolcanoQuetta, victimVolcanoPeshawar, victimTornadoIslamabad, victimTornadoLahore, victimTornadoKarachi, victimTornadoQuetta, victimTornadoPeshawar;
EmergencyService emrgncy;
//. Now we will define global functions and start our real working

void addIslamabadDisasterEarthQuakeRecord()
{

	char ch;                   // f1 for Islamabad Disaster Earthquake records
	f1.open("IslamabadDisasterEarthquake.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		earthIslamabad.setCompleteEarthquake();
		f1.write((char*)&earthIslamabad, sizeof(Earthquake));
		cout << "\nDo you want to add more records of Earthquake in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f1.close();
}
void addLahoreDisasterEarthQuakeRecord()
{

	char ch;                   // f2 for Lahore Disaster Earthquake records
	f2.open("LahoreDisasterEarthquake.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		earthLahore.setCompleteEarthquake();
		f2.write((char*)&earthLahore, sizeof(Earthquake));
		cout << "\nDo you want to add more records of Earthquake in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f2.close();
}
void addKarachiDisasterEarthQuakeRecord()
{

	char ch;                   // f3 for Karachi Disaster Earthquake records
	f3.open("KarachiDisasterEarthquake.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		earthKarachi.setCompleteEarthquake();
		f3.write((char*)&earthKarachi, sizeof(Earthquake));
		cout << "\nDo you want to add more records of Earthquake in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f3.close();
}
void addQuettaDisasterEarthQuakeRecord()
{

	char ch;                   // f4 for Quetta Disaster Earthquake records
	f4.open("QuettaDisasterEarthquake.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		earthQuetta.setCompleteEarthquake();
		f4.write((char*)&earthQuetta, sizeof(Earthquake));
		cout << "\nDo you want to add more records of Earthquake in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f4.close();
}
void addPeshawarDisasterEarthQuakeRecord()
{

	char ch;                   // f5 for Peshawar Disaster Earthquake records
	f5.open("PeshawarDisasterEarthquake.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		earthPeshawar.setCompleteEarthquake();
		f5.write((char*)&earthPeshawar, sizeof(Earthquake));
		cout << "\nDo you want to add more records of Earthquake in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f5.close();
}
void addIslamabadDisasterFloodRecord()
{

	char ch;                   // f6 for Islamabad Disaster Flood records
	f6.open("IslamabadDisasterFlood.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		floodIslamabad.setCompleteFlood();
		f6.write((char*)&floodIslamabad, sizeof(Flood));
		cout << "\nDo you want to add more records of Flood in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f6.close();
}
void addLahoreDisasterFloodRecord()
{

	char ch;                   // f7 for Lahore Disaster Flood records
	f7.open("LahoreDisasterFlood.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		floodLahore.setCompleteFlood();
		f7.write((char*)&floodLahore, sizeof(Flood));
		cout << "\nDo you want to add more records of Flood in LAhore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f7.close();
}
void addKarachiDisasterFloodRecord()
{

	char ch;                   // f8 for Karachi Disaster Flood records
	f8.open("KarachiDisasterFlood.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		floodKarachi.setCompleteFlood();
		f8.write((char*)&floodKarachi, sizeof(Flood));
		cout << "\nDo you want to add more records of Flood in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f8.close();
}
void addQuettaDisasterFloodRecord()
{

	char ch;                   // f9 for Quetta Disaster Flood records
	f9.open("QuettaDisasterFlood.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		floodQuetta.setCompleteFlood();
		f9.write((char*)&floodQuetta, sizeof(Flood));
		cout << "\nDo you want to add more records of Flood in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f9.close();
}
void addPeshawarDisasterFloodRecord()
{

	char ch;                   // f10 for Peshawar Disaster Flood records
	f10.open("PeshawarDisasterFlood.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		floodPeshawar.setCompleteFlood();
		f10.write((char*)&floodPeshawar, sizeof(Flood));
		cout << "\nDo you want to add more records of Flood in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f10.close();
}
void addIslamabadDisasterVolcanoRecord()
{

	char ch;                   // f11 for Islamabad Disaster Volcano records
	f11.open("IslamabadDisasterVolcano.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		volcanoIslamabad.setCompleteVolcano();
		f11.write((char*)&volcanoIslamabad, sizeof(Volcano));
		cout << "\nDo you want to add more records of Volcano in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f11.close();
}
void addLahoreDisasterVolcanoRecord()
{

	char ch;                   // f12 for Lahore Disaster Volcano records
	f12.open("LahoreDisasterVolcano.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		volcanoLahore.setCompleteVolcano();
		f12.write((char*)&volcanoLahore, sizeof(Volcano));
		cout << "\nDo you want to add more records of Volcano in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f12.close();
}
void addKarachiDisasterVolcanoRecord()
{

	char ch;                   // f13 for Karachi Disaster Volcano records
	f13.open("KarachiDisasterVolcano.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		volcanoKarachi.setCompleteVolcano();
		f13.write((char*)&volcanoKarachi, sizeof(Volcano));
		cout << "\nDo you want to add more records of Volcano in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f13.close();
}
void addQuettaDisasterVolcanoRecord()
{

	char ch;                   // f14 for Quetta Disaster Volcano records
	f14.open("QuettaDisasterVolcano.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		volcanoQuetta.setCompleteVolcano();
		f14.write((char*)&volcanoQuetta, sizeof(Volcano));
		cout << "\nDo you want to add more records of Volcano in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f14.close();
}
void addPeshawarDisasterVolcanoRecord()
{

	char ch;                   // f15 for Peshawar Disaster Volcano records
	f15.open("PeshawarDisasterVolcano.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		volcanoPeshawar.setCompleteVolcano();
		f15.write((char*)&volcanoPeshawar, sizeof(Volcano));
		cout << "\nDo you want to add more records of Volcano in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f15.close();
}
void addIslamabadDisasterTornadoRecord()
{

	char ch;                   // f16 for Islamabad Disaster Tornado records
	f16.open("IslamabadDisasterTornado.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		tornadoIslamabad.setCompleteTornado();
		f16.write((char*)&tornadoIslamabad, sizeof(Tornado));
		cout << "\nDo you want to add more records of Tornado in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f16.close();
}
void addLahoreDisasterTornadoRecord()
{

	char ch;                   // f17 for Lahore Disaster Tornado records
	f17.open("LahoreDisasterTornado.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		tornadoLahore.setCompleteTornado();
		f17.write((char*)&tornadoLahore, sizeof(Tornado));
		cout << "\nDo you want to add more records of Tornado in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f17.close();
}
void addKarachiDisasterTornadoRecord()
{

	char ch;                   // f18 for Karachi Disaster Tornado records
	f18.open("KarachiDisasterTornado.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		tornadoKarachi.setCompleteTornado();
		f18.write((char*)&tornadoKarachi, sizeof(Tornado));
		cout << "\nDo you want to add more records of Tornado in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f18.close();
}
void addQuettaDisasterTornadoRecord()
{

	char ch;                   // f19 for Quetta Disaster Tornado records
	f19.open("QuettaDisasterTornado.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		tornadoQuetta.setCompleteTornado();
		f19.write((char*)&tornadoIslamabad, sizeof(Tornado));
		cout << "\nDo you want to add more records of Tornado in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f19.close();
}
void addPeshawarDisasterTornadoRecord()
{

	char ch;                   // f20 for Peshawar Disaster Tornado records
	f20.open("PeshawarDisasterTornado.dat", ios::out | ios::app);

	do
	{
		system("CLS");
		tornadoPeshawar.setCompleteTornado();
		f20.write((char*)&tornadoPeshawar, sizeof(Tornado));
		cout << "\nDo you want to add more records of Tornado in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f20.close();
}
void addVictimEarthIslamabad()
{
	char ch;                                        // f21 for Victims of Earthquake in Islamabad
	f21.open("VictimEarthquakeIslamabad.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimEarthIslamabad.setVictimRecord();
		f21.write((char*)&victimEarthIslamabad, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Earthquake in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f21.close();
}
void addVictimEarthLahore()
{
	char ch;                                        // f22 for Victims of Earthquake in Lahore
	f22.open("VictimEarthquakeLahore.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimEarthLahore.setVictimRecord();
		f22.write((char*)&victimEarthLahore, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Earthquake in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f22.close();
}void addVictimEarthKarachi()
{
	char ch;                                        // f23 for Victims of Earthquake in Karachi
	f23.open("VictimEarthquakeKarachi.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimEarthKarachi.setVictimRecord();
		f23.write((char*)&victimEarthKarachi, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Earthquake in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f23.close();
}void addVictimEarthQuetta()
{
	char ch;                                        // f24 for Victims of Earthquake in Quetta
	f24.open("VictimEarthquakeQuetta.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimEarthQuetta.setVictimRecord();
		f24.write((char*)&victimEarthQuetta, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Earthquake in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f24.close();
}void addVictimEarthPeshawar()
{
	char ch;                                        // f25 for Victims of Earthquake in Peshawar
	f25.open("VictimEarthquakePeshawar.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimEarthPeshawar.setVictimRecord();
		f25.write((char*)&victimEarthPeshawar, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Earthquake in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f25.close();
}
void addVictimFloodIslamabad()
{
	char ch;                                        // f26 for Victims of Flood in Islamabad
	f26.open("VictimFloodIslamabad.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimFloodIslamabad.setVictimRecord();
		f26.write((char*)&victimFloodIslamabad, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Flood in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f26.close();
}
void addVictimFloodLahore()
{
	char ch;                                        // f27 for Victims of Flood in Lahore
	f27.open("VictimFloodLahore.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimFloodLahore.setVictimRecord();
		f27.write((char*)&victimFloodLahore, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Flood in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f27.close();
}void addVictimFloodKarachi()
{
	char ch;                                        // f28 for Victims of Flood in Karachi
	f28.open("VictimFloodKarachi.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimFloodKarachi.setVictimRecord();
		f28.write((char*)&victimFloodKarachi, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Flood in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f28.close();
}void addVictimFloodQuetta()
{
	char ch;                                        // f29 for Victims of Flood in Quetta
	f29.open("VictimFloodQuetta.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimFloodQuetta.setVictimRecord();
		f29.write((char*)&victimFloodQuetta, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Flood in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f29.close();
}void addVictimFloodPeshawar()
{
	char ch;                                        // f30 for Victims of Flood in Peshawar
	f30.open("VictimFloodPeshawar.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimFloodPeshawar.setVictimRecord();
		f30.write((char*)&victimFloodPeshawar, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Flood in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f30.close();
}
void addVictimVolcanoIslamabad()
{
	char ch;                                        // f31 for Victims of Volcano in Islamabad
	f31.open("VictimVolcanoIslamabad.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimVolcanoIslamabad.setVictimRecord();
		f31.write((char*)&victimVolcanoIslamabad, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Volcano in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f31.close();
}
void addVictimVolcanoLahore()
{
	char ch;                                        // f32 for Victims of Volcano in Lahore
	f32.open("VictimVolcanoLahore.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimVolcanoLahore.setVictimRecord();
		f32.write((char*)&victimVolcanoLahore, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Volcano in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f32.close();
}void addVictimVolcanoKarachi()
{
	char ch;                                        // f33 for Victims of Volcano in Karachi
	f33.open("VictimVolcanoKarachi.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimVolcanoKarachi.setVictimRecord();
		f33.write((char*)&victimVolcanoKarachi, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Volcano in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f33.close();
}void addVictimVolcanoQuetta()
{
	char ch;                                        // f34 for Victims of Volcano in Quetta
	f34.open("VictimVolcanoQuetta.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimVolcanoQuetta.setVictimRecord();
		f34.write((char*)&victimVolcanoQuetta, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Volcano in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f34.close();
}void addVictimVolcanoPeshawar()
{
	char ch;                                        // f35 for Victims of Volcano in Peshawar
	f35.open("VictimVolcanoPeshawar.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimVolcanoPeshawar.setVictimRecord();
		f35.write((char*)&victimVolcanoPeshawar, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Volcano in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f35.close();
}
void addVictimTornadoIslamabad()
{
	char ch;                                        // f36 for Victims of Tornado in Islamabad
	f36.open("VictimTornadoIslamabad.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimTornadoIslamabad.setVictimRecord();
		f36.write((char*)&victimTornadoIslamabad, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Tornado in Islamabad?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f36.close();
}
void addVictimTornadoLahore()
{
	char ch;                                        // f37 for Victims of Tornado in Lahore
	f37.open("VictimTornadoLahore.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimTornadoLahore.setVictimRecord();
		f37.write((char*)&victimTornadoLahore, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Tornado in Lahore?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f37.close();
}void addVictimTornadoKarachi()
{
	char ch;                                        // f38 for Victims of Tornado in Karachi
	f38.open("VictimTornadoKarachi.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimTornadoKarachi.setVictimRecord();
		f38.write((char*)&victimTornadoKarachi, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Tornado in Karachi?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f38.close();
}void addVictimTornadoQuetta()
{
	char ch;                                        // f39 for Victims of Tornado in Quetta
	f39.open("VictimTornadoQuetta.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimTornadoQuetta.setVictimRecord();
		f39.write((char*)&victimTornadoQuetta, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Tornado in Quetta?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f39.close();
}
void addVictimTornadoPeshawar()
{
	char ch;                                        // f40 for Victims of Tornado in Peshawar
	f40.open("VictimTornadoPeshawar.dat", ios::out | ios::app);
	do
	{
		system("CLS");
		victimTornadoPeshawar.setVictimRecord();
		f40.write((char*)&victimTornadoPeshawar, sizeof(Victims));
		cout << "\nDo you want to add more records of Victims of Tornado in Peshawar?...(y/n)....: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	f40.close();
}
void readIslamabadDisasterEarthQuakeRecord()
{
	f1.open("IslamabadDisasterEarthquake.dat", ios::in);
	if (!f1)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f1.read((char*)&earthIslamabad, sizeof(Earthquake)))
	{
		earthIslamabad.getCompleteEarthquake();
		cout << "\n\n\n";
	}

	f1.close();

}
void readLahoreDisasterEarthQuakeRecord()
{
	f2.open("LahoreDisasterEarthquake.dat", ios::in);
	if (!f2)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f2.read((char*)&earthLahore, sizeof(Earthquake)))
	{
		earthLahore.getCompleteEarthquake();
		cout << "\n\n\n";
	}

	f2.close();
}
void readKarachiDisasterEarthQuakeRecord()
{
	f3.open("KarachiDisasterEarthquake.dat", ios::in);
	if (!f4)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f3.read((char*)&earthKarachi, sizeof(Earthquake)))
	{
		earthKarachi.getCompleteEarthquake();
		cout << "\n\n\n";
	}

	f3.close();
}
void readQuettaDisasterEarthQuakeRecord()
{
	f4.open("QuettaDisasterEarthquake.dat", ios::in);
	if (!f4)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f4.read((char*)&earthQuetta, sizeof(Earthquake)))
	{
		earthQuetta.getCompleteEarthquake();
		cout << "\n\n\n";
	}

	f4.close();
}
void readPeshawarDisasterEarthQuakeRecord()
{
	f5.open("PeshawarDisasterEarthquake.dat", ios::in);
	if (!f5)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f5.read((char*)&earthPeshawar, sizeof(Earthquake)))
	{
		earthPeshawar.getCompleteEarthquake();
		cout << "\n\n\n";
	}

	f5.close();
}
void readIslamabadDisasterFloodRecord()
{
	f6.open("IslamabadDisasterFlood.dat", ios::in);
	if (!f6)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f6.read((char*)&floodIslamabad, sizeof(Flood)))
	{
		floodIslamabad.getCompleteFlood();
		cout << "\n\n\n";
	}

	f6.close();
}
void readLahoreDisasterFloodRecord()
{
	f7.open("LahoreDisasterFlood.dat", ios::in);
	if (!f7)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f7.read((char*)&floodLahore, sizeof(Flood)))
	{
		floodLahore.getCompleteFlood();
		cout << "\n\n\n";
	}

	f7.close();
}
void readKarachiDisasterFloodRecord()
{
	f8.open("KarachiDisasterFlood.dat", ios::in);
	if (!f8)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f8.read((char*)&floodKarachi, sizeof(Flood)))
	{
		floodKarachi.getCompleteFlood();
		cout << "\n\n\n";
	}

	f8.close();
}
void readQuettaDisasterFloodRecord()
{
	f9.open("QuettaDisasterFlood.dat", ios::in);
	if (!f9)
	{
		cout << "\nFile open error";

		return;
	}

	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f9.read((char*)&floodQuetta, sizeof(Flood)))
	{
		floodQuetta.getCompleteFlood();
		cout << "\n\n\n";
	}

	f9.close();
}
void readPeshawarDisasterFloodRecord()
{
	f10.open("PeshawarDisasterFlood.dat", ios::in);
	if (!f10)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f10.read((char*)&floodPeshawar, sizeof(Flood)))
	{
		floodPeshawar.getCompleteFlood();
		cout << "\n\n\n";
	}

	f10.close();
}
void readIslamabadDisasterVolcanoRecord()
{
	f11.open("IslamabadDisasterVolcano.dat", ios::in);
	if (!f11)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f11.read((char*)&volcanoIslamabad, sizeof(Volcano)))
	{
		volcanoIslamabad.getCompleteVolcano();
		cout << "\n\n\n";
	}

	f11.close();
}
void readLahoreDisasterVolcanoRecord()
{
	f12.open("LahoreDisasterVolcano.dat", ios::in);
	if (!f12)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f12.read((char*)&volcanoLahore, sizeof(Volcano)))
	{
		volcanoLahore.getCompleteVolcano();
		cout << "\n\n\n";
	}

	f12.close();
}
void readKarachiDisasterVolcanoRecord()
{
	f13.open("KarachiDisasterVolcano.dat", ios::in);
	if (!f13)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f13.read((char*)&volcanoKarachi, sizeof(Volcano)))
	{
		volcanoKarachi.getCompleteVolcano();
		cout << "\n\n\n";
	}

	f13.close();
}
void readQuettaDisasterVolcanoRecord()
{
	f14.open("QuettaDisasterVolcano.dat", ios::in);
	if (!f14)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f14.read((char*)&volcanoQuetta, sizeof(Volcano)))
	{
		volcanoQuetta.getCompleteVolcano();
		cout << "\n\n\n";
	}

	f14.close();
}
void readPeshawarDisasterVolcanoRecord()
{
	f15.open("PeshawarDisasterVolcano.dat", ios::in);
	if (!f15)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f15.read((char*)&volcanoPeshawar, sizeof(Volcano)))
	{
		volcanoPeshawar.getCompleteVolcano();
		cout << "\n\n\n";
	}

	f15.close();
}
void readIslamabadDisasterTornadoRecord()
{

	f16.open("IslamabadDisasterTornado.dat", ios::in);
	if (!f16)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f16.read((char*)&tornadoIslamabad, sizeof(Tornado)))
	{
		tornadoIslamabad.getCompleteTornado();
		cout << "\n\n\n";
	}

	f16.close();
}
void readLahoreDisasterTornadoRecord()
{
	f17.open("IslamabadDisasterTornado.dat", ios::in);
	if (!f17)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f17.read((char*)&tornadoLahore, sizeof(Tornado)))
	{
		tornadoLahore.getCompleteTornado();
		cout << "\n\n\n";
	}

	f17.close();
}
void readKarachiDisasterTornadoRecord()

{
	f18.open("KarachiDisasterTornado.dat", ios::in);
	if (!f18)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f18.read((char*)&tornadoKarachi, sizeof(Tornado)))
	{
		tornadoKarachi.getCompleteTornado();
		cout << "\n\n\n";
	}

	f18.close();
}
void readQuettaDisasterTornadoRecord()
{
	f19.open("QuettaDisasterTornado.dat", ios::in);
	if (!f19)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f19.read((char*)&tornadoKarachi, sizeof(Tornado)))
	{
		tornadoQuetta.getCompleteTornado();
		cout << "\n\n\n";
	}

	f19.close();
}
void readPeshawarDisasterTornadoRecord()
{
	f20.open("PeshawarDisasterTornado.dat", ios::in);
	if (!f20)
	{
		cout << "\nFile open error";

		return;

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f20.read((char*)&tornadoKarachi, sizeof(Tornado)))
	{
		tornadoPeshawar.getCompleteTornado();
		cout << "\n\n\n";
	}

	f20.close();
}
void readVictimEarthIslamabad()
{
	f21.open("VictimEarthquakeIslamabad.dat", ios::in);
	if (!f21)
	{
		cout << "\nFile open error";



	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f21.read((char*)&victimEarthIslamabad, sizeof(Victims)))
	{
		victimEarthIslamabad.getVictimRecord();
		cout << "\n\n\n";
	}

	f21.close();
}
void readVictimEarthLahore()
{
	f22.open("VictimEarthquakeLahore.dat", ios::in);
	if (!f22)
	{
		cout << "\nFile open error";



	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f22.read((char*)&victimEarthLahore, sizeof(Victims)))
	{
		victimEarthLahore.getVictimRecord();
		cout << "\n\n\n";
	}

	f22.close();
}
void readVictimEarthKarachi()
{
	f23.open("VictimEarthquakeKarachi.dat", ios::in);
	if (!f23)
	{
		cout << "\nFile open error";



	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f23.read((char*)&victimEarthKarachi, sizeof(Victims)))
	{
		victimEarthKarachi.getVictimRecord();
		cout << "\n\n\n";
	}

	f23.close();
}
void readVictimEarthQuetta()
{
	f24.open("VictimEarthquakeQuetta.dat", ios::in);
	if (!f24)
	{
		cout << "\nFile open error";


	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f24.read((char*)&victimEarthQuetta, sizeof(Victims)))
	{
		victimEarthQuetta.getVictimRecord();
		cout << "\n\n\n";
	}

	f24.close();
}
void readVictimEarthPeshawar()
{
	f25.open("VictimEarthquakePeshawar.dat", ios::in);
	if (!f25)
	{
		cout << "\nFile open error";



	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f25.read((char*)&victimEarthPeshawar, sizeof(Victims)))
	{
		victimEarthPeshawar.getVictimRecord();
		cout << "\n\n\n";
	}

	f25.close();
}
void readVictimFloodIslamabad()
{
	f26.open("VictimFloodIslamabad.dat", ios::in);
	if (!f26)
	{
		cout << "\nFile open error";



	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f26.read((char*)&victimFloodIslamabad, sizeof(Victims)))
	{
		victimFloodIslamabad.getVictimRecord();
		cout << "\n\n\n";
	}

	f26.close();
}
void readVictimFloodLahore()
{
	f27.open("VictimFloodLahore.dat", ios::in);
	if (!f27)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f27.read((char*)&victimFloodLahore, sizeof(Victims)))
	{
		victimFloodLahore.getVictimRecord();
		cout << "\n\n\n";
	}

	f27.close();
}
void readVictimFloodKarachi()
{
	f28.open("VictimFloodKarachi.dat", ios::in);
	if (!f28)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f28.read((char*)&victimFloodKarachi, sizeof(Victims)))
	{
		victimFloodKarachi.getVictimRecord();
		cout << "\n\n\n";
	}

	f28.close();
}
void readVictimFloodQuetta()
{
	f29.open("VictimFloodLahore.dat", ios::in);
	if (!f29)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f29.read((char*)&victimFloodQuetta, sizeof(Victims)))
	{
		victimFloodQuetta.getVictimRecord();
		cout << "\n\n\n";
	}

	f29.close();
}
void readVictimFloodPeshawar()
{
	f30.open("VictimFloodPeshawar.dat", ios::in);
	if (!f30)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f30.read((char*)&victimFloodPeshawar, sizeof(Victims)))
	{
		victimFloodPeshawar.getVictimRecord();
		cout << "\n\n\n";
	}

	f30.close();
}
void readVictimVolcanoIslamabad()
{
	f31.open("VictimVolcanoIslamabad.dat", ios::in);
	if (!f31)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f31.read((char*)&victimVolcanoIslamabad, sizeof(Victims)))
	{
		victimVolcanoIslamabad.getVictimRecord();
		cout << "\n\n\n";
	}

	f31.close();
}
void readVictimVolcanoLahore()
{
	f32.open("VictimVolcanoLahore.dat", ios::in);
	if (!f32)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f32.read((char*)&victimVolcanoLahore, sizeof(Victims)))
	{
		victimVolcanoLahore.getVictimRecord();
		cout << "\n\n\n";
	}

	f32.close();
}
void readVictimVolcanoKarachi()
{
	f33.open("VictimVolcanoKarachi.dat", ios::in);
	if (!f33)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f33.read((char*)&victimVolcanoKarachi, sizeof(Victims)))
	{
		victimVolcanoKarachi.getVictimRecord();
		cout << "\n\n\n";
	}

	f33.close();
}
void readVictimVolcanoQuetta()
{
	f34.open("VictimVolcanoQuetta.dat", ios::in);
	if (!f34)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f34.read((char*)&victimVolcanoQuetta, sizeof(Victims)))
	{
		victimVolcanoQuetta.getVictimRecord();
		cout << "\n\n\n";
	}

	f34.close();
}
void readVictimVolcanoPeshawar()
{
	f35.open("VictimVolcanoPeshawar.dat", ios::in);
	if (!f35)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f35.read((char*)&victimVolcanoPeshawar, sizeof(Victims)))
	{
		victimVolcanoPeshawar.getVictimRecord();
		cout << "\n\n\n";
	}

	f35.close();
}
void readVictimTornadoIslamabad()
{
	f36.open("VictimTornadoIslamabad.dat", ios::in);
	if (!f36)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f36.read((char*)&victimTornadoIslamabad, sizeof(Victims)))
	{
		victimTornadoIslamabad.getVictimRecord();
		cout << "\n\n\n";
	}

	f36.close();
}
void readVictimTornadoLahore()
{
	f37.open("VictimTornadoLahore.dat", ios::in);
	if (!f37)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f37.read((char*)&victimTornadoLahore, sizeof(Victims)))
	{
		victimTornadoLahore.getVictimRecord();
		cout << "\n\n\n";
	}

	f37.close();
}
void readVictimTornadoKarachi()
{
	f38.open("VictimTornadoKarachi.dat", ios::in);
	if (!f38)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f38.read((char*)&victimTornadoKarachi, sizeof(Victims)))
	{
		victimTornadoKarachi.getVictimRecord();
		cout << "\n\n\n";
	}

	f38.close();
}
void readVictimTornadoQuetta()
{
	f39.open("VictimTornadoQuetta.dat", ios::in);
	if (!f39)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f39.read((char*)&victimTornadoQuetta, sizeof(Victims)))
	{
		victimTornadoQuetta.getVictimRecord();
		cout << "\n\n\n";
	}

	f39.close();
}void readVictimTornadoPeshawar()
{
	f40.open("VictimTornadoPeshawar.dat", ios::in);
	if (!f40)
	{
		cout << "\nFile open error";

	}
	//cout << "Record no: \tDepth: \tMagnitude: \tLocation: \tSeverity: Life Loss: \tProperty Loss: \tDate: \tTime: ";
	while (f40.read((char*)&victimTornadoPeshawar, sizeof(Victims)))
	{
		victimTornadoPeshawar.getVictimRecord();
		cout << "\n\n\n";
	}

	f40.close();
}
// Now making Record Searching functions
void searchIslamabadDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f1("IslamabadDisasterEarthquake.dat", ios::in);



	bool found = false;

	while (f1.read((char*)&earthIslamabad, sizeof(Earthquake)))
	{
		if (earthIslamabad.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthIslamabad.getCompleteEarthquake();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f1.close();
}
void searchLahoreDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f2("LahoreDisasterEarthquake.dat", ios::in);



	bool found = false;

	while (f2.read((char*)&earthLahore, sizeof(Earthquake)))
	{
		if (earthLahore.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthLahore.getCompleteEarthquake();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f2.close();
}
void searchKarachiDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f3("KarachiDisasterEarthquake.dat", ios::in);



	bool found = false;

	while (f3.read((char*)&earthKarachi, sizeof(Earthquake)))
	{
		if (earthKarachi.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthKarachi.getCompleteEarthquake();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f3.close();
}
void searchQuettaDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake of Quetta record you want to search:-- ";
	cin >> searchID;
	ifstream f4("QuettaDisasterEarthquake.dat", ios::in);



	bool found = false;

	while (f4.read((char*)&earthQuetta, sizeof(Earthquake)))
	{
		if (earthQuetta.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthQuetta.getCompleteEarthquake();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f4.close();
}
void searchPeshawarDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f5("PeshawarDisasterEarthquake.dat", ios::in);



	bool found = false;

	while (f5.read((char*)&earthIslamabad, sizeof(Earthquake)))
	{
		if (earthPeshawar.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthPeshawar.getCompleteEarthquake();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f5.close();
}

void searchIslamabadDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f6("IslamabadDisasterFlood.dat", ios::in);



	bool found = false;

	while (f6.read((char*)&floodIslamabad, sizeof(Flood)))
	{
		if (floodIslamabad.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodIslamabad.getCompleteFlood();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f6.close();
}
void searchLahoreDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f7("LahoreDisasterFlood.dat", ios::in);



	bool found = false;

	while (f7.read((char*)&floodLahore, sizeof(Flood)))
	{
		if (floodLahore.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodLahore.getCompleteFlood();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f7.close();
}
void searchKarachiDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f8("KarachiDisasterFlood.dat", ios::in);



	bool found = false;

	while (f8.read((char*)&floodKarachi, sizeof(Flood)))
	{
		if (floodKarachi.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodKarachi.getCompleteFlood();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f8.close();
}
void searchQuettaDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f9("QuettaDisasterFlood.dat", ios::in);



	bool found = false;

	while (f9.read((char*)&floodQuetta, sizeof(Flood)))
	{
		if (floodQuetta.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodQuetta.getCompleteFlood();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f9.close();
}
void searchPeshawarDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f10("PeshawarDisasterFlood.dat", ios::in);



	bool found = false;

	while (f10.read((char*)&floodPeshawar, sizeof(Flood)))
	{
		if (floodPeshawar.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodPeshawar.getCompleteFlood();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f10.close();
}
void searchIslamabadDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f11("IslamabadDisasterVolcano.dat", ios::in);



	bool found = false;

	while (f11.read((char*)&volcanoIslamabad, sizeof(Volcano)))
	{
		if (volcanoIslamabad.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoIslamabad.getCompleteVolcano();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f11.close();
}
void searchLahoreDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f12("IslamabadDisasterVolcano.dat", ios::in);



	bool found = false;

	while (f12.read((char*)&volcanoLahore, sizeof(Volcano)))
	{
		if (volcanoLahore.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoLahore.getCompleteVolcano();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f12.close();
}
void searchKarachiDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f13("KarachiDisasterVolcano.dat", ios::in);



	bool found = false;

	while (f13.read((char*)&volcanoKarachi, sizeof(Volcano)))
	{
		if (volcanoKarachi.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoKarachi.getCompleteVolcano();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f13.close();
}
void searchQuettaDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of  EarthQuake record of Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f14("QuettaiDisasterVolcano.dat", ios::in);



	bool found = false;

	while (f14.read((char*)&volcanoQuetta, sizeof(Volcano)))
	{
		if (volcanoQuetta.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoKarachi.getCompleteVolcano();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f14.close();
}

void searchPeshawarDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f15("PeshawarDisasterVolcano.dat", ios::in);



	bool found = false;

	while (f15.read((char*)&volcanoPeshawar, sizeof(Volcano)))
	{
		if (volcanoPeshawar.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoPeshawar.getCompleteVolcano();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f15.close();
}
void searchIslamabadDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado  record of Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f16("IslamabadDisasterTornado.dat", ios::in);



	bool found = false;

	while (f16.read((char*)&tornadoIslamabad, sizeof(Tornado)))
	{
		if (tornadoIslamabad.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoIslamabad.getCompleteTornado();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f16.close();
}
void searchLahoreDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado  record of Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f17("LahoreDisasterTornado.dat", ios::in);



	bool found = false;

	while (f17.read((char*)&tornadoLahore, sizeof(Tornado)))
	{
		if (tornadoLahore.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoLahore.getCompleteTornado();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f17.close();
}
void searchKarachiDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado  record of Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f18("KarachiDisasterTornado.dat", ios::in);



	bool found = false;

	while (f18.read((char*)&tornadoKarachi, sizeof(Tornado)))
	{
		if (tornadoKarachi.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoKarachi.getCompleteTornado();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f18.close();
}
void searchQuettaDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado  record of Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f19("QuettaDisasterTornado.dat", ios::in);



	bool found = false;

	while (f19.read((char*)&tornadoQuetta, sizeof(Tornado)))
	{
		if (tornadoQuetta.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoQuetta.getCompleteTornado();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f19.close();
}
void searchPeshawarDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado  record of Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f20("QuettaDisasterTornado.dat", ios::in);



	bool found = false;

	while (f20.read((char*)&tornadoPeshawar, sizeof(Tornado)))
	{
		if (tornadoPeshawar.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoPeshawar.getCompleteTornado();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f20.close();
}

void searchIslamabadVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of EarthQuake Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f21("VictimEarthquakeIslamabad.dat", ios::in);



	bool found = false;

	while (f21.read((char*)&victimEarthIslamabad, sizeof(Victims)))
	{
		if (victimEarthIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthIslamabad.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f21.close();
}
void searchLahoreVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of EarthQuake Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f22("VictimEarthquakeLahore.dat", ios::in);



	bool found = false;

	while (f22.read((char*)&victimEarthLahore, sizeof(Victims)))
	{
		if (victimEarthLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthLahore.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f22.close();
}
void searchKarachiVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of EarthQuake Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f23("VictimEarthquakeKarachi.dat", ios::in);



	bool found = false;

	while (f23.read((char*)&victimEarthKarachi, sizeof(Victims)))
	{
		if (victimEarthKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthKarachi.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f23.close();
}
void searchQuettaVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of EarthQuake Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f24("VictimEarthquakeQuetta.dat", ios::in);



	bool found = false;

	while (f24.read((char*)&victimEarthQuetta, sizeof(Victims)))
	{
		if (victimEarthQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthQuetta.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f24.close();
}
void searchPeshawarVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of EarthQuake Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f25("VictimEarthquakePeshawar.dat", ios::in);



	bool found = false;

	while (f25.read((char*)&victimEarthPeshawar, sizeof(Victims)))
	{
		if (victimEarthPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthPeshawar.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f25.close();
}
void searchIslamabadVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f26("VictimFloodIslamabad.dat", ios::in);



	bool found = false;

	while (f26.read((char*)&victimFloodIslamabad, sizeof(Victims)))
	{
		if (victimFloodIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodIslamabad.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f26.close();
}
void searchLahoreVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f27("VictimFloodLahore.dat", ios::in);



	bool found = false;

	while (f27.read((char*)&victimFloodLahore, sizeof(Victims)))
	{
		if (victimFloodLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodLahore.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f27.close();
}

void searchKarachiVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f28("VictimFloodKarachi.dat", ios::in);



	bool found = false;

	while (f28.read((char*)&victimFloodKarachi, sizeof(Victims)))
	{
		if (victimFloodKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodKarachi.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f28.close();
}
void searchQuettaVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f29("VictimFloodQuetta.dat", ios::in);



	bool found = false;

	while (f29.read((char*)&victimFloodQuetta, sizeof(Victims)))
	{
		if (victimFloodQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodQuetta.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f29.close();
}
void searchPeshawarVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f30("VictimFloodPeshawar.dat", ios::in);



	bool found = false;

	while (f30.read((char*)&victimFloodPeshawar, sizeof(Victims)))
	{
		if (victimFloodPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodPeshawar.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f30.close();
}
void searchIslamabadVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f31("VictimVolcanoIslamabad.dat", ios::in);



	bool found = false;

	while (f31.read((char*)&victimVolcanoIslamabad, sizeof(Victims)))
	{
		if (victimVolcanoIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoIslamabad.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f31.close();
}
void searchLahoreVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f32("VictimVolcanoLahore.dat", ios::in);



	bool found = false;

	while (f32.read((char*)&victimVolcanoLahore, sizeof(Victims)))
	{
		if (victimVolcanoLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoLahore.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f32.close();
}
void searchKarachiVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f33("VictimVolcanoKarachi.dat", ios::in);



	bool found = false;

	while (f33.read((char*)&victimVolcanoKarachi, sizeof(Victims)))
	{
		if (victimVolcanoKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoKarachi.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f33.close();
}
void searchQuettaVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f34("VictimVolcanoQuetta.dat", ios::in);



	bool found = false;

	while (f34.read((char*)&victimVolcanoQuetta, sizeof(Victims)))
	{
		if (victimVolcanoQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoQuetta.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f34.close();
}
void searchPeshawarVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f35("VictimVolcanoPeshawar.dat", ios::in);



	bool found = false;

	while (f35.read((char*)&victimVolcanoPeshawar, sizeof(Victims)))
	{
		if (victimVolcanoPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoPeshawar.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f35.close();
}
void searchIslamabadVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Islamabad you want to search:-- ";
	cin >> searchID;
	ifstream f36("VictimTornadoIslamabad.dat", ios::in);



	bool found = false;

	while (f36.read((char*)&victimTornadoIslamabad, sizeof(Victims)))
	{
		if (victimTornadoIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimTornadoIslamabad.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f36.close();
}
void searchLahoreVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Lahore you want to search:-- ";
	cin >> searchID;
	ifstream f37("VictimTornadoLahore.dat", ios::in);



	bool found = false;

	while (f37.read((char*)&victimTornadoLahore, sizeof(Victims)))
	{
		if (victimTornadoLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimTornadoLahore.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f37.close();
}
void searchKarachiVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Karachi you want to search:-- ";
	cin >> searchID;
	ifstream f38("VictimTornadoKarachi.dat", ios::in);



	bool found = false;

	while (f38.read((char*)&victimTornadoKarachi, sizeof(Victims)))
	{
		if (victimTornadoKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimTornadoKarachi.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f38.close();
}
void searchQuettaVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Quetta you want to search:-- ";
	cin >> searchID;
	ifstream f39("VictimTornadoQuetta.dat", ios::in);



	bool found = false;

	while (f39.read((char*)&victimTornadoQuetta, sizeof(Victims)))
	{
		if (victimTornadoQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimTornadoQuetta.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f39.close();
}
void searchPeshawarVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Peshawar you want to search:-- ";
	cin >> searchID;
	ifstream f40("VictimTornadoPeshawar.dat", ios::in);



	bool found = false;

	while (f40.read((char*)&victimTornadoPeshawar, sizeof(Victims)))
	{
		if (victimTornadoPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimTornadoPeshawar.getVictimRecordNumber();
			break; // exit the loop once the record is found
		}
	}

	if (!found)
	{
		cout << "Record not found.\n";
	}

	f40.close();
}
// Now making functions to delete records
void deleteIslamabadDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f1("IslamabadDisasterEarthquake.dat", ios::in);

	ofstream outFile("Temp1.dat", ios::out);


	bool found = false;

	while (f1.read((char*)&earthIslamabad, sizeof(Earthquake)))
	{
		if (earthIslamabad.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthIslamabad.getCompleteEarthquake();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&earthIslamabad, sizeof(Earthquake));
			}
		}
		else
		{
			outFile.write((char*)&earthIslamabad, sizeof(Earthquake));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("IslamabadDisasterEarthquake.dat");
		rename("Temp1.dat", "IslamabadDisasterEarthquake.dat");
		cout << "Record deleted successfully.\n";
	}
	f1.close();
}
void deleteLahoreDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f2("LahoreDisasterEarthquake.dat", ios::in);
	ofstream outFile("Temp2.dat", ios::out);


	bool found = false;

	while (f2.read((char*)&earthLahore, sizeof(Earthquake)))
	{
		if (earthLahore.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthLahore.getCompleteEarthquake();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&earthLahore, sizeof(Earthquake));
			}

		}
		else
		{
			outFile.write((char*)&earthIslamabad, sizeof(Earthquake));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("LahoreDisasterEarthquake.dat");
		rename("Temp2.dat", "LahoreDisasterEarthquake.dat");
		cout << "Record deleted successfully.\n";
	}

	f2.close();
}
void deleteKarachiDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f3("KarachiDisasterEarthquake.dat", ios::in);
	ofstream outFile("Temp3.dat", ios::out);



	bool found = false;

	while (f3.read((char*)&earthKarachi, sizeof(Earthquake)))
	{
		if (earthKarachi.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthKarachi.getCompleteEarthquake();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&earthKarachi, sizeof(Earthquake));
			}
		}
		else
		{
			outFile.write((char*)&earthKarachi, sizeof(Earthquake));
		}

	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("KarachiDisasterEarthquake.dat");
		rename("Temp3.dat", "KarachiDisasterEarthquake.dat");
		cout << "Record deleted successfully.\n";
	}

	f3.close();
}
void deleteQuettaDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Earthquake in Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f4("QuettaDisasterEarthquake.dat", ios::in);
	ofstream outFile("Temp4.dat", ios::out);

	bool found = false;

	while (f4.read((char*)&earthQuetta, sizeof(Earthquake)))
	{
		if (earthQuetta.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthQuetta.getCompleteEarthquake();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&earthQuetta, sizeof(Earthquake));
			}
		}
		else
		{
			outFile.write((char*)&earthQuetta, sizeof(Earthquake));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("QuettaDisasterEarthquake.dat");
		rename("Temp4.dat", "QuettaDisasterEarthquake.dat");
		cout << "Record deleted successfully.\n";
	}

	f4.close();
}

void deletePeshawarDisasterEarthquakeRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the EarthQuake record of Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f5("PeshawarDisasterEarthquake.dat", ios::in);
	ofstream outFile("Temp5.dat", ios::out);

	bool found = false;

	while (f5.read((char*)&earthPeshawar, sizeof(Earthquake)))
	{
		if (earthPeshawar.getEarthRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			earthPeshawar.getCompleteEarthquake();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				// Write the record to the output file if not deleted
				outFile.write((char*)&earthPeshawar, sizeof(Earthquake));
			}
			// else, the record will not be written to the output file
		}
		else
		{
			outFile.write((char*)&earthPeshawar, sizeof(Earthquake));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("PeshawarDisasterEarthquake.dat");
		rename("Temp5.dat", "PeshawarDisasterEarthquake.dat");
		cout << "Record deleted successfully.\n";
	}

	f5.close();
}


void deleteIslamabadDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f6("IslamabadDisasterFlood.dat", ios::in);
	ofstream outFile("Temp6.dat", ios::out);

	bool found = false;

	while (f6.read((char*)&floodIslamabad, sizeof(Flood)))
	{
		if (floodIslamabad.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodIslamabad.getCompleteFlood();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&floodIslamabad, sizeof(Flood));
			}
		}
		else
		{
			outFile.write((char*)&floodIslamabad, sizeof(Flood));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("IslamabadDisasterFlood.dat");
		rename("Temp6.dat", "IslamabadDisasterFlood.dat");
		cout << "Record deleted successfully.\n";
	}

	f6.close();
}

void deleteLahoreDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f7("LahoreDisasterFlood.dat", ios::in);
	ofstream outFile("Temp7.dat", ios::out);

	bool found = false;

	while (f7.read((char*)&floodLahore, sizeof(Flood)))
	{
		if (floodLahore.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodLahore.getCompleteFlood();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&floodLahore, sizeof(Flood));
			}
		}
		else
		{
			outFile.write((char*)&floodLahore, sizeof(Flood));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("LahoreDisasterFlood.dat");
		rename("Temp7.dat", "LahoreDisasterFlood.dat");
		cout << "Record deleted successfully.\n";
	}

	f7.close();
}

void deleteKarachiDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f8("KarachiDisasterFlood.dat", ios::in);
	ofstream outFile("Temp8.dat", ios::out);

	bool found = false;

	while (f8.read((char*)&floodKarachi, sizeof(Flood)))
	{
		if (floodKarachi.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodKarachi.getCompleteFlood();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&floodKarachi, sizeof(Flood));
			}
		}
		else
		{
			outFile.write((char*)&floodKarachi, sizeof(Flood));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("KarachiDisasterFlood.dat");
		rename("Temp8.dat", "KarachiDisasterFlood.dat");
		cout << "Record deleted successfully.\n";
	}

	f8.close();
}

void deleteQuettaDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f9("QuettaDisasterFlood.dat", ios::in);
	ofstream outFile("Temp9.dat", ios::out);

	bool found = false;

	while (f9.read((char*)&floodQuetta, sizeof(Flood)))
	{
		if (floodQuetta.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodQuetta.getCompleteFlood();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&floodQuetta, sizeof(Flood));
			}
		}
		else
		{
			outFile.write((char*)&floodQuetta, sizeof(Flood));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("QuettaDisasterFlood.dat");
		rename("Temp9.dat", "QuettaDisasterFlood.dat");
		cout << "Record deleted successfully.\n";
	}

	f9.close();
}

void deletePeshawarDisasterFloodRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Flood record of Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f10("PeshawarDisasterFlood.dat", ios::in);
	ofstream outFile("Temp10.dat", ios::out);

	bool found = false;

	while (f10.read((char*)&floodPeshawar, sizeof(Flood)))
	{
		if (floodPeshawar.getFloodRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			floodPeshawar.getCompleteFlood();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&floodPeshawar, sizeof(Flood));
			}
		}
		else
		{
			outFile.write((char*)&floodPeshawar, sizeof(Flood));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("PeshawarDisasterFlood.dat");
		rename("Temp10.dat", "PeshawarDisasterFlood.dat");
		cout << "Record deleted successfully.\n";
	}

	f10.close();
}

void deleteIslamabadDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f11("IslamabadDisasterVolcano.dat", ios::in);
	ofstream outFile("Temp11.dat", ios::out);

	bool found = false;

	while (f11.read((char*)&volcanoIslamabad, sizeof(Volcano)))
	{
		if (volcanoIslamabad.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoIslamabad.getCompleteVolcano();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&volcanoIslamabad, sizeof(Volcano));
			}
		}
		else
		{
			outFile.write((char*)&volcanoIslamabad, sizeof(Volcano));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("IslamabadDisasterVolcano.dat");
		rename("Temp11.dat", "IslamabadDisasterVolcano.dat");
		cout << "Record deleted successfully.\n";
	}

	f11.close();
}

void deleteLahoreDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f12("LahoreDisasterVolcano.dat", ios::in);
	ofstream outFile("Temp12.dat", ios::out);

	bool found = false;

	while (f12.read((char*)&volcanoLahore, sizeof(Volcano)))
	{
		if (volcanoLahore.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoLahore.getCompleteVolcano();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&volcanoLahore, sizeof(Volcano));
			}
		}
		else
		{
			outFile.write((char*)&volcanoLahore, sizeof(Volcano));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("LahoreDisasterVolcano.dat");
		rename("Temp12.dat", "LahoreDisasterVolcano.dat");
		cout << "Record deleted successfully.\n";
	}

	f12.close();
}

void deleteKarachiDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f13("KarachiDisasterVolcano.dat", ios::in);
	ofstream outFile("Temp13.dat", ios::out);

	bool found = false;

	while (f13.read((char*)&volcanoKarachi, sizeof(Volcano)))
	{
		if (volcanoKarachi.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoKarachi.getCompleteVolcano();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&volcanoKarachi, sizeof(Volcano));
			}
		}
		else
		{
			outFile.write((char*)&volcanoKarachi, sizeof(Volcano));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("KarachiDisasterVolcano.dat");
		rename("Temp13.dat", "KarachiDisasterVolcano.dat");
		cout << "Record deleted successfully.\n";
	}

	f13.close();
}

void deleteQuettaDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f14("QuettaDisasterVolcano.dat", ios::in);
	ofstream outFile("Temp14.dat", ios::out);

	bool found = false;

	while (f14.read((char*)&volcanoQuetta, sizeof(Volcano)))
	{
		if (volcanoQuetta.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoQuetta.getCompleteVolcano();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&volcanoQuetta, sizeof(Volcano));
			}
		}
		else
		{
			outFile.write((char*)&volcanoQuetta, sizeof(Volcano));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("QuettaDisasterVolcano.dat");
		rename("Temp14.dat", "QuettaDisasterVolcano.dat");
		cout << "Record deleted successfully.\n";
	}

	f14.close();
}


void deletePeshawarDisasterVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Volcano Erruption record of Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f15("PeshawarDisasterVolcano.dat", ios::in);
	ofstream outFile("Temp15.dat", ios::out);

	bool found = false;

	while (f15.read((char*)&volcanoPeshawar, sizeof(Volcano)))
	{
		if (volcanoPeshawar.getVolcanoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			volcanoPeshawar.getCompleteVolcano();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&volcanoPeshawar, sizeof(Volcano));
			}
		}
		else
		{
			outFile.write((char*)&volcanoPeshawar, sizeof(Volcano));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("PeshawarDisasterVolcano.dat");
		rename("Temp15.dat", "PeshawarDisasterVolcano.dat");
		cout << "Record deleted successfully.\n";
	}

	f15.close();
}

void deleteIslamabadDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado record of Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f16("IslamabadDisasterTornado.dat", ios::in);
	ofstream outFile("Temp16.dat", ios::out);

	bool found = false;

	while (f16.read((char*)&tornadoIslamabad, sizeof(Tornado)))
	{
		if (tornadoIslamabad.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoIslamabad.getCompleteTornado();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&tornadoIslamabad, sizeof(Tornado));
			}
		}
		else
		{
			outFile.write((char*)&tornadoIslamabad, sizeof(Tornado));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("IslamabadDisasterTornado.dat");
		rename("Temp16.dat", "IslamabadDisasterTornado.dat");
		cout << "Record deleted successfully.\n";
	}

	f16.close();
}

void deleteLahoreDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado record of Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f17("LahoreDisasterTornado.dat", ios::in);
	ofstream outFile("Temp17.dat", ios::out);

	bool found = false;

	while (f17.read((char*)&tornadoLahore, sizeof(Tornado)))
	{
		if (tornadoLahore.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoLahore.getCompleteTornado();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&tornadoLahore, sizeof(Tornado));
			}
		}
		else
		{
			outFile.write((char*)&tornadoLahore, sizeof(Tornado));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("LahoreDisasterTornado.dat");
		rename("Temp17.dat", "LahoreDisasterTornado.dat");
		cout << "Record deleted successfully.\n";
	}

	f17.close();
}

void deleteKarachiDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado record of Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f18("KarachiDisasterTornado.dat", ios::in);
	ofstream outFile("Temp18.dat", ios::out);

	bool found = false;

	while (f18.read((char*)&tornadoKarachi, sizeof(Tornado)))
	{
		if (tornadoKarachi.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoKarachi.getCompleteTornado();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&tornadoKarachi, sizeof(Tornado));
			}
		}
		else
		{
			outFile.write((char*)&tornadoKarachi, sizeof(Tornado));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("KarachiDisasterTornado.dat");
		rename("Temp18.dat", "KarachiDisasterTornado.dat");
		cout << "Record deleted successfully.\n";
	}

	f18.close();
}

void deleteQuettaDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado record of Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f19("QuettaDisasterTornado.dat", ios::in);
	ofstream outFile("Temp19.dat", ios::out);

	bool found = false;

	while (f19.read((char*)&tornadoQuetta, sizeof(Tornado)))
	{
		if (tornadoQuetta.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoQuetta.getCompleteTornado();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&tornadoQuetta, sizeof(Tornado));
			}
		}
		else
		{
			outFile.write((char*)&tornadoQuetta, sizeof(Tornado));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("QuettaDisasterTornado.dat");
		rename("Temp19.dat", "QuettaDisasterTornado.dat");
		cout << "Record deleted successfully.\n";
	}

	f19.close();
}

void deletePeshawarDisasterTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Record number of the Tornado record of Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f20("PeshawarDisasterTornado.dat", ios::in);
	ofstream outFile("Temp20.dat", ios::out);

	bool found = false;

	while (f20.read((char*)&tornadoPeshawar, sizeof(Tornado)))
	{
		if (tornadoPeshawar.getTornadoRecord() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			tornadoPeshawar.getCompleteTornado();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&tornadoPeshawar, sizeof(Tornado));
			}
		}
		else
		{
			outFile.write((char*)&tornadoPeshawar, sizeof(Tornado));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("PeshawarDisasterTornado.dat");
		rename("Temp20.dat", "PeshawarDisasterTornado.dat");
		cout << "Record deleted successfully.\n";
	}

	f20.close();
}


void deleteIslamabadVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Earthquake Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f21("VictimEarthquakeIslamabad.dat", ios::in);
	ofstream outFile("Temp21.dat", ios::out);

	bool found = false;

	while (f21.read((char*)&victimEarthIslamabad, sizeof(Victims)))
	{
		if (victimEarthIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthIslamabad.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimEarthIslamabad, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimEarthIslamabad, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimEarthquakeIslamabad.dat");
		rename("Temp21.dat", "VictimEarthquakeIslamabad.dat");
		cout << "Record deleted successfully.\n";
	}

	f21.close();
}

void deleteLahoreVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Earthquake Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f22("VictimEarthquakeLahore.dat", ios::in);
	ofstream outFile("Temp22.dat", ios::out);

	bool found = false;

	while (f22.read((char*)&victimEarthLahore, sizeof(Victims)))
	{
		if (victimEarthLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthLahore.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimEarthLahore, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimEarthLahore, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimEarthquakeLahore.dat");
		rename("Temp22.dat", "VictimEarthquakeLahore.dat");
		cout << "Record deleted successfully.\n";
	}

	f22.close();
}

void deleteKarachiVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Earthquake Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f23("VictimEarthquakeKarachi.dat", ios::in);
	ofstream outFile("Temp23.dat", ios::out);

	bool found = false;

	while (f23.read((char*)&victimEarthKarachi, sizeof(Victims)))
	{
		if (victimEarthKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthKarachi.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimEarthKarachi, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimEarthKarachi, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimEarthquakeKarachi.dat");
		rename("Temp23.dat", "VictimEarthquakeKarachi.dat");
		cout << "Record deleted successfully.\n";
	}

	f23.close();
}

void deleteQuettaVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Earthquake Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f24("VictimEarthquakeQuetta.dat", ios::in);
	ofstream outFile("Temp24.dat", ios::out);

	bool found = false;

	while (f24.read((char*)&victimEarthQuetta, sizeof(Victims)))
	{
		if (victimEarthQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthQuetta.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimEarthQuetta, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimEarthQuetta, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimEarthquakeQuetta.dat");
		rename("Temp24.dat", "VictimEarthquakeQuetta.dat");
		cout << "Record deleted successfully.\n";
	}

	f24.close();
}

void deletePeshawarVictimEarthRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Earthquake Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f25("VictimEarthquakePeshawar.dat", ios::in);
	ofstream outFile("Temp25.dat", ios::out);

	bool found = false;

	while (f25.read((char*)&victimEarthPeshawar, sizeof(Victims)))
	{
		if (victimEarthPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimEarthPeshawar.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimEarthPeshawar, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimEarthPeshawar, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimEarthquakePeshawar.dat");
		rename("Temp25.dat", "VictimEarthquakePeshawar.dat");
		cout << "Record deleted successfully.\n";
	}

	f25.close();
}

void deleteIslamabadVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f26("VictimFloodIslamabad.dat", ios::in);
	ofstream outFile("Temp26.dat", ios::out);

	bool found = false;

	while (f26.read((char*)&victimFloodIslamabad, sizeof(Victims)))
	{
		if (victimFloodIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodIslamabad.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimFloodIslamabad, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimFloodIslamabad, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimFloodIslamabad.dat");
		rename("Temp26.dat", "VictimFloodIslamabad.dat");
		cout << "Record deleted successfully.\n";
	}

	f26.close();
}

void deleteLahoreVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f27("VictimFloodLahore.dat", ios::in);
	ofstream outFile("Temp27.dat", ios::out);

	bool found = false;

	while (f27.read((char*)&victimFloodLahore, sizeof(Victims)))
	{
		if (victimFloodLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodLahore.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimFloodLahore, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimFloodLahore, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimFloodLahore.dat");
		rename("Temp27.dat", "VictimFloodLahore.dat");
		cout << "Record deleted successfully.\n";
	}

	f27.close();
}

void deleteKarachiVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f28("VictimFloodKarachi.dat", ios::in);
	ofstream outFile("Temp28.dat", ios::out);

	bool found = false;

	while (f28.read((char*)&victimFloodKarachi, sizeof(Victims)))
	{
		if (victimFloodKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodKarachi.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimFloodKarachi, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimFloodKarachi, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimFloodKarachi.dat");
		rename("Temp28.dat", "VictimFloodKarachi.dat");
		cout << "Record deleted successfully.\n";
	}

	f28.close();
}

void deleteQuettaVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f29("VictimFloodQuetta.dat", ios::in);
	ofstream outFile("Temp29.dat", ios::out);

	bool found = false;

	while (f29.read((char*)&victimFloodQuetta, sizeof(Victims)))
	{
		if (victimFloodQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodQuetta.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimFloodQuetta, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimFloodQuetta, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimFloodQuetta.dat");
		rename("Temp29.dat", "VictimFloodQuetta.dat");
		cout << "Record deleted successfully.\n";
	}

	f29.close();
}

void deletePeshawarVictimFloodRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number record of Flood Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f30("VictimFloodPeshawar.dat", ios::in);
	ofstream outFile("Temp30.dat", ios::out);

	bool found = false;

	while (f30.read((char*)&victimFloodPeshawar, sizeof(Victims)))
	{
		if (victimFloodPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimFloodPeshawar.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimFloodPeshawar, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimFloodPeshawar, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimFloodPeshawar.dat");
		rename("Temp30.dat", "VictimFloodPeshawar.dat");
		cout << "Record deleted successfully.\n";
	}

	f30.close();
}

void deleteIslamabadVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f31("VictimVolcanoIslamabad.dat", ios::in);
	ofstream outFile("Temp31.dat", ios::out);

	bool found = false;

	while (f31.read((char*)&victimVolcanoIslamabad, sizeof(Victims)))
	{
		if (victimVolcanoIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoIslamabad.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimVolcanoIslamabad, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimVolcanoIslamabad, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimVolcanoIslamabad.dat");
		rename("Temp31.dat", "VictimVolcanoIslamabad.dat");
		cout << "Record deleted successfully.\n";
	}

	f31.close();
}

void deleteLahoreVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f32("VictimVolcanoLahore.dat", ios::in);
	ofstream outFile("Temp32.dat", ios::out);

	bool found = false;

	while (f32.read((char*)&victimVolcanoLahore, sizeof(Victims)))
	{
		if (victimVolcanoLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoLahore.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimVolcanoLahore, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimVolcanoLahore, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimVolcanoLahore.dat");
		rename("Temp32.dat", "VictimVolcanoLahore.dat");
		cout << "Record deleted successfully.\n";
	}

	f32.close();
}

void deleteKarachiVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f33("VictimVolcanoKarachi.dat", ios::in);
	ofstream outFile("Temp33.dat", ios::out);

	bool found = false;

	while (f33.read((char*)&victimVolcanoKarachi, sizeof(Victims)))
	{
		if (victimVolcanoKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoKarachi.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimVolcanoKarachi, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimVolcanoKarachi, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimVolcanoKarachi.dat");
		rename("Temp33.dat", "VictimVolcanoKarachi.dat");
		cout << "Record deleted successfully.\n";
	}

	f33.close();
}

void deleteQuettaVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f34("VictimVolcanoQuetta.dat", ios::in);
	ofstream outFile("Temp34.dat", ios::out);

	bool found = false;

	while (f34.read((char*)&victimVolcanoQuetta, sizeof(Victims)))
	{
		if (victimVolcanoQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			// Display or perform action on the found record
			cout << "Record Found:\n";
			victimVolcanoQuetta.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimVolcanoQuetta, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimVolcanoQuetta, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		// Rename the temporary file to the original file
		remove("VictimVolcanoQuetta.dat");
		rename("Temp34.dat", "VictimVolcanoQuetta.dat");
		cout << "Record deleted successfully.\n";
	}

	f34.close();
}
// will correct from this area
void deletePeshawarVictimVolcanoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Volcanic Erruption Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f35("VictimVolcanoPeshawar.dat", ios::in);
	ofstream outFile("Temp35.dat", ios::out);

	bool found = false;

	while (f35.read((char*)&victimVolcanoPeshawar, sizeof(Victims)))
	{
		if (victimVolcanoPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimVolcanoPeshawar.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimVolcanoPeshawar, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimVolcanoPeshawar, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimVolcanoPeshawar.dat");
		rename("Temp35.dat", "VictimVolcanoPeshawar.dat");
		cout << "Record deleted successfully.\n";
	}

	f35.close();
}

void deleteIslamabadVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Islamabad you want to delete:-- ";
	cin >> searchID;
	ifstream f36("VictimTornadoIslamabad.dat", ios::in);
	ofstream outFile("Temp36.dat", ios::out);

	bool found = false;

	while (f36.read((char*)&victimTornadoIslamabad, sizeof(Victims)))
	{
		if (victimTornadoIslamabad.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimTornadoIslamabad.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimTornadoIslamabad, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimTornadoIslamabad, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimTornadoIslamabad.dat");
		rename("Temp36.dat", "VictimTornadoIslamabad.dat");
		cout << "Record deleted successfully.\n";
	}

	f36.close();
}

void deleteLahoreVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Lahore you want to delete:-- ";
	cin >> searchID;
	ifstream f37("VictimTornadoLahore.dat", ios::in);
	ofstream outFile("Temp37.dat", ios::out);

	bool found = false;

	while (f37.read((char*)&victimTornadoLahore, sizeof(Victims)))
	{
		if (victimTornadoLahore.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimTornadoLahore.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimTornadoLahore, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimTornadoLahore, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimTornadoLahore.dat");
		rename("Temp37.dat", "VictimTornadoLahore.dat");
		cout << "Record deleted successfully.\n";
	}

	f37.close();
}


void deleteKarachiVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Karachi you want to delete:-- ";
	cin >> searchID;
	ifstream f38("VictimTornadoKarachi.dat", ios::in);
	ofstream outFile("Temp38.dat", ios::out);

	bool found = false;

	while (f38.read((char*)&victimTornadoKarachi, sizeof(Victims)))
	{
		if (victimTornadoKarachi.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimTornadoKarachi.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimTornadoKarachi, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimTornadoKarachi, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimTornadoKarachi.dat");
		rename("Temp38.dat", "VictimTornadoKarachi.dat");
		cout << "Record deleted successfully.\n";
	}

	f38.close();
}

void deleteQuettaVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Quetta you want to delete:-- ";
	cin >> searchID;
	ifstream f39("VictimTornadoQuetta.dat", ios::in);
	ofstream outFile("Temp39.dat", ios::out);

	bool found = false;

	while (f39.read((char*)&victimTornadoQuetta, sizeof(Victims)))
	{
		if (victimTornadoQuetta.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimTornadoQuetta.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimTornadoQuetta, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimTornadoQuetta, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimTornadoQuetta.dat");
		rename("Temp39.dat", "VictimTornadoQuetta.dat");
		cout << "Record deleted successfully.\n";
	}

	f39.close();
}

void deletePeshawarVictimTornadoRecord()
{
	string searchID;
	cout << "\nEnter the Victims Record number Tornado in Peshawar you want to delete:-- ";
	cin >> searchID;
	ifstream f40("VictimTornadoPeshawar.dat", ios::in);
	ofstream outFile("Temp40.dat", ios::out);

	bool found = false;

	while (f40.read((char*)&victimTornadoPeshawar, sizeof(Victims)))
	{
		if (victimTornadoPeshawar.getVictimRecordNumber() == searchID)
		{
			found = true;
			cout << "Record Found and Deleted:\n";
			victimTornadoPeshawar.getVictimRecordNumber();
			char confirmDelete;
			cout << "Do you want to delete this record? (y/n): ";
			cin >> confirmDelete;
			if (confirmDelete == 'n' || confirmDelete == 'N')
			{
				outFile.write((char*)&victimTornadoPeshawar, sizeof(Victims));
			}
		}
		else
		{
			outFile.write((char*)&victimTornadoPeshawar, sizeof(Victims));
		}
	}
	outFile.close();

	if (!found)
	{
		cout << "Record not found.\n";
	}
	else
	{
		remove("VictimTornadoPeshawar.dat");
		rename("Temp40.dat", "VictimTornadoPeshawar.dat");
		cout << "Record deleted successfully.\n";
	}

	f40.close();
}

void DisasterOrVictimsMenu_Admin()
{
	system("cls");
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
	Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              1.Add Disaster Record                             |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              2.Read Disaster Record                            |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              3.Search Disaster Record                          |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              4.Delete Victim Record                            |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              5.Add Victim   Record                             |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              6.Read Victim  Record                             |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              7.Search Victim Record                            |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              8.Delete Victim Record                            |";
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";

}
void DisasterOrVictimsMenu_User()
{

	system("cls");
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
	Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              1.Read Disaster Record                            |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              2.Read Victim Record                              |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              3.Search Disaster Record                          |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              4. Search Victim Record                           |";
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";


}
void showcity()
{
	system("cls");
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
	Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              1.Islamabad                                       |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              2.Lahore                                          |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              3.Karachi                                         |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              4.Quetta                                          |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                                                                                |";
	Sleep(250); cout << "\n\t\t\t|                              5.Peshawar                                        |";
	Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";

}
void Disaster_Menu_Admin()
{
	char chh;
	do {
		system("cls");
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              1.Earthquake                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              2.Flood                                           |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              3.Volcano                                         |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              4.Tornado                                         |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t\t\t\t\tSelect Disaster Type: : ";
		int choice;
		cin >> choice;



		if (choice == 1)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Earthquake:----";
				cin >> c;

				if (c == 1)
				{
					addIslamabadDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readIslamabadDisasterEarthQuakeRecord();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					deleteIslamabadDisasterEarthquakeRecord();
				}
				else if (c == 5)
				{
					addVictimEarthIslamabad();
				}
				else if (c == 6)
				{
					readVictimEarthIslamabad();
				}
				else if (c == 7)
				{
					searchIslamabadVictimEarthRecord();
				}
				else if (c == 8)
				{
					deleteIslamabadVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					addLahoreDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readLahoreDisasterEarthQuakeRecord();
				}
				else if (c == 3)
				{
					searchLahoreDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					deleteLahoreDisasterEarthquakeRecord();
				}
				else if (c == 5)
				{
					addVictimEarthLahore();
				}
				else if (c == 6)
				{
					readVictimEarthLahore();
				}
				else if (c == 7)
				{
					searchLahoreVictimEarthRecord();
				}
				else if (c == 8)
				{
					deleteLahoreVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					addKarachiDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readKarachiDisasterEarthQuakeRecord();
				}
				else if (c == 3)
				{
					searchKarachiDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					deleteKarachiDisasterEarthquakeRecord();
				}

				else if (c == 5)
				{
					addVictimEarthKarachi();
				}
				else if (c == 6)
				{
					readVictimEarthKarachi();
				}
				else if (c == 7)
				{
					searchKarachiVictimEarthRecord();
				}
				else if (c == 8)
				{
					deleteKarachiVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					addQuettaDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readQuettaDisasterEarthQuakeRecord();
				}
				else if (c == 3)
				{
					searchQuettaDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					deleteQuettaDisasterEarthquakeRecord();
				}
				else if (c == 5)
				{
					addVictimEarthQuetta();
				}
				else if (c == 6)
				{
					readVictimEarthQuetta();
				}
				else if (c == 7)
				{
					searchQuettaVictimEarthRecord();
				}
				else if (c == 8)
				{
					deleteQuettaVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					addPeshawarDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readPeshawarDisasterEarthQuakeRecord();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					deletePeshawarDisasterEarthquakeRecord();
				}
				else if (c == 5)
				{
					addVictimEarthPeshawar();
				}
				else if (c == 6)
				{
					readVictimEarthPeshawar();
				}
				else if (c == 7)
				{
					searchPeshawarVictimEarthRecord();
				}
				else if (c == 8)
				{
					deletePeshawarVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 2)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					addIslamabadDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readIslamabadDisasterFloodRecord();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterFloodRecord();
				}
				else if (c == 4)
				{
					deleteIslamabadDisasterFloodRecord();
				}
				else if (c == 5)
				{
					addVictimFloodIslamabad();
				}
				else if (c == 6)
				{
					readVictimFloodIslamabad();
				}
				else if (c == 7)
				{
					searchIslamabadVictimFloodRecord();
				}
				else if (c == 8)
				{
					deleteIslamabadVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					addLahoreDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readLahoreDisasterFloodRecord();
				}
				else if (c == 3)
				{
					searchLahoreDisasterFloodRecord();
				}
				else if (c == 4)
				{
					deleteLahoreDisasterFloodRecord();
				}
				else if (c == 5)
				{
					addVictimFloodLahore();
				}
				else if (c == 6)
				{
					readVictimFloodLahore();
				}
				else if (c == 7)
				{
					searchLahoreVictimFloodRecord();
				}
				else if (c == 8)
				{
					deleteLahoreVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					addKarachiDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readKarachiDisasterFloodRecord();
				}
				else if (c == 3)
				{
					searchKarachiDisasterFloodRecord();
				}
				else if (c == 4)
				{
					deleteKarachiDisasterFloodRecord();
				}
				else if (c == 5)
				{
					addVictimFloodKarachi();
				}
				else if (c == 6)
				{
					readVictimFloodKarachi();
				}
				else if (c == 7)
				{
					searchKarachiVictimFloodRecord();
				}
				else if (c == 8)
				{
					deleteKarachiVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					addQuettaDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readQuettaDisasterFloodRecord();
				}
				else if (c == 3)
				{
					searchQuettaDisasterFloodRecord();
				}
				else if (c == 4)
				{
					deleteQuettaDisasterFloodRecord();
				}
				else if (c == 5)
				{
					addVictimFloodQuetta();
				}
				else if (c == 6)
				{
					readVictimFloodQuetta();
				}
				else if (c == 7) 
				{
					searchQuettaVictimFloodRecord();
				}
				else if (c == 8)
				{
					deleteQuettaVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					addPeshawarDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readPeshawarDisasterFloodRecord();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterFloodRecord();
				}
				else if (c == 4)
				{
					deletePeshawarDisasterFloodRecord();
				}
				else if (c == 5)
				{
					addVictimFloodPeshawar();
				}
				else if (c == 6)
				{
					readVictimFloodPeshawar();
				}
				else if (c == 7)
				{
					searchPeshawarVictimEarthRecord();
				}
				else if (c == 8)
				{
					deletePeshawarVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 3)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					addIslamabadDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readIslamabadDisasterVolcanoRecord();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					deleteIslamabadDisasterVolcanoRecord();
				}
				else if (c == 5)
				{
					addVictimVolcanoIslamabad();
				}
				else if (c == 6)
				{
					readVictimVolcanoIslamabad();
				}
				else if (c == 7)
				{
					searchIslamabadVictimVolcanoRecord();
				}
				else if (c == 8)
				{
					deleteIslamabadVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					addLahoreDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readLahoreDisasterVolcanoRecord();
				}
				else if (c == 3)
				{
					searchLahoreDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					deleteLahoreDisasterVolcanoRecord();
				}
				else if (c == 5)
				{
					addVictimVolcanoLahore();
				}
				else if (c == 6)
				{
					readVictimVolcanoLahore();
				}
				else if (c == 7)
				{
					searchLahoreVictimVolcanoRecord();
				}
				else if (c == 8)
				{
					deleteLahoreVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					addKarachiDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readKarachiDisasterVolcanoRecord();
				}
				else if (c == 3)
				{
					searchKarachiDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					deleteKarachiDisasterVolcanoRecord();
				}
				else if (c == 5)
				{
					addVictimVolcanoKarachi();
				}
				else if (c == 6)
				{
					readVictimVolcanoKarachi();
				}
				else if (c == 7)
				{
					searchKarachiVictimVolcanoRecord();
				}
				else if (c == 8)
				{
					deleteKarachiVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					addQuettaDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readQuettaDisasterVolcanoRecord();
				}
				else if (c == 3)
				{
					searchQuettaDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					deleteQuettaDisasterVolcanoRecord();
				}
				else if (c == 5)
				{
					addVictimVolcanoQuetta();
				}
				else if (c == 6)
				{
					readVictimVolcanoQuetta();
				}
				else if (c == 7)
				{
					searchQuettaVictimVolcanoRecord();
				}
				else if (c == 8)
				{
					deleteQuettaVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					addPeshawarDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readPeshawarDisasterVolcanoRecord();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					deletePeshawarDisasterVolcanoRecord();
				}
				else if (c == 5)
				{
					addVictimVolcanoPeshawar();
				}
				else if (c == 6)
				{
					readVictimVolcanoPeshawar();
				}
				else if (c == 7)
				{
					searchPeshawarVictimVolcanoRecord();
				}
				else if (c == 8)
				{
					deletePeshawarVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 4)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					addIslamabadDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readIslamabadDisasterTornadoRecord();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					deleteIslamabadDisasterTornadoRecord();
				}
				else if (c == 5)
				{
					addVictimTornadoIslamabad();
				}
				else if (c == 6)
				{
					readVictimTornadoIslamabad();
				}
				else if (c == 7)
				{
					searchIslamabadVictimTornadoRecord();
				}
				else if (c == 8)
				{
					deleteIslamabadVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					addLahoreDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readLahoreDisasterTornadoRecord();
				}
				else if (c == 3)
				{
					searchLahoreDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					deleteLahoreDisasterTornadoRecord();
				}
				else if (c == 5)
				{
					addVictimTornadoLahore();
				}
				else if (c == 6)
				{
					readVictimTornadoLahore();
				}
				else if (c == 7)
				{
					searchLahoreVictimTornadoRecord();
				}
				else if (c == 8)
				{
					deleteLahoreVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					addKarachiDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readKarachiDisasterTornadoRecord();
				}
				else if (c == 3)
				{
					searchKarachiDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					deleteKarachiDisasterTornadoRecord();
				}
				else if (c == 5)
				{
					addVictimTornadoKarachi();
				}
				else if (c == 6)
				{
					readVictimTornadoKarachi();
				}
				else if (c == 7)
				{
					searchKarachiVictimTornadoRecord();
				}
				else if (c == 8)
				{
					searchKarachiVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					addQuettaDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readQuettaDisasterTornadoRecord();
				}
				else if (c == 3)
				{
					searchQuettaDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					deleteQuettaDisasterTornadoRecord();
				}
				else if (c == 5)
				{
					addVictimEarthQuetta();
				}
				else if (c == 6)
				{
					readVictimTornadoQuetta();
				}
				else if (c == 7)
				{
					searchQuettaVictimTornadoRecord();
				}
				else if (c == 8)
				{
					deleteQuettaVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_Admin();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					addPeshawarDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readPeshawarDisasterTornadoRecord();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					deletePeshawarDisasterTornadoRecord();
				}
				else if (c == 5)
				{
					addVictimTornadoPeshawar();
				}
				else if (c == 6)
				{
					readVictimTornadoPeshawar();
				}
				else if (c == 7)
				{
					searchPeshawarVictimTornadoRecord();
				}
				else if (c == 8)
				{
					deletePeshawarVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 5)
		{
			exit(0);

		}
		else
		{


			cout << "\nwrong";
		}
		cout << "\nDo you want to exit from Admin menu?? Press n to exit:  ";
		cin >> chh;
	} while (chh != 'n');
}
void Disaster_Menu_User()
{
	char chh;
	do {
		system("cls");
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              1.Earthquake                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              2.Flood                                           |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              3.Volcano                                         |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              4.Tornado                                         |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                               5- Exit                                          |";
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		int choice;
		cout << "\n\nSelect Disaster Type: ";
		cin >> choice;



		if (choice == 1)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					readIslamabadDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readVictimEarthIslamabad();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterEarthquakeRecord();
				}
				else if (c == 3)
				{
					searchIslamabadVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					readLahoreDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readVictimEarthLahore();
				}
				else if (c == 3)
				{
					searchLahoreDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					searchLahoreVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					readKarachiDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readVictimEarthKarachi();
				}
				else if (c == 3)
				{
					searchKarachiDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					searchKarachiVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					readQuettaDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readVictimEarthQuetta();
				}
				else if (c == 3)
				{
					searchQuettaDisasterEarthquakeRecord();
				}
				else if (c == 3)
				{
					searchQuettaVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Earthquake:----";
				cin >> c;
				if (c == 1)
				{
					readPeshawarDisasterEarthQuakeRecord();
				}
				else if (c == 2)
				{
					readVictimEarthPeshawar();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterEarthquakeRecord();
				}
				else if (c == 4)
				{
					searchPeshawarVictimEarthRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 2)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					readIslamabadDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readVictimFloodIslamabad();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterFloodRecord();
				}
				else if (c == 4)
				{
					searchIslamabadVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					readLahoreDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readVictimFloodLahore();
				}
				else if (c == 3)
				{
					searchLahoreDisasterFloodRecord();
				}
				else if (c == 4)
				{
					searchLahoreVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					readKarachiDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readVictimFloodKarachi();
				}
				else if (c == 3)
				{
					searchKarachiDisasterFloodRecord();
				}
				else if (c == 4)
				{
					searchKarachiVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					readQuettaDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readVictimFloodQuetta();
				}
				else if (c == 3)
				{
					searchQuettaDisasterFloodRecord();
				}
				else if (c == 4)
				{
					searchQuettaVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Flood:----";
				cin >> c;
				if (c == 1)
				{
					readPeshawarDisasterFloodRecord();
				}
				else if (c == 2)
				{
					readVictimFloodPeshawar();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterFloodRecord();
				}
				else if (c == 4)
				{
					searchPeshawarVictimFloodRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 3)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					readIslamabadDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readVictimVolcanoIslamabad();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					searchIslamabadVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					readLahoreDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readVictimVolcanoLahore();
				}
				else if (c == 3)
				{
					searchLahoreDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					searchLahoreVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					readKarachiDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readVictimVolcanoKarachi();
				}
				else if (c == 3)
				{
					searchKarachiDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					searchKarachiVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					readQuettaDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readVictimVolcanoQuetta();
				}
				else if (c == 3)
				{
					searchQuettaDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					searchQuettaVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Volcano:----";
				cin >> c;
				if (c == 1)
				{
					readPeshawarDisasterVolcanoRecord();
				}
				else if (c == 2)
				{
					readVictimVolcanoPeshawar();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterVolcanoRecord();
				}
				else if (c == 4)
				{
					searchPeshawarVictimVolcanoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 4)
		{
			showcity();
			int cho;
			cout << "\n\nSelect City from the above menu: ";
			cin >> cho;
			if (cho == 1)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Islamabad DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					readIslamabadDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readVictimTornadoIslamabad();
				}
				else if (c == 3)
				{
					searchIslamabadDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					searchIslamabadVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 2)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Lahore DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					readLahoreDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readVictimTornadoLahore();
				}
				else if (c == 3)
				{
					searchLahoreDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					searchLahoreVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 3)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Karachi DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					readKarachiDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readVictimTornadoKarachi();
				}
				else if (c == 3)
				{
					searchKarachiDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					searchKarachiVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 4)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Quetta DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					readQuettaDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readVictimTornadoQuetta();
				}
				else if (c == 3)
				{
					searchQuettaDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					searchQuettaVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
			else if (cho == 5)
			{
				DisasterOrVictimsMenu_User();
				int c;
				cout << "\nWhich type of operation do you want to perform for Peshawar DMS Panel for Tornado:----";
				cin >> c;
				if (c == 1)
				{
					readPeshawarDisasterTornadoRecord();
				}
				else if (c == 2)
				{
					readVictimTornadoPeshawar();
				}
				else if (c == 3)
				{
					searchPeshawarDisasterTornadoRecord();
				}
				else if (c == 4)
				{
					searchPeshawarVictimTornadoRecord();
				}
				else
					cout << "\nPlease input correct command";
			}
		}
		else if (choice == 5)
		{
			exit(0);
		}
		else
			cout << "\nPlease input correct disaster command";

		cout << "\n\nDo you want to exit from user menu? Press n to exit:  ";
		cin >> chh;

	} while (chh != 'n');
}
class Feedback
{
protected:
	string name;
	string email;
	string feedback;
public:
	Feedback()
	{
		name = "";
		email = "";
		feedback = "";
	}

	void getDetails()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your email: ";
		cin >> email;
		cout << "Enter your feedback: ";
		cin >> feedback;
	}

	void showDetails()
	{
		Sleep(250); cout << "Name: " << name << endl;
		Sleep(250); cout << "Email: " << email << endl;
		Sleep(250); cout << "Feedback: " << feedback << endl;
	}

	string getName()
	{
		return name;
	}

	string getEmail()
	{
		return email;
	}

	string getFeedback()
	{
		return feedback;
	}
	void customerdetails() {};
	void TICKET() {};
};

void writeToFile(Feedback f)
{
	ofstream outFile;
	outFile.open("feedback.dat", ios::binary | ios::app);
	outFile.write(reinterpret_cast<char*>(&f), sizeof(Feedback));
	outFile.close();
}

void readFromFile(Feedback f)
{
	//EXCEPTION HANDLING!
	try
	{

		ifstream feedbackFile("feedback.dat");

		if (feedbackFile.is_open())
		{

			string feedbackData;

			while (getline(feedbackFile, feedbackData))
			{

				cout << feedbackData << endl;
			}

			feedbackFile.close();
		}
		else
		{

			throw runtime_error("Unable to open file");
		}
	}
	catch (runtime_error& ex)
	{
		//Catch any runtime exceptions
		cout << ex.what() << endl;
	}

}


int main()
{
	int choice;
	system("color AF");
MENU:
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<****<-D-I-S-A-S-T-E-R>***>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<***|<<<<<<<>>>>>>>|**>>>>>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<***<-M-A-N-G-E-M-E-N-T>***>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<******<-S-Y-S-T-E-M->******>>>>>>>" << endl;
	Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	Sleep(250); cout << "\t\t\t\t\t\t    WELCOME TO OUR APP" << endl;
	cout << "\t\t\t\t\t\t";

	system("pause");
	system("cls");
	user u;
	u.Login();

	cout << endl;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 12);
	/*
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              1.ADMIN                                           |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              2.USER                                            |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              3.FEEDBACK                                        |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              4.EXIT                                            |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
		cin >> choice; */
	char ch;
	do {
		system("CLS");
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t|                                      MENU                                      |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              1.ADMIN                                           |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              2.USER                                            |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              3.FEEDBACK                                        |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|                              4.EXIT                                            |";
		Sleep(250); cout << "\n\t\t\t|                                                                                |";
		Sleep(250); cout << "\n\t\t\t|--------------------------------------------------------------------------------|";
		Sleep(250); cout << "\n\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
		cin >> choice;
		cout << "\n\n\n";
		if (choice == 1)
		{
			Disaster_Menu_Admin();
		}
		else if (choice == 2)
		{
			Disaster_Menu_User();
		}
		else if (choice == 3) {
			Feedback f;
			int choice;
			system("cls");
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 12);
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<****<-D-I-S-A-S-T-E-R>***>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<***|<<<<<<<>>>>>>>|**>>>>>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<***<-M-A-N-G-E-M-E-N-T>***>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<******<-S-Y-S-T-E-M->******>>>>>>>" << endl;
			Sleep(250); cout << "\t\t\t\t\t<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
			do
			{
				cout << "\n1. Add Feedback\n2. View Feedback\n3. Exit\nEnter choice: ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					f.getDetails();
					writeToFile(f);
					break;
				case 2:
					readFromFile(f);
					break;
				case 3:
					system("cls");
					goto MENU;
					break;
				default:
					cout << "Invalid choice\n";
				}
			} while (choice != 4);
		}
		else
		{
			break;
		}
		cout << "\n\nDo you want continue?? n/N to exit from the system: ";
		cin >> ch;
	} while (ch != 'n');

}




