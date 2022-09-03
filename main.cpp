// Author: Fransiskus Agapa
// 9/2/22
// Practices make improvement - Have Fun !!!
// :)

// ==========================
// user input type of a dog, its age, its origin country, and price
// ==========================

#include <iostream>
#include "Dog.h"
#include "CapitalWord.h"
#include "ValidDigit.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;
using std::stod;
using std::stoi;

int main()
{
   string choice;                            // user choice
   bool thereIsData;                         // indicate user has put data
   Dog* dog  = nullptr;                      // pointer to new allocated memory ( @ this point set it to default)
   cout << "\n== Dog Data ==" << endl;
   cout << "1. Input Data" << endl;
   cout << "2. Display Data" << endl;
   cout << "e. Exit" << endl;
   cout << "Choice: ";
   cin >> choice;
   cout << endl;

   while(choice != "e" and choice != "E")
   {
       if(choice == "1")
       {
           cout << endl << "= Input Data =" << endl << endl;
           string type;
           string strAge;                 // validate age as string
           int age;

           string origin;
           string strPrice;               // validate price string
           double price;
           bool validDigit;               // indicate user input is valid digit or not

           // type
           cout << "Input type of the dog: " ;
           while(type.size() == 0)
           {
               getline(cin, type);
           }
           Capitalize(type);
           cout << endl;

           // age
           cout << "How old is the dog: ";
           while(strAge.size() == 0)
           {
               cin >> strAge;
           }
           validDigit = Validate(strAge);
           if(validDigit)
           {
               age = stoi(strAge);
           }
           else
           {
               cout << "\n[ Invalid age ]" << endl;
               age = -1;
           }
           cout << endl;

           // origin
           cout << "What was the type of dog originally from: ";
           while(origin.size() == 0)
           {
               getline(cin, origin);
           }
           Capitalize(origin);
           cout << endl;

           // price
           cout << "What is the price for the type of dog: $";
           while(strPrice.size() == 0)
           {
               cin >> strPrice;
           }
           validDigit = Validate(strPrice);
           if(validDigit)
           {
               price = stod(strPrice);                        // change value from string to double the string digit is validated
           }
           else
           {
               cout << "\n[ Invalid price ]" << endl;
               price = 0.0;
           }
           cout << endl;

           dog = new Dog(type, age, origin, price);
           thereIsData = true;
           cout << "[ Data submitted ]" << endl;
           cout << endl << "========================" << endl;
       }
       else if(choice == "2")
       {
           cout << endl << "= Display Data = " << endl << endl;
           if(thereIsData)
           {
               cout << "Type: " << dog->GetType() << endl;         // access class member use ->
               cout << "Age: " << dog->GetAge() << endl;
               cout << "Origin: " << dog->GetOrigin() << endl;
               cout << "Price: $" << dog->GetPrice() << endl;
           }
           else
           {
               dog = new Dog;
               cout << "Type: " << dog->GetType() << endl;
               cout << "Age: " << dog->GetAge() << endl;
               cout << "Origin: " << dog->GetOrigin() << endl;
               cout << "Price: $" << dog->GetPrice() << endl;
               delete dog;                                          // Free allocated memory
           }
           cout << endl << "========================" << endl;
       }
       else
       {
           cout << endl << "[ Invalid choice ]" << endl;
       }

       cout << "\n== Dog Data ==" << endl;
       cout << "1. Input Data" << endl;
       cout << "2. Display Data" << endl;
       cout << "e. Exit" << endl;
       cout << "Choice: ";
       cin >> choice;
       cout << endl;

   }

   delete dog;                                                       // Free allocated memory
   if(choice == "e" or choice == "E")
   {
       cout << "\n== Exit Program ==" << endl;
   }
    return 0;
}
