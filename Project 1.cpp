//***************************************
// Name: Cooper Vandiver
// Course: CS 155 - Computer Science 1
// Semester: Spring 2021
// Project 1: The program will compute the gross box office revenue, the distributor amount,
// and the net profit. It will then echo back the movie name along with the three computed values.
// It should display the amounts  using  a  dollar  sign  and  two  decimal  places.
//***************************************
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int adult, child;//declaring variables
    double temp1, temp2, gross, distAmt, net;
    char title[100];
    cout<<"What was the name of the movie? "; //getting input from user
    cin.getline(title,100);
    cout<<"How many adult tickets sold? ";
    cin>>adult;
    cout<<"How many children tickets sold? ";
    cin>>child;
    temp1 = adult*7.5; //computing total revenue from all adult tickets
    temp2 = child*4.75; //computing total revenue from all child tickets
    gross = temp1+temp2; //computing gross revenue
    distAmt = gross*0.8; //computing distributor amount
    net = gross-distAmt; //computing net profit
    cout<<fixed; //setting a fixed precision
    cout<<setprecision(2); //defining fixed precision
    cout<<endl<<"Movie Title:"<<right<<setw(28)<<title<<endl; //formatting and outputting the movie title
    cout<<"Gross Box Office Revenue:    $"<<right<<setw(10)<<gross<<endl; //formatting and outputting gross revenue
    cout<<"Distributor Amount:          $"<<right<<setw(10)<<distAmt<<endl; //formatting and outputting distributor amount
    cout<<"Net Profit:                  $"<<right<<setw(10)<<net<<endl; //formatting and outputting net profit
}
