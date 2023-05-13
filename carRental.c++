#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;
//CAR RENTAL PROGRAM
class Time
{
private:
int hour;
int minute;
int second;
public:
int getHour() { return hour; }
int getMinute() { return minute; }
int getSecond() { return second; }
//constructor with default value 0
Time(int h = 0, int m = 0, int s = 0);
//setter function
void setTime(int h, int m, int s);
//print description of object in hh:mm:ss
void print();
void inputTime() {
cout << "Input the Time in format: h/m/s" << endl;
cin >> hour; cin >> minute; cin >> second;
}
};
Time::Time(int h, int m, int s)
{
hour = h;
minute = m;
second = s;
}
void Time::setTime(int h, int m, int s)
{
hour = h;
minute = m;
second = s;
}
void Time::print()
{
cout << setw(2) << setfill('0') << hour << ":"
<< setw(2) << setfill('0') << minute << ":"
<< setw(2) << setfill('0') << second << "\n";
}
class Date
{
public:
Date(int m = 1, int d = 1, int y = 1900);
void print() const;
void inputDate();
int getDay() { return day; }
int getMonth() { return month; }
int getYear() { return year; }
int calculateDays(Date d1, Date d2) {
/*int days1;
days1 = d2.year - d1.year;
if (days1 == !0) {
days1 = days1 * 365;
}
int days2; days2 = d2.month - d1.month;
if (days2 == !0) {
days2 = days2 * 30;
}
int days3; days3 = d2.day - d1.day;
int days;
days = days1 + days2 + days3;
return days;*/
int days2; int days1; int days;
days2 = (d2.month * 30) + (d2.day) + (d2.year * 365);
days1 = (d1.month * 30) + (d1.day) + (d1.year * 365);
days = days2 - days1;
return days;
}
private:
int month;
int day;
int year;
};
Date::Date(int mn, int dy, int yr)
{
month = mn;
year = yr;
day = dy;
}
void Date::inputDate() {
cout << "Input the date in format: M/D/Y: ";
cin >> month >> day >> year;
}
void Date::print() const
{
cout << month << '/' << day << '/' << year;
}
class Location {
private:
string location;
public:
Location(string location = "") {
this->location = location;
}
void setLocation(string location) {
this->location = location;
}
string getLocation() { return location; }
void InputLocation() {
cout << "Pick-up Location (City, State, Airport) : ";
cin >> location;
}
void printLocation() {
cout << "Location: " << location << endl;
}
};
class Car {
protected:
string make;
string model;
string fuelType;
int pricePerDayRent;
int year;
public:
Car(string make="",string model = "", string fuelType = "", int price = 0,int year=0) {
 this->make=make;
this->model = model;
this->fuelType = fuelType;
this->pricePerDayRent = price;
this->year=year;
}
void setMake(string make){this->make=make;}
string getMake(){return make;}
void setModel(string mdl) { model = mdl; }
string getModel() { return model; }
void setFuelType(string fT) { fuelType = fT; }
string getFuelType() { return fuelType; }
void setPriceOfRentPerDay(int price) { pricePerDayRent = price; }
int getRentPrice() { return pricePerDayRent; }
void setYear(int year){this->year=year;}
int getYear(){return year;}
friend void setCarType();
};
class familyCar :public Car {
private:
int nOoFpassengerSeats;
int nOoFdoors;
public:
familyCar(string make="",string model = "",int year=0, string fuelType = "", int price = 3000, int
nOseats = 0, int nOoFdoors = 0) {
this->make=make;this->model = model;this->year=year; this->fuelType = fuelType; this-
>pricePerDayRent = price; nOoFpassengerSeats = nOseats; this->nOoFdoors = nOoFdoors;
}
void setNumberofSeats(int nOfs) {
nOoFpassengerSeats = nOfs;
}
int getNoFseats() {
return nOoFpassengerSeats;
}
int getNoOfdoors() {
return nOoFdoors;
}
void familyCarInput() {
cout << "Given below are Makes You can pick from: " << endl;
cout << "Suzuki GMCYUKON Toyota " << endl;
cout << "Enter the make you want: ";
cin >> make;
if (make == "Suzuki") {
 cout<<"Now enter the model you desire: "<<endl;
 cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
 cin>>model;
 if(model=="Cultus"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 10000;
fuelType = "diesel";
nOoFpassengerSeats = 7;
nOoFdoors = 5;
 }
 else if(model=="Alto"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 10000;
fuelType = "diesel";
nOoFpassengerSeats = 5;
nOoFdoors = 4;

 }
}
else if (make == "GMCYUKON") {
cout<<"Now enter the model you desire: "<<endl;
cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
 cin>>model;
 if(model=="SLE"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 8000;
fuelType = "petrol";
nOoFpassengerSeats = 7;
nOoFdoors = 6;
 }
 else if(model=="SLT"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 8000;
fuelType = "petrol";
nOoFpassengerSeats = 6;
nOoFdoors = 8;

 }
}
else if(make=="Toyota"){
 cout<<"Now enter the model you desire: "<<endl;
 cout<<"Select from the above list the model you want and enter the exact words:
"<<endl;
 cin>>model;
 if(model=="RAV4"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 20000;
fuelType = "diesel";
nOoFpassengerSeats = 6;
nOoFdoors = 4;
 }
 else if(model=="Innova"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent=15000;
 fuelType="petrol";
 nOoFpassengerSeats=7;
 nOoFdoors=5;
 }
 else if(model=="PriusV"){
 cout<<"Now enter the Year version you want: "<<endl;
 cin>>year;
 pricePerDayRent = 13000;
fuelType = "petrol";
nOoFpassengerSeats = 6;
nOoFdoors = 8;

 }
}
else cout << "Sorry Such model is not available";
}
void familyCarPrint() {
 cout<<"Make : "<<make<<endl;
cout << "Model : " << model << endl;
cout << "Fuel type: " << fuelType << endl;
cout << "# of seats: " << nOoFpassengerSeats << endl;
cout << "# of doors: " << nOoFdoors << endl;
}
};
class Luxury :public Car {
private:
int nOofSeatCoolers;
string antiTheftTechnology;
int noOfSeatMassagers;
int hiddenDoorPocket;
public:
Luxury(string make="",string model = "",int year=0, string fuelType = "", int price = 3000,int
noCoolers = 1, string ATC = "OnStar", int noMassagers = 1, int hDP = 1) {
make=make;this->model = model;this->year=year; this->fuelType = fuelType; this-
>pricePerDayRent = price; nOofSeatCoolers = noCoolers; antiTheftTechnology = ATC;
noOfSeatMassagers = noMassagers; hiddenDoorPocket = hDP;
}
void LuxuryInput() {
cout << "Given below are Makes you can pick from, select one and review the details for
confirmation: " << endl;
cout << "AUDI BMW MERCIDES" << endl;
cin>>make;
if(make=="AUDI"){
cout<<"Now select the model you want: "<<endl;
cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
cin >> model;
if (model == "A6") {
 cout<<"Now enter the year version you desire: "<<endl;
 cin>>year;
fuelType = "diesel";
pricePerDayRent = 30000;
nOofSeatCoolers = 2;
noOfSeatMassagers = 1;
hiddenDoorPocket = 0;
}
else if (model == "A5") {
fuelType = "diesel";
pricePerDayRent = 25000;
nOofSeatCoolers = 1;
noOfSeatMassagers = 0;
hiddenDoorPocket = 0;
}
}
else if (make == "BMW") {
 cout<<"Now select the model you want: "<<endl;
 cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
 cin>>model;
 if(model=="5Series"){
 cout<<"Enter the year version you desire: "<<endl;
 cin>>year;
fuelType = "premium_unleaded_fuel";
pricePerDayRent =30000;
nOofSeatCoolers = 2;
noOfSeatMassagers = 3;
hiddenDoorPocket = 2;
}
else if(model=="3Series"){
 cout<<"Enter the year version you desire: "<<endl;
 cin>>year;
 fuelType = "premium_unleaded_fuel";
pricePerDayRent =35000;
nOofSeatCoolers = 1;
noOfSeatMassagers = 2;
hiddenDoorPocket = 1;
}
}
else if(make=="MERCIDES") {
 cout<<"Now select the model you want: "<<endl;
 cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
 cin>>model;
 if(model=="BENZ_C"){
 cout<<"Enter the year version you want "<<endl; cin>>year;
fuelType=="premium_unleaded_gasoline";
pricePerDayRent=25000;
nOofSeatCoolers=2;
noOfSeatMassagers=2;
hiddenDoorPocket=0;
 }
 else if(model=="BENZ_E"){
 cout<<"Enter the year version you want "<<endl; cin>>year;
fuelType=="premium_unleaded_gasoline";
pricePerDayRent=40000;
nOofSeatCoolers=4;
noOfSeatMassagers=2;
hiddenDoorPocket=0;
 }
}
else cout << "N/A";
}
void luxuryCarPrint(){
 cout<<"Make: "<<make<<endl;
 cout<<"Model: "<<model<<endl;
 cout<<"Fuel type: "<<fuelType<<endl;
 cout<<"pricePerDayRent: "<<pricePerDayRent<<endl;
 cout<<"nOofSeatCoolers; "<<nOofSeatCoolers <<endl;
 cout<<"noOfSeatMassagers: "<<noOfSeatMassagers<<endl;
 cout<<" hiddenDoorPocket: "<< hiddenDoorPocket<<endl;
}
};
class Vans: public Car{
private:
int capacity;
float weight;
bool freeWifi;
public:
Vans(string make="",string model = "",int year=0, string fuelType = "", int price = 3000,int
capacity=0,float weight=0)
{ make=make;this->model = model;this->year=year; this->fuelType = fuelType; this-
>pricePerDayRent = price; this->capacity=capacity; this->weight=weight; }
void VansInput(){
cout<<"Given below are Makes you can pick from "<<endl<<" Toyota Suzuki "<<endl;
cin>>make;
if(make=="Toyota"){
 cout<<"Now enter the model you want "<<endl;
 cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
 cin>>model;
 if(model=="GRANVIA"){
 cout<<"The 2020 model has been selected"<<endl;
 fuelType = "diesel";
pricePerDayRent =14000;
 weight=1950;
 capacity=8;

 }else if(model=="Hiace"){
 cout<<"Now select the generation based on the year version you type "<<endl;
 cin>>year;
 fuelType="diesel";
 pricePerDayRent=16000;
 weight=2600;
 capacity=15;
}}
else if(make=="Suzuki"){
cout<<"Now enter the model you want "<<endl;
cout<<"Select from the above list the model you want and enter the exact words: "<<endl;
cin>>model;
if(model=="APV"){
 cout<<"This comes with 2009 model 5 door style"<<endl;
 fuelType="petrol";
 pricePerDayRent=12000;
 weight=1340;
 capacity=8;
}
}
}
void VansPrint(){
 cout<<"Make: "<<make<<endl;
 cout<<"Model: "<<model<<endl;
 cout<<"Fuel type: "<<fuelType<<endl;
 cout<<"pricePerDayRent: "<<pricePerDayRent<<endl;
 cout<<"weight: "<<weight<<endl;
 cout<<"capacity: "<<capacity<<endl;
 cout<<"pricePerDayRent: "<<pricePerDayRent<<endl;

}
};
class Rent {
private:
Car need;
Time timeofStart;
Time timeofEnd;
Date daTeofStart;
Date daTeofEnd;
Location pickUp;
public:
void setRent(Car nd, Date dOS, Time tOs, Date dOE, Time tOE, Location pU) { need = nd;
daTeofStart = dOS; timeofStart = tOs; daTeofEnd = dOE; timeofEnd = tOE; pickUp = pU; }
int calculateRent(int n) {
int rent;
rent = need.getRentPrice() * n;
return rent;
}
};
class user {
    char name[20];
double cellNumber;
string emailAddress;
string passportNumber;
public:
void userInput() {
cout << "Enter your name: "; cin.getline(name,20);
cout << "Enter your cell# : "; cin >> cellNumber;
cout << "Enter your email Address: "; cin >> emailAddress;
cout<<"Note: You are required to have a driving license validated for atleast 2 years
"<<endl<<"Enter your passport number so that we verify it through your local traffic police
authorities "<<endl; cin>>passportNumber;
}
void printUser() {
cout << "User name is: " << name << endl;
cout << "Cell number: " << cellNumber << endl;
cout << "Email Address: " << emailAddress << endl;
cout<<"Passport_Number: "<<passportNumber<<endl;
}
};
void setCarType(familyCar& fff, Luxury& lll,Vans& vvv) {
cout << "Select the car Type you desire: " << endl;
string Type;
cin >> Type;
if (Type == "familyCar") {
fff.familyCarInput();
}
else if (Type == "luxuryCar") {
lll.LuxuryInput();
}
else if(Type=="Vans"){
 vvv.VansInput();
}
}
void FamilymodelDisplay() {
cout << "Make: Suzuki"<<endl<<
"model: Cultus " << endl <<
"pricePerDayRent = 10000" << endl <<
"fuelType = diesel" << endl <<
"nOoFpassengerSeats = 7" << endl <<
"nOoFdoors = 5" << endl;
cout<<"---";cout<<endl;
cout<<"model: Alto " << endl <<
"pricePerDayRent = 10000" << endl <<
"fuelType = diesel" << endl <<
"nOoFpassengerSeats = 5" << endl <<
"nOoFdoors = 4" << endl;
cout << "----------------"; cout << endl;
cout << "Make: GMCYUKON"<<endl<<
"model: SLE " << endl <<
"pricePerDayRent = 8000" << endl <<
"fuelType = petrol" << endl <<
"nOoFpassengerSeats = 7" << endl <<
"nOoFdoors = 6" << endl;
cout<<"---";cout<<endl;
cout<<"model: SLT " << endl <<
"pricePerDayRent = 8000" << endl <<
"fuelType = petrol" << endl <<
"nOoFpassengerSeats = 6" << endl <<
"nOoFdoors = 8" << endl;
cout << "----------------"; cout << endl;
cout << "Make: TOYOTA"<<endl<<
"model: RAV4 " << endl <<
"pricePerDayRent = 20000" << endl <<
"fuelType = diesel" << endl <<
"nOoFpassengerSeats = 6" << endl <<
"nOoFdoors = 4" << endl;
cout<<"---";cout<<endl;
cout<<"model: Innova " << endl <<
"pricePerDayRent = 15000" << endl <<
"fuelType = petrol" << endl <<
"nOoFpassengerSeats = 7" << endl <<
"nOoFdoors = 5" << endl;
cout<<"model: PriusV " << endl <<
"pricePerDayRent = 13000" << endl <<
"fuelType = petrol" << endl <<
"nOoFpassengerSeats = 6" << endl <<
"nOoFdoors = 8" << endl;
cout << "----------------"; cout << endl;
}
void luxurymodelDisplay() {
cout << "Make : AUDI" << endl <<
"model: A6"<<endl<<"fuelType = diesel" << endl <<
"pricePerDayRent = 30000" << endl <<
"nOofSeatCoolers = 2" << endl <<
"noOfSeatMassagers = 1" << endl <<
"hiddenDoorPocket = 0" << endl;
cout << "---"; cout << endl;
cout << "model == A5" << endl <<
"fuelType = diesel" << endl <<
"pricePerDayRent = 25000" << endl <<
"nOofSeatCoolers = 1" << endl <<
"noOfSeatMassagers = 0" << endl <<
"hiddenDoorPocket = 0" << endl;
cout<<"----------------------------";cout<<endl;
cout << "Make == BMW" << endl <<
"model: 5Series"<<endl<<
"fuelType = diesel" << endl <<
"pricePerDayRent = 90000" << endl <<
"nOofSeatCoolers = 2" << endl <<
"noOfSeatMassagers = 3" << endl <<
"hiddenDoorPocket = 2" << endl;
cout<<"---";cout<<endl;
cout<<"model: 3Series"<<endl<<
"fuel type==diesel"<<endl<<
"pricePerDayRent=70000"
"nOofSeatCoolers=1"<<endl<<
"nOofSeatMassagers=2"<<endl<<
"hiddenDoorPocket=1"<<endl;
cout<<"----------------------------";cout<<endl;
cout<<"Make==MERCEDES"<<endl<<
"model: BENZ_C"<<endl<<
"pricePerDayRent=25000"<<endl<<
"nOofSeatCoolers=2"<<endl<<
"noOfSeatMassagers=2"<<endl<<
"hiddenDoorPocket=0"<<endl;
cout<<"---";cout<<endl;
cout<<"model: BENZ_E"<<endl<<
"fuelType==premium_unleaded_gasoline"<<endl<<
"pricePerDayRent=40000"<<endl<<
"nOofSeatCoolers=4"<<endl<<
"noOfSeatMassagers=2"<<endl<<
"hiddenDoorPocket=0"<<endl;
cout<<"----------------------------";cout<<endl;
}
void VansModelDisplay(){
cout << "Make : Toyota" << endl <<"model: GRANVIA"<<endl<<"fuelType = diesel" << endl
<<"pricePerDayRent =14000"<<endl<<"weight=1950"<<endl<<"capacity=8"<<endl;
cout<<"----";cout<<endl;
cout<< "model: Hiace"<<endl<<"fuelType = diesel" << endl <<"pricePerDayRent
=16000"<<endl<<"weight=2600"<<endl<<"capacity=15"<<endl;
 cout<<"----------------------------";cout<<endl;
 cout<<"Make : Suzuki"<<endl<<"model:
APV"<<endl<<"fuelType=petrol"<<endl<<"pricePerDayRent=12000"<<endl<<"weight=1340"<<e
ndl<<"capacity=8"<<endl;
 cout<<"-----------------------";cout<<endl;


}
long long count_digit(long long number) {
 int count = 0;
 while(number != 0) {
 number = number / 10;
 count++;
 }
 return count;
}
int main() {
cout << "Lets find your ideal Car" << endl << "------" << endl << endl;
cout << "Enter the Details below to help us find you a car of your choice: " << endl;
user user1;
user1.userInput();
Location lOut; lOut.InputLocation();
Date dayss;
cout << "Enter the date out: " << endl; Date dOut; dOut.inputDate();
cout<<"Note: Enter time in 24 hours clock "<<endl;
cout << "Enter the Time out : " << endl; Time tOut; tOut.inputTime();
cout << "Enter the date of return: " << endl; Date dReturn; dReturn.inputDate();
cout << "Enter the time of return: " << endl; Time tReturn; tReturn.inputTime();
cout << "Select the type of car you want: " << endl;
cout << "familyCar Models: " << endl;
FamilymodelDisplay();
cout << "------------ -------------------" << endl << "luxuryCar Models: " << endl;
luxurymodelDisplay();
cout<<"Vans Models: "<<endl;
 VansModelDisplay();
cout << "Available: familyCar luxuryCar Vans type the exact words to proceed: " <<
endl;
familyCar fff; Luxury lll; Vans vvv;
setCarType(fff, lll,vvv);cout<<endl; //selection of car type through call by reference
if (fff.getRentPrice() > lll.getRentPrice()&& fff.getRentPrice()>vvv.getRentPrice()) {
fff.familyCarPrint(); //using the logic of rent existence for printing the
information of selected car type
}
else if(lll.getRentPrice()>vvv.getRentPrice()&& lll.getRentPrice()>fff.getRentPrice()){
 lll.luxuryCarPrint();}
 else if(vvv.getRentPrice()>fff.getRentPrice() && vvv.getRentPrice()>lll.getRentPrice()){
 vvv.VansPrint();}
Rent _forAzizz; //making rent class object and
inserting details
if (fff.getRentPrice() > lll.getRentPrice()&& fff.getRentPrice()>vvv.getRentPrice()) {
//here again using the rentPrice logic to calculate the rent of the car type that has been
choosen by user
_forAzizz.setRent(fff, dOut, tOut, dReturn, tReturn, lOut);
}
else if(lll.getRentPrice()>vvv.getRentPrice()&& lll.getRentPrice()>fff.getRentPrice()){
_forAzizz.setRent(lll, dOut, tOut, dReturn, tReturn, lOut); }
else if(vvv.getRentPrice()>fff.getRentPrice() &&
vvv.getRentPrice()>lll.getRentPrice()){_forAzizz.setRent(vvv,dOut,tOut,dReturn,tReturn,lOut);}
int days; //declaring this integer to contain the number of days for rent price
calculation
days = dayss.calculateDays(dOut, dReturn);
cout<<"----------------------------------------------------------------------";cout<<endl;
cout << "The rent comes out to be: " << _forAzizz.calculateRent(days); cout<<endl; cout<<"-----
-----------------------------------------"<<endl;
string method;
cout<<"How would you like to pay; "<<endl<<" Online method OR Cash Method"<<endl;
cin>>method;
if(method=="Online"){
 long long creditCardNo;
 int pin;
 cout<<"Provide us your credit card number"<<endl<<"Notice: It must be of 16 digits "<<endl;
cin>>creditCardNo;
if (count_digit(creditCardNo)==16){
 cout<<"Enter your pin"<<endl;
 cin>>pin;
 cout<<"Your transaction has been successful, details must be sent to your email within 5
minutes "<<endl;}

 else {cout<<"Invalid number";}
}
else if(method=="cash"){
 string address;
 cout<<"Enter your current address for your delivery person to receive the cash and for us to
deliver your desired car soon "<<endl;
 cin>>address; cout<<endl;
}
cout<<endl<<"Thank you for visiting us "<<endl;
}
