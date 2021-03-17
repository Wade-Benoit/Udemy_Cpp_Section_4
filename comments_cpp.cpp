/*************************************
 *   Author Wade A Benoit
 *   6/20/19
 *   
 * 
 *   (Example of a header comment)
 * 
 * ***********************************/


#include <iostream>

int main()
{
    
    int favoriteNumber;
    
	 std::cout << "Please enter your favorite number between 1 and 100: " << std::endl;
    
    std::cin >> favoriteNumber;
    
    std::cout << "Amazing, that's my favorite number too!" << std::endl;
    
    
    //This is a single line comment
    std::cout<< "No, really. " << favoriteNumber << " is my favorite number!" << std::endl;
    
    /*
    This is a 
    multi-line comment
     */
    
    return 0;
}
