#include <iostream>
using namespace std;

int main(){
	int myArray[5]; // initialise an array of type int with 5 values
    double summation=0;
    double avg;

	//loop to populate the array
	for (int i=0; i<5; i++){
		cout<<"Enter a value to populate the array: ";
		cin>>myArray[i];
	}

    //loop to sum all values of the array
    for (int i = 0; i < 5; i++) {
        summation += myArray[i];
    }

    //average of array values
    avg=(summation/5);
    cout<<endl<<"Average is: "<<avg<<endl;

    return 0;
	
}
