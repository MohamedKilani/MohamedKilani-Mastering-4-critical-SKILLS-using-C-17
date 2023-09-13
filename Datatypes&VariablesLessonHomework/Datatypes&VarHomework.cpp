#include <iostream>
using namespace std;

int main()
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
	cout << "\n"<< even1 + even2 + even3 + even4<<"  "<<  odd1+  odd2+  odd3 + odd4;
}

