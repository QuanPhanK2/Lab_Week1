#include <iostream>
using namespace std;

void calulate (int speed, int time){
    if (speed > 0 && time > 1){
    for(int i = 1; i <= time; i++)
    {
        cout << i  <<"      "  <<speed*i <<"\n" ;
    }
    
   } else {
    cout << "Speed must greater than 0 and time must greater than 1!";
   }
}
   

int main()
{
     int speed, time;
    cout << "How many hour has is traveled?";
    cin >> time;
    cout << "What is speed of the vehicle?";
    cin >> speed;
    calulate(speed, time);
    return 0;
}