//instr2.cpp -- how to use the getline() 

#include <iostream>
#include <cstring>

using namespace std ;

int main() {
	using namespace std ;
	const int ArSize = 20 ;
	char name[ArSize] ;
	char dessert[ArSize] ;
	
	cout << "Enter your name:\n" ;
	cin.getline(name , ArSize) ;
	cout << "Enter you favorite dessert:\n" ;
	cin.getline(dessert ,ArSize) ;
	cout << "I have some delicious " << dessert ;
	cout << " for you " << name << ".\n" ;
	return 0 ;
	
}
