#include <iostream>
#include <string>
#include<sstream>
#include<cstdlib>
using namespace std;
void explanation();
void line();
void exitprogram(string);
void example();
void Exercises();
char choose,t;
int scorse=0;
string name;
 int main() {
 
	int pass,conPass;
	int i=0;
	 cout<<"Enter your name:";
	 	getline(cin,name);
 	while(i<3)
 	{i++;
	
	cout<<"Enter your passward:";
	cin>>pass;
	cout<<"Confirm passward:";
	cin>>conPass;
	system("cls");
 if(pass!=conPass)
	{if (i<3)
	cout<<"Your passward is wrong.\n";
	else if (i==3)
  cout<<"You have enter the passsword three times wrong.\n";
    }
    	else
{   line();
	cout<<"\nWelcome "<<name<<endl;
	line();
    cout<<"Choose the character what you want from the tutorial program contents:\n";
    
    cout<<"(a/Explanation of language topics.\n b/Examples.\n c/Exercises.\n d/Exit the program)\n";
     cin>>choose;
     switch(choose){
     	case 'd':
     		exitprogram(name);
     		break;
     	case 'a':{
	        line();
            explanation();
           	line();
            exitprogram(name);
            break;}
        case 'b':{
		    example();
	     	line();
             exitprogram( name);
	        break;}
	    case 'c':	{
		   Exercises();
        	exitprogram(name);
			break;}
		default:
		   	cout<<"You choose a wrong character.";
     		
	 }

	break;
}//else
   
  }//for
	return 0;
}

void explanation()
{
 cout<<"C++ is a powerful programming language with a wide range of topics that are important to understand.\n ";
    cout<<"Here are some key topics in C++:\n"<<"1. Syntax and Basic Concepts: Familiarize yourself with the basic syntax and concepts of C++"
	<<",such as variables,data types, operators, control structures (like if-else statements and loops), and functions.\n";
	cout<<"2. Object-Oriented Programming (OOP): C++ supports OOP principles, including classes and objects."
	<<"Learn about encapsulation, inheritance, and polymorphism, which are fundamental concepts in OOP.\n";
	cout<<"3. Pointers and Memory Management: Pointers allow you to manipulate memory directly and are an important aspect of C++."
	<<"Understand how to allocate and deallocate memory dynamically using the new and delete operators,and be aware of potential memory leaks and dangling pointers.\n";
	line();
		cout<<"Do you want Examples (y/n)? \n";
    cin>>choose;
    	system("cls");
    if(choose=='y')
  {
	  example();
	  	line();}


    else if (choose =='n') 
 {cout<<"Do you want a/ Exercises or b/ Exit the program? \n";
 cin >> choose;
 	system("cls");
  if(choose=='a')  
   Exercises();

 
  } 	
}

void example()
{  line();

		cout<<"Ok these're some examples:\n";
    cout<<"1. Syntax and Basic Concepts :\n";
   
   cout<<"-  C++:\n";
    
    cout<<" int age = 25 \n std::cout <<\" My age is \"  << age << std::endl; \n";
     
     line();
     
cout<<"2. Object-Oriented Programming (OOP):\n";

   
    
    cout<<"class Rectangle {\n private:\n int width; \n int height;\n  public:\n Rectangle(int w, int h) {\n  width = w;\n  height = h;\n}\n int getArea() {"
       << "\n   return width * height;\n \n  }\n Rectangle myRectangle(4, 6);\n  int area = myRectangle.getArea();\n"
    <<" std::cout << \"The area of the rectangle is:\" << area << std::endl;\n \n";
      line();
 cout<<"Do you want a/ Exercises or b/ Exit the program? \n";
 cin >> choose;
 	system("cls");
 if(choose=='a')  
   Exercises();
   
}
	

void Exercises( )
{  
line();
cout<<"Ok these're some exercises: \n\n\n";
cout<<"Choose the correct answer:\n";
cout<<"1) Which of the following is a reserved word in C++?\n(a.const b.include c.number d.name)\n";
 char t='a';
 char choose;
cin>>choose;

	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
 }
else{
cout<<"Wrong.\n";
line();}
 
cout<<"\n2) Preprocessor directives begin with which of the following symbols?\na. !\nb. $\nc. # \nd.None of these.\n";
t='c';
cin>>choose;
	 
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
 }
else {
cout<<"Wrong.\n";
line();}
 
  cout<<"\n3) Which of the following are correct C++ statements?\na.cout<<\"Hello There!\"<<endl;\nb.cout>>\"Hello There!\"<<endl;"
<<"\nc.cout<<\"Hello;<< There!\"<<endl;\nd.cout<<\'Hello There!\'<<endl;\n";
 
t='a';
cin>>choose;
 
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
 }
else {
cout<<"Wrong.\n";
line();}
 
cout<<"\n4) Suppose that str1=\"English\",str2=\"Computer Science\" ,and str3=\"Programming\" are string variables.Evaluate the following makes that false."
<<"\na.str1>=str2\nb.str1 != \"english\"\nc.str3<str2\nd.str2>=\"Chemistry\"\n";
t='c';
cin>>choose;
 
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
 }
else {
cout<<"Wrong.\n";
line();}
 
cout<<"\n5) What is the final value of s?\nivt s = 0;\nint i;\nfor (i=0; i<5;i++)\n{\n	s = 2 * s +i;\n	cout<<s<<\" \";\n}\ncout<<endl;"
<<"\na.11\nb.4\nc.26\nd.none of these\n";
t='c';
 cin>>choose;
  
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
cout<<"\n6) Which data type is used to create a variable that should store text?\n"<<"a.myString\nb.txt\nc.String\nd.string\n";
t='d';
 cin>>choose;
  
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
cout<<"\n7) which header file lets us work with input and output objects?\n"<<"a.#include <iostream>\nb.#include <iostream.h>\nc.#include <stream>\nd.a&b\n";
t='d';
 cin>>choose;
 	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
cout<<"\n8) Array indexes start with?\n"<<"a.1\nb.0\nc.Any number specified by the programmer\nd.b&c\n";
t='b';
 cin>>choose;
  
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
cout<<"\n9) How do you start writing an if statements in C++?\n"<<"a.if(x>y)\nb.if x>y then:\nc.if x>y\nd.Nothing from the above\n";
t='a';
 cin>>choose;
  
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
cout<<"\n10) Which statement is used to stop a loop?\n"<<"a.exit\nb.break\nc.stop\nd.return\n";
t='b';
 cin>>choose;
  
	if (choose==t)
{
	cout<<"Correct.\n";
	line();
scorse++;
}
else {
cout<<"Wrong.\n";
line();}
 
 cout<<"scorse:"<< scorse<<endl;
if(scorse>4)
cout<<"You are good ^_^ \n";
else
{cout<<"You should to go back to the explanation.\n";
line();
explanation();
}
line();

 
 }
void line()
{
	cout<<"__________________________________________________________________________\n";
}
void exitprogram(string name)
{
cout<<"Good bye "<<name<<" ^_^ "<<endl;

}
