#include <iostream>
using namespace std;
int main()
{
    //printing message
    cout << "Hello World!\n" << endl;
    /*
    we will make code tracing this message
     cout      stands for character output
     <<        stands for output insertion operator
     "Hello World!"  stands for string
     \n       stands for new line
     ;    means  end of message
     endl is same as \n
     */

     // code comments  by   //   or  /* block of code comments*/

     //printing numbers
    cout << 1234 << "=>this is number" << endl;
    cout << "1234" << "=> this isn't number" << endl;
    cout << 12.3 << endl; // fraction nubmer
    cout << -33 << endl; // negative number
    cout << 12344321 << endl; // this coming from one single number 
    cout << 1234 << 4321 << endl; // this coming from two different numbers
    cout << "\n the number is: " << 7 << "\n";
    //we can do math on numbers
    cout << 2 + 4 - 4 << endl;
    cout << 4.8 / 2.2 << endl;
    cout << 5 * 5 << endl;
    cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << endl;
    //the result is weird because it is overflow, C++ has limition in number & u can't have big numbers.
    cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << endl;

    /*
    there is three common errors in c++ 
    
  first is compiler errors: 
    missing semicolon 
    cout<<" Iam Mo
    
    it's << not <<< or <<<< or < < or >>
    cout<<<<"I am Mo"< <"kilani";

    missing double quotes char
    cout<<"I am MO;

    missing the braces{ }, braces are we write the body of the code
    int main()
    cout<<"I am Mo ";
    return 0;

    missing #include<iostream>, iostream give us the capability to read cin and write cout
    using namespace std;
    int main(){
    cout<<"I am Mo";
    return 0;
    }

    c++ is character sensitive we write main function with MAIN & it should be main all letters are small
    #include<iostream>
    ing namespace std;
    int MAIN(){
    cout<<"I am Mo";
    return 0;
    }

    Never print outside main function, later a few things allowed outside
    #include<iostream>
    ing namespace std;
    cout<<"I am Mo";
    int main(){
    cout<<"I am Mo";
    return 0;
    }

    compiler warning:where is return? return statement is that we tell to compiler we are done
    #include<iostream>
    ing namespace std;
    int main(){
    cout<<"I am Mo";
    return 0;
    }

    compiler warning:Maximum for integer number (int) is 2147483647, overflow warning  More => Fails
    cout<<10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10<<endl;

   Second Runtime error
    what happening is compiler think it is ok no errors, no warnings, let's run divide by zero program crashes in middle
    cout<<11/0<<endl;
    */    
    return 0;
    // this line of code below will not printed, It is message for compiler we are done & line after it will be ignored
    cout << "this message will not appear" << endl;
     }

