#include <iostream>
using namespace std;

int main()
{

	/*
					Data type: we vs programming
		  value				we call it				C++ Data Type
		  52				Number					integer
		  12.3				Number					double or float
		  z					letter					character
		  computer			word					string or sequence of characters
		  Male or female	status of 2 things		boolean

			explaining boolean
			ex.coin is head or tail.   we can think head is true & tail is false
			ex.light can be on or off. computer "understand on or off
			On = True = 1
			Off = False = 0

		We want to build program for hospital
			we need to refer to patients & one of them has information:
			we called "Mostafa". He is 55 years old. He has 2 children
			we have a doctor who has name, salary, address.etc
		How can we represent this information?
			we need to put them in memory when program starts
			we need to have names to refer to them
			e.g. I want to know mostafa's age?
		computer Memory like streets
			each home has street address
			name & number
			123 flower street
			123 = location
			flower = name
		Computer Memory RAM think of it as boxes
		 each box:
				  has Location, Data type, Name/value
		we call it variable, a box in memory
		location		Name/value		Data type
		1				Empty				NA
		2				age = 55			integer
		3				group ='d'			character
		4				gender = male		boolean
		5				Name = "Mostafa"	string

			we call variable name as (identifier)  = age
			we call value = 55
			we call data type = integer
			Memory address or location = somewhere in RAM
		How we Declare a variable in memory?
		int age;
		How we Assign a value  to the identifier (variable Name)?
		age = 55;
		We can declare & assign in same step in memory
		int age = 55;

		what this line of code do?
		cout<<age<<"\n";
		this means that goes to memory & bring the value of age & print it



	*/
	//Declare, Assign, Get
	//Declare a variable in memory, the value of variable is garbage or we call garbage value
	int number1;
	int number2;
	//Assign values in memory
	number1 = 30;
	number2 = 10;
	//Get values
	cout << number1 + number2 << endl;
	cout << number1 - number2 << endl;
	//Reassign value
	number1 = 50;
	cout << "2n+1 = " << number1 * 2 + 1 << endl;
	// we can delcare variable later we put values later we reassign value later we can use them for operations

	// SOME RULES FOR Identifier (variable name) 1. idenifier consist of letters,digits,_ ex.iNumber,status1,mostafa_,_valid  2.can't start with digit ex. 7core (wrong). 3. case sensitive: sum  is not the same as SUM   4. should't use reserved keyword   int return = 6;   Reserved words:int, float, double, return, void, if, while, break, false, bool, operator &more.
	/*
		initialization:several ways
		int age;       uninitialized Garbage. Don't
		int age = 55;   c-style,popular
		int age (55);   constructor initialization
		int age {55};   Modern initialization: preferred
	*/
	double weight = 80.5;
	char group = 'd';
	bool is_male = true;
	bool like_football = false;
	int age = 55;
	string name = "mostafa";

	cout << "I am " << age << " years old\n";
	cout << "My weight is " << weight << endl;
	cout << "My name is " << name << " & my group is " << group << endl << is_male
		<< " " << like_football << endl;
	//notice boolean internally is represent true = 1, false = 0 & boolean is number  even char is also internally a number 

	//The right datatype... the right way 
	int a = 10;
	int b = 21;
	int ans1 = a + b / 2; //20
	int ans2 = (a + b) / 2; //15
	//the average of 10 & 21 is 15.5 so we need the right datatype
	double x = 10.0;
	double y = 21;
	double ans3 = x + y / 2.0;
	double ans4 = (x + y) / 2.0;
	cout << ans4 << endl;
	//Remember Datatypes has  min & max values to store!
	/*
		int: -2147483648 to   2147483647
		char: -127 to 127
		bool: 0 to 1
	*/
	//If you tried lower value => underflow, if you tried bigger value =>overflow
	// int val = 2147483647 +1; we add 1 more to the max, compiler msg integer overflow in expression

	//Reading variable    cin>>  
	// c= console, in = input
	//steps   1. Define variable      2. Read it     3. wait user enter input from console
	//examples
	int num;
	cout << "Enter Your lucky number" << endl;
	cin >> num;
	cout << "*****************\n";
	cout << 2 * num + 1 << endl;
	int aa, bb;
	cout << " Enter two numbers" << endl;
	cin >> aa >> bb;
	cout << "The multi of those numbers " << aa * bb << " & The sum of them " << aa + bb << endl;
	int _age;
	cout << "Enter age" << endl;
	cin >> _age;
	float _weight;
	cout << "Enter weight" << endl;
	cin >> _weight;
	char _group;
	cout << "Enter group" << endl;
	cin >> _group;
	string _name;
	cout << "Enter name" << endl;
	cin >> _name;
	cout << "\n Your name is " << _name << "Your age is " << _age << "Your weight is " << _weight << " Your group is " << _group ;
	
	//constant variable 
	// how we make const variable 1. we put const before of data type 2. we give it a value 
	const double PI = 3.14159;
	const  char charVal{ 'A' };
	const int lucky{ 33 };
	const string str{ "welcome to our Bank" };
	//why we use that const variable 
	//1. preventing others to changing to a value
	//when c++ defining the max value of 2147483647 & min value of -2147483648
	// and these values depends to operating system & we allow the users or to change the value we  corrupt the whole software
	//2. the good programmer is try to communicate his intentions as soon as possible
}


