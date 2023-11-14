#include <iostream>
using namespace std; 
void main()
{
	/*
		Binary & Unary operators 
			{ expression } is like x + 2 * y - 1
			{ operators } are   + * - 
			{ operands } are  x, 2, y, 1
			{ parrentheses } to enfore order like   (x + y) 3/ 3
			{ binary operators } means need two operands like this    x + y
			{ -  and ! operators }  
			  { - } the minus operator is to switch number from positive to negative
			  int x = 6
			  int y = -x
			  { ! }  the not operator is part from logical operator 
			  it is to switch the bool from   False to True  &   bool from True to False
			  bool male = true 
			  bool female = !male ,     here is from  1 to 0 
			{ unary operator } means that has one operand
			int y = -x ,   one operand (x)
	*/
	/*
		Prefix & postfix Operators
			{ ++ Operators } is a unary operator
			{ Prefix operator }: ++x   Pre = before
			means that   increment x first, then assign its value it
			{ Postfix operator }: x++    post = after
			Assign its value first  then, increment it
			In case of  (x + y) No defined order if x evaluated first or y
			here we don't know which one will affected first!
			The best use
			++x;
			int temp = x++;
			{ -- operators }  same concepts as ++ just decrmenting
	*/
	/*
		{ Assignment opertor }
		int x = 2 * y + 1 
		the left hand  = right hand side 
		Rhs is an expression & it evaluated first, then assigned to Lhs
		y is number so so all experssion will assigned as int if y is string, it will be compiler error
		assign several variables using { comma ,} 
		(10, x = 1, y = 3 + 1, x = x+2*y + 1, 40)
		evaluates from left to right, & return the last after comma result.
		{ Assignment Operators: +=  -=  *=  /= } means compound assignment
		num = num + 1;    same as   num += 1;
		num = num * 5;    same as   num *= 5;
		num = num / 2;    same as   num /= 2;
		num = num - 3;	  same as	num -= 3;
	*/
	/*
		{ Precedence }
		Math Rules  for order of operation
		()    is first
		 * /  is second
		 + -  is third
		{ Operator Precedence }
		unary operators { ++ -- - !}  is applied first before anything
		* / %  math operators         is second
		+ -                           is third
		= += -= *= /= %=			  is the last applied
		{ operator Precedence: () }
		find some deepest parentheses, compute its experssion & so on till no parentheses
		{ Operator Associativity }
		In case of operators with same priority 
		Associativity: group either from left or from right
		we have two associativity grouping groups
		left to right Associativity: group from left to right
		Right to left Associativity: group from right to left
		
		{ Left to Right operators }  * / % + -
		{  Right to Left Operators} = += -= *= /= %=
	*/
	/*
		{ Relational Operators } used for compare numbers
		3 < 5    ?true
		3 > 5	 ?false
		3 >= 5	 ?false
		3 == 5	 ?false
		3 <= 5	 ?true
		we know is bool return true or false we can put these relational operators in bool  
		bool result = x > y;
		cout<< result;
		cout<<!result;
		{ comparing string } the rule here is letter A is smaller than a in number sequnce in ASCII table
		string n1 {"ali"}, string n2 {"ALI"};
		cout<<(n1 < n2);
	*/
	/*
		{ Truth Table }
		{ AND logical operators }
		To evaluated as true we must see the two condition to be true
		{ OR logical operatoers }
		To evaluated as true, we need only one condition to be true
		{ Mixing logical operators }
		 grouping subgroup of ANDs & reducing them, then evaluated to ORs
		{ Precedence && before || }  if we put () applied first then ANDs
		{ Short-circuit Evaluation } stop evaluating when result is determined (efficiency)
		coding mistakes
		cout<<x < 5<<endl;
		compiler get confused use ()
		cout<<(x < 5)<<endl;
	*/
	/* 
		{ Division }
		dividing two integer will ignore the fraction part so we use double
		{ Division  by 10s}
		Dividing by 10 removes last digit
		Dividing by 100 removes last 2 digit
		Dividing by 1000 removes last 3 digit
		int num = 12345;
		num/10  =>  1234
		num/100  =>  123
		num/1000  =>  12
		{ Division  by 2 }
		Dividing Even number by 2 
		even nums: 2,4,6,8,10.....
		even numbers is divisble by 2
		so Always number eventially is 0 
		so there is no fractional part here.
		Dividing Odd number by 2
		Odd nums: 1,3,5,7,9.....
		Odd numbers is not divisble by 2
		so Always number eventially is 0.5
		{ conversions }
		double num = 8/3.0;
		cout<<num;   => 2.666666666.......6666
		{ conversions using Casting }
		int res = (int)num;
		cout<<res;    =>  2
		char ch = 'a';
		int ch_value = (int)ch;
		cout<<ch_value;  =>  61
	*/
	/*
		{ Modulus Operation }
		a modulus n  =>  a % n =>   finds the remainder after division by n
		a = 27, n = 12, then r = a % n?
		27/ 12 = (2 * 12 + 3)/12 = 2 + 3/12 = 2.25
		2 = integer division part = called the quotient
		0.25 = fractional part
		3 (remainder) of division = 27 -24
		
		{ division part }    25 / 5 = 25/5 + 0/5 = 5        { Modulus Part } 25 % 5 = 0
		{ division part }    26 / 5 = 25/5 + 0/5 = 5.2      { Modulus Part } 25 % 5 = 1
		{ division part }    27 / 5 = 25/5 + 0/5 = 5.4      { Modulus Part } 25 % 5 = 2
		{ division part }    28 / 5 = 25/5 + 0/5 = 5.6      { Modulus Part } 25 % 5 = 3
		{ division part }    29 / 5 = 25/5 + 0/5 = 5.8      { Modulus Part } 25 % 5 = 4
		{ division part }    30 / 5 = 25/5 + 0/5 = 6        { Modulus Part } 25 % 5 = 0
															answer must be < 5
		{ Critical part for Engineering }
		{ Modulus %2    %10 }
		{ Observation for Modulus %2 }
		Even Number % 2  gives 0        100 % 2 = (50*2 + 0) => 0
		Odd Number % 2   gives 1        101 % 2 = (50*2 + 0) => 1
		{ Observation for Modulus %10 }
		Number % 10 = gives last 1 digit	1000 % 10    = (100*10 + 0)    = 0
		Number % 10 = gives last 1 digit	1001 % 10    = (100*10 + 0)    = 1
		Number % 10 = gives last 1 digit	1008 % 10    = (100*10 + 0)    = 8
		Number % 10 = gives last 1 digit	1000 % 100   = (100*10 + 0)    = 0
		Number % 10 = gives last 1 digit	1234 % 100   = (100*10 + 34)   = 34
		Number % 10 = gives last 1 digit	1234 % 1000  = (100*10 + 234)  = 234
		Number % 10 = gives last 1 digit	1234 % 10000 = (100*10 + 1234) = 1234

		
	*/
}

