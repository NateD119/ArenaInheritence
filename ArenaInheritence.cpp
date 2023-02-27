/*==========================================================

 Title:       Assignment 7 - Arena Area Inheritance
 Course:      CIS 2252
 Author:      <Nate Davis>
 Date:        <11/13/2022>
 Description: This program works with Inheritance and overriding a 
 base class with a child class. The base class outputs the radius of
 the arena, whereas the ArenaArea class (child class) outputs the 
 area of the arena. 

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create classes Arena and ArenaArea here
class Arena{
    public:
        int r = 0;
        int rad = r*r;
        double area;
            void display(){
                cout << r*r <<endl;
            };
};

class ArenaArea:public Arena {
    public:
    double area = 3.14*rad;
        void scan_input(){
            cin >> r;
           
        }
        void display(){
            cout << 3.14*(r*r) << endl;
            
        }
        
};

int main()
{
    
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}
