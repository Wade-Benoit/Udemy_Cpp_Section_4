#include <iostream>

extern int x;

int main()
{
	
    std::cout << x;
    
    return 0;
}

//Program will result in linker error every run
//This is based on the Scope rules of programming in C++, where you define variables is important
