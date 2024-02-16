#include<iostream>
using namespace std;
int main()
{
    float r;
    float pi= 3.14;
    float height;
    float volume;
    cout<<"Enter the vlaue of Radius - ";
    cin>>r;
    cout<<"Enter the value of height - ";
    cin>>height;
    volume=pi*r*r*height;
    cout<<"The volume of the cylinder is "<<volume<<endl;
    return 0;
}