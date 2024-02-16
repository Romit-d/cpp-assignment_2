#include<iostream>
using namespace std;
int main()
{
    char ch, ch1;
    int diff;
    cout<<"Enter the 1st character - ";
    cin>>ch;
    cout<<"Enter the 2nd character - ";
    cin>>ch1;
    diff =(int)ch - (int)ch1;
    cout<<"The difference between tow ASCII values is - "<<diff<<endl;
    return 0;
}