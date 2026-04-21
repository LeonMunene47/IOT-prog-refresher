#include <iostream>
using namespace std;

    //function for perimeter
    int perimeter(int side) {
        int result = side * 4;
        return result;
    }

    //function for area
    int area(int side) {
        int result = side * side;
        return result;   
    }

int main(){
    int side;
    cout << "Enter side: ";
    cin >> side;



    cout <<"Perimeter is: "<< perimeter(side) << endl;
    cout <<"Area is: "<< area(side) << endl;

}
  
