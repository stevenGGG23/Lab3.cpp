/* 
A.I. Disclaimer: All work for this assignment was completed by myself and entirely without the use
of artificial intelligence tools such as ChatGPT, MS Copilot, other LLMs, etc.
*/

#include <iostream> 
#include <iomanip>  
#include <cmath>
using namespace std; 

int main() 
{  
    //prompt user/ input 
    int credit_hours;  
    cout << "Please enter your total credit hours earned: "; 
    cin >> credit_hours; 

        //if statments for credit hours calculations / output  
        if ( 0 < credit_hours && credit_hours <= 15){ 
        cout << "You are a Freshman" << endl;
        }  
    
        else if (15 < credit_hours && credit_hours <= 45){
        cout << "You are a Sophomore." << endl;
        }    
    
        else if (45 < credit_hours && credit_hours <= 75){  
        cout << "You are a Junior." << endl; 
        }
        
        else if (75 < credit_hours){ 
        cout << "You are a Senior." << endl;
        }    
        
        else (cout << "Invalid input." << endl);
    
    return 0; 
}
