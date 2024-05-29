/* Name: Gabriel Valladares-Ruiz
Date: 04-4-2024
Section: 02
Assignment: Assignment 5
Due Date: 04-08-2024
About this projects: This will be able to mutliple operation within Array 
Assumptions: Postive number

All work below was performed by Gabriel Valladares-Ruiz */

#include <iostream>
using namespace std;

    const int CAPACITY = 100;

    void insertAfter(double myArray[], int& size, double numInsert, double numArray);
    void arrayMenu();
    void removeLast( double myArray[], int& size, double numRemove);
    void alternateShift(double myArray[], int& size);
    void sort(double myArray[], int size);
int main() {
    double number;
    int option;
    int size;

       //Welcome Message prompt the user to enter numbers they will use
       cout << "Enter the number of elements you want to enter (Max 100): " << endl;
        cin >> size;
    double myArray[CAPACITY]; // Stores the array with the size of it.

    cout << "Enter " << size << " numbers: ";

    for (int i = 0; i < size; i++) {
        cin >> myArray[i];
    }
     //This is the array that is being intalized.

    do{
     arrayMenu();
     cin >> option; // Start of the loop for the work to continue
     switch(option){
     case 1: cout << "Enter the number: ";
     cin >> number;
     double numArray;
     cout << "Enter the number after which you want to insert: ";
     cin >> numArray;
     cout << endl;
     insertAfter(myArray, size, number, numArray);
                 //call insert function here
         break;
     case 2:
     double numRemove;
     cout << "Enter the element to be removed: ";
     cin >> numRemove;
     cout << "Element deleted";
        removeLast(myArray, size, numRemove);

break;
      case 3:
      cout << endl;
       cout << "The array is: ";
       for (int i = 0; i < size; i++) {

           cout << myArray[i] << " "; // The array will print here once called
       }
       cout << endl;

        break;
    case 4: cout << "Elements shifted" << endl;
    alternateShift(myArray, size);
    break;

    case 5: cout << "Array sorted." << endl;
    sort(myArray, size);
    break;
      default:
            if (option > 6 || option < 1) {
                cout << "Invalid Choice!" << endl;

                }
            }
        }while(option!=6);
        cout << "Goodbye!" << endl;
        cout << endl;


    return 0;
}


   //This is my insertAfter function
  void insertAfter(double myArray[], int& size, double numInsert, double numArray) {
    for (int i = 0; i < size - 1; i++) {
        if (myArray[i] == numArray) {
for (int j = size; j > i; j--) {
                myArray[j] = myArray[j - 1];
            }
            myArray[i + 1] = numInsert;
            size++;
        }
    }
    cout << "Element Inserted" << endl;
}

  // This is going to be the Remove Last function
  void removeLast(double myArray[], int& size, double numRemove){
      for (int i = size -1; i>= 0; i--)
      {
          if(myArray[i] == numRemove)
          {
              for(int j = i; j < size -1; j++)
              {
                  myArray[j] = myArray[j + 1];

              }
                  size--;
                  return;
            }

       }

      }
        //Shift Function
        void alternateShift(double myArray[], int& size) {
    // Saves the index and repeates it 
    double lastElement = myArray[size - 1];

    //This will iterate through the array 
    for (int i = size - 1; i > 0; i -= 2) {
        myArray[i] = myArray[i - 1];
    }
 // check the array
    for (int i = 0; i < size - 2; i += 2) {
        myArray[i] = myArray[i + 2];
    }

    // Should check for the evens
    if (size % 2 == 0) {
        myArray[1] = lastElement;
    } else {
        myArray[0] = lastElement;
    }
}


//sort function 
   void sort(double myArray[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int posMin = i;
        for (int j = i + 1; j < size; ++j) {
            if (myArray[j] < myArray[posMin]) {
                posMin = j;
            }
        }
// Swap elements if needed
        if (posMin != i) {
            double temp = myArray[i];
            myArray[i] = myArray[posMin];
            myArray[posMin] = temp;
        }
    }
}


 //My Menu Function
   void arrayMenu(){
    cout << endl;
    cout << "1. Insert an element" << endl;
    cout << "2. Remove an element" << endl;
    cout << "3. Print the array" << endl;
    cout << "4. Shift the elements" << endl;
    cout << "5. Sort the array" << endl;
    cout << "6.Exit " << endl;
    cout << "Enter your option:  ";



}
