#include<iostream>
#include<conio.h>

using namespace std;

class ratio
{ public:
 ratio () { cout<<"\n OBJECT IS BORN" ; }
void display () { cout<<"\n NOW X IS ALIVE" ; }
~ratio () { cout<<"\n OBJECT DIES"; }
} ;
void main()
 { clrscr();
 ratio X ;
 X.display();
 } // main ends, destructor executed
/* Output
OBJECT IS BORN
NOW X IS ALIVE
OBJECT DIES
