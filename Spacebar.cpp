
#include <iostream>

int main ()
{
//creating variables.
    int count = 1;
    char x;
        
//Printing a tutorial for the user. 
    std::cout 
    
    << "Press 'CTRL + C' to exit at anytime.\n" 

    << "This program is designed " 
    <<   "to count the amount of times you "
    <<     "press the TAB or Spacebar keys." 

    <<  "\nThe number is updated when you"
    <<    " press the 'Enter' key!" 

    << "\n\nSo type out whatever you want and have fun!"
    << std::endl;

/* The infinite "while loop" begins below.
    The "std::noskipws" tells the stream not to ignore whitespace. */
    
  while (std::cin >> std::noskipws >> x ) 
  { 
    
    
    if(isblank(x)) { // "if 'x' contains a blank character", then:
        std::cout << "Spacebar or TAB pressed " << count++ <<
        " times!" << std::endl;
        
    }
     
  } // while loop ends
  
        return 0;
}
