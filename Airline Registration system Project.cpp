#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMeniu();
class Management
{
	public:
		
	Management()
	{
		void mainMenu();
	}
};

class Details{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		void information{
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\n Enter the name: ";
			cin>>name;
			cout<<"\nEnter age: ";
			cin>>age;
			cout<<"\n Address: ";
			cin>>add;
			cout<<"Gender :";
			cin<<gender;
			cout<<"Your details saved with us \n";
		
			}
};

int Details::cId;
string Details::name;
string Details::gender;
class registration
{
	public;
	static int choice;
	int choice1;
	int back;
	static float charges;
	void flight(){
	
	string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
	for(int a=0;a<6;a++)
	{
		cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
	}
	cout<<"\n  Welcome to the airline!"<<endl;
	cout<<"Press the number of the countery of which you want to book the flight: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:{
			cout<"________________________Welcome to Dubai Emirates_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. DUB -498"<<endl;
			cout<<"\t28-06-2022 8:00AM 10hrs Rs. 14000"<<endl;
			cout<<"1. DUB -678"<<endl;
			cout<<"\t01-07-2022 4:00AM 12hrs Rs. 10000"<<endl;
			cout<<"1, DUB -768"<<endl;
			cout<<"\t08-07-2022 11:00AM 11hrs Rs. 9000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=14000;
				cout<<"\n You have sucessfully booked the flight DUB-498"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=10000;
				cout<<"\n You have sucessfully booked the flight DUB-678"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=9000;
				cout<<"\n You have sucessfully booked the flight DUB-768"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			break;
		}
		case 2:{
			cout<"________________________Welcome to Canadian Airline_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. CA-198"<<endl;
			cout<<"\t10-07-2022 2:00AM 20hrs Rs. 35000"<<endl;
			cout<<"1.CA -953"<<endl;
			cout<<"\t014-07-2022 11:00AM 18hrs Rs. 27000"<<endl;
			cout<<"1. CA -897"<<endl;
			cout<<"\t18-07-2022 1:00AM 15hrs Rs. 19000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=35000;
				cout<<"\n You have sucessfully booked the flight CA-198"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=27000;
				cout<<"\n You have sucessfully booked the flight CA-953"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=19000;
				cout<<"\n You have sucessfully booked the flight CA-897"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			
		}
		case 3:{
			cout<"________________________Welcome to UK Airline_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. UK-123"<<endl;
			cout<<"\t12-07-2022 9:00AM 21hrs Rs. 65000"<<endl;
			cout<<"1.UK -465"<<endl;
			cout<<"\t26-07-2022 1:00AM 20hrs Rs. 57000"<<endl;
			cout<<"1. UK -852"<<endl;
			cout<<"\t31-07-2022 11:00AM 18hrs Rs. 49000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=65000;
				cout<<"\n You have sucessfully booked the flight UK-123"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=57000;
				cout<<"\n You have sucessfully booked the flight UK-465"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=49000;
				cout<<"\n You have sucessfully booked the flight UK-852"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			
		}
		case 4:
			{
				cout<"________________________Welcome to USA Airline_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. USA-108"<<endl;
			cout<<"\t1-07-2022 12:00AM 25hrs Rs. 40000"<<endl;
			cout<<"1.USA -913"<<endl;
			cout<<"\t19-07-2022 1:00AM 28hrs Rs. 29000"<<endl;
			cout<<"1. USA -627"<<endl;
			cout<<"\t28-07-2022 4:00AM 17hrs Rs. 10000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=40000;
				cout<<"\n You have sucessfully booked the flight USA-108"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=29000;
				cout<<"\n You have sucessfully booked the flight USA-913"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=10000;
				cout<<"\n You have sucessfully booked the flight USA-627"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			}
			
