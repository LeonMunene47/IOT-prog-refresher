#include <iostream>
using namespace std;


int main(){
    float x = 0.0;


    //i initialize at 16 because according to the question that is when i should start doing x+(2/y)
    //stop at y=8 cause further decrement will be y<6
    for(float y=20.0-4.0; y>=6.0; y-=4){
        x+=(2/y);
        cout<<y<<endl;
        cout<<x<<endl<<endl;
    }
    
    return 0;
}



