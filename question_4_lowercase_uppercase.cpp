#include <iostream>
using namespace std;

//passing the ascii value of the character to make conditions
//uppercase letters range from 65 to 90
//lowercase letters range from 97 10 122
void charCheck(int characterNum){
    if(characterNum>=65 && characterNum<=90){
        cout<<"Character is uppercase";
    }
    else if(characterNum>=97 && characterNum<=122){
        cout<<"Character is lowercase";
    }
    else{
        cout<<"Not a character";
    }
}

int main(){

char character;

cout<<"Enter your character: ";
cin>>character;

//characters are stored as their respective numeric ASCII values
//so assigning the character to an int variable converts it
//to its respective ASCII value
int characterNum = character;

charCheck(characterNum);
cout<<endl;
return 0;

}