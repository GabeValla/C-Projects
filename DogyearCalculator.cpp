#include <iostream>
using namespace std;
// This program will be a quick Dog year calculator for your fuzzy furry pet.
// Gabriel Valladares-Ruiz

int main(){

// One year old is 10.5 years old in humans year, and 2 year old dog is 21 year old in human years

//First let greet our user, and get some input so calculate the dog year.

// We need to assume the number will be greater than two for its age
int  year, age, earlyAge;
double dogYear;
string name;
cout << "Hello welcome to the Dog Year calculator!!" << endl;
cout << endl;
cout << "Enter the age of your Dog in human years: ";
cin >> year;

//Calculate the age of the dog

earlyAge = 21;
age = (year - 2) * 4;
dogYear = age + earlyAge;

// This will display the pets name, and its age for the user.
cout << "Your pet age is " << dogYear<< " in dog years" << endl;
cout << " Whats your pet name?" << endl;
cin >> name;
cout << "Lets keep working hard " << name << " together while times passes by my furry friend" << endl;

return 0;
}
