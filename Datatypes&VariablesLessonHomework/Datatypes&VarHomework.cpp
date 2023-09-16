#include <iostream>
using namespace std;

void main()
{
	
	//variables Homework 1 
		//Problem #1 Math operations
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2;
	cout << "\n" << num1 << " - " << num2 << " = " << num1 - num2;
	cout << "\n" << num1 << " / " << num2 << " = " << num1 / num2;
	cout << "\n" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		//Problem #2 Students grades
	string name_1, name_2;  int id_1, id_2; double mathGrade_1,  mathGrade_2;
	cout << "what is student 1 name: ";
	cin >> name_1;
	cout << "\nHis id: ";
	cin >> id_1;
	cout << "\nHis math exam grade: ";
	cin >> mathGrade_1;

	cout << "what is student 2 name: ";
	cin >> name_2;
	cout << "\nHis id: ";
	cin >> id_2;
	cout << "\nHis math exam grade: ";
	cin >> mathGrade_2;
	cout << "\n Students grades in math " << name_1 << " (with id " << id_1 << " ) got grade: " << mathGrade_1 << endl
		<< " Students grades in math " << name_2 << " (with id " << id_2 << " ) got grade: " << mathGrade_2 << endl
		<< "Average grade is " << (mathGrade_1 + mathGrade_2) / 2 << endl;
		//Problem #3 Even & Odd sum
	int odd1, even1, odd2, even2, odd3, even3, odd4, even4;
	cin>> odd1>> even1>> odd2>> even2>> odd3>> even3>> odd4>> even4;
	cout << "\n"
		<< even1 + even2 + even3 + even4;
	cout<<"  "<<  odd1+  odd2+  odd3 + odd4;
	// variables Homework 2
	//problem1#Guess the output
	 /*  
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout << num3 << "\n";
	output is..
	1
	2
	3
	5
	8
	13
	21
	34
	55
	
	//problem #2 swapping 2 numbers!
	int num1, num2, num3 = -1;
	cin >> num1 >> num2;   //7 231

	// TODO Write 3 lines that swaps them
	num3 = num1;
	num1 = num2;
	num2 = num3;
	cout << num1 << " " << num2 << endl;
	
	//Variables Homework 3
	//problem #1 Swapping 3 numbers
	int num1, num2, num3, temp = -1;
	cin >> num1 >> num2 >> num3;
	//4lines
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;
	cout << num1 << " " << num2 << " " << num3 << endl;
	*/
}