			case 5:
			{
				cout<"________________________Welcome to Australia Airline_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. Australia-288"<<endl;
			cout<<"\t1-08-2022 10:00AM 20hrs Rs. 60000"<<endl;
			cout<<"1.Australia-536"<<endl;
			cout<<"\t04-08-2022 1:00AM 18hrs Rs. 47000"<<endl;
			cout<<"1. Australia -934"<<endl;
			cout<<"\t08-08-2022 7:00AM 15hrs Rs. 39000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=60000;
				cout<<"\n You have sucessfully booked the flight Australia-288"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=47000;
				cout<<"\n You have sucessfully booked the flight Australia-536"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=39000;
				cout<<"\n You have sucessfully booked the flight Australia-934"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			}
			case 6:
				{
						cout<"________________________Welcome to Europe Airline_______________________\n">>endl;
			cout<<"Following are the flights \n"<<endl;
			cout<<"1. Europe-831"<<endl;
			cout<<"\t11-08-2022 9:00AM 21hrs Rs. 50000"<<endl;
			cout<<"1.Europe-183"<<endl;
			cout<<"\t18-08-2022 8:00AM 15hrs Rs. 36000"<<endl;
			cout<<"1. Europe -794"<<endl;
			cout<<"\t23-08-2022 7:00AM 10hrs Rs. 29000"<<endl;
			
			cout<<"\n Select the flight you want to book :";
			cin>>choice1;
			if(choice1==1)
			{
				charges=50000;
				cout<<"\n You have sucessfully booked the flight Europe-831"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==2){
				charges=47000;
				cout<<"\n You have sucessfully booked the flight Europe-183"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else if(choice==3){
				charges=39000;
				cout<<"\n You have sucessfully booked the flight Europe-794"<<endl;
				cout<<"You can go back to menu and take ticket"<<endl;
			}
			else{
				cout<<"Invalid input,shifting to the pervious menu"<<endl;
				flight();
			}
			cout<<"Press any key to go to the main menu: "<<endl;
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}	
				}
				default:
					{
					cout<"Invalid input,Shifting you to main menu !"<<endl;
					mainMenu();
					break;
				    }
}
	}
};

float registration::charges;
int registration::choice;
class ticket:public registration,Details{
	public:
		void Bill(){
			string destination=" ";
			ofsteam outf("record.txt");
			{
				outf<<"__________XYZ Airlines____________"<<endl;
				outf<<"_____________Ticket_______________"<<endl;
				outf<<"__________________________________"<<endl;
				outf<<"Customer ID: "<<Details::cId<<endl;
				outf<<"Customer Name: "<<Details::na,e<<endl;
				outf<<"Customer Gender: "<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				if(registration::choice==1){
					destination="Dubai";
				}	
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="Europe";
				}
				outf<<"Destination\t\t"<<destination<<endl;
				outf<"Flight cost :\t\t"<<registration::charges<<endl;
			}
			outf.close();	
		}
		void.close();
		{
			ifstream ifs("record.txt");
			{
				if(ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(ifs.eof())
				{
					if.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}		
};



void mainMenu(){
	int Lchoice;
	int schoice;
	int back;
	count<<"\t		XYZ Airlines \n"<<endl;
	count<<"\t.........Mian Menu.........."<endl;
	count<<"\t___________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t|"<<endl;
	cout<<"\t\t Press 1 to Add Customer  Details  \t"<<endl;
	cout<<"\t\t Press 2 For Flight Registration  \t"<<endl;
	cout<<"\t\t Press 3 For Ticket And Charges  \t"<<endl;
	cout<<"\t\t Press 4 Exit  \t"<<endl;
	cout<<"\t|\t\t\t\t\t|"<<endl;
	count<<"\t___________________________________________________"<<endl;
	
	cout<<"Enter the choice: ";
	cin>>choice;
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:{
			count<<"______________________Customer_____________________\n"<<endl;
			d.information()
			cout<<"Press any key to go back to Main menu ";
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			break;
		}
		case 2:
			{
				count<<"______________Book a flight using this system________________\n"<<endl;
				r.flight();
				break;
			}
		case 3:{
			count<<"__________Get your ticket_________\n"<<endl;
			t.Bill();
			cout<<"Your ticket is printed , you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket ";
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
		}
				else{
				mainMenu();
			}
			break;
	}
	case 4:{
			cout<<"__________ThankYou__________ "<<endl
		break;
	}
	default:
		{
			cout<<"Invalid input,Please try again\n"<<endl;
			mainMenu();
			break;
		}
}
int main()
{
	Management Mobj;
	return 0;
}
