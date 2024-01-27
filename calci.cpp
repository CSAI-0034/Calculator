#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a; 
    int x,y;
    cout<<"Enter 2 numbers to perform operation - ";
    cin>>x>>y;
    cout<<"What do you want to perform"<<endl;
    cout<<"Enter 1 to for addition \nEnter 2 for subtraction \nEnter 3 for multiplication \nEnter 4 for division "<<endl;
    cin>>a;
    int flag=0;
    switch(a)
    {
        case 1:
            cout<<"Sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
            break;
        case 2:
            cout<<"Difference of "<<x<<" and "<<y<<" is "<<x-y<<endl;
            break;
        case 3:
            cout<<"Product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
            break;
        case 4:
            cout<<"Divison of "<<x<<" and "<<y<<" is "<<float(x/y)<<endl;
            break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}