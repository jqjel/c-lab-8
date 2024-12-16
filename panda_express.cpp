#include <iostream>
using namespace std;
/* Your task is to create a program that calculate and compares the time it takes for a 
student to get to the bus stop after leaving Stamps Auditorium, based on whether they stop
at Panda Express or not. The program will do the following: */
    //The last name of the professor who gave the talk (stored in the variable professor).
    //The wait time at Panda Express (stored in the variable wait_time_at_panda).

    // student stops at panda express, student goes directly to the bus stop
    /*After leaving lecture given by Professor [Professor Last Name] in Stamps Auditorium, it 
    will take X minutes to get to the bus if you stop at Panda Express. It will take Y minutes 
    if you don't stop at Panda Express.*/



int main() {
    cout << "What is your Professor's Last name? "; 
    string proffesor;
    cin >> proffesor;
    cout << "How long did your friend say the wait was at Panda Express? ";
    int wait_time_at_panda;
    cin >> wait_time_at_panda;

    int PBD = 600;
    int SPD = 900;
    int SBD = 1500;
    int v = 5;
    int PBDt = PBD / v / 60;
    int SPDt = SPD / v / 60;
    int SBDt = SBD / v / 60;
    int totaltimeNOstop = SBDt;
    int totaltime = SPDt + wait_time_at_panda + PBDt;
    cout << "After leaving lecture given by Professor " << proffesor << " in";
    cout << " Stamps Auditorium, it will take " << totaltime << " minutes to get to the bus if";
    cout << " you stop at Panda Express. It will take " << totaltimeNOstop << " minutes if you ";
    cout << "don't stop at Panda Express." << endl;
}