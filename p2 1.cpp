#include<iostream>
using namespace std;
int area(int side){
    return side*side;
}

int area(int length, int width){
    return length*width;
}

float area(float base,float height){
    return 0.5 *base *height;
}
int main(){
    int side;
    int length, width;
    float base,height;
    cout<<"Enter side of a square"<<endl;
    cin>>side;
    cout<<"area of square:"<<area(side)<<endl;

    cout<<"Enter length and width of rectangle:"<<endl;
    cin>>length>>width;
    cout<<"area of rectangle is :"<<area(length,width)<<endl;

    cout<<"enter base and height of triangle :"<<endl;
    cin>>base>>height;
    cout<<"area of the triangle is :"<<area(base,height)<<endl;

    return 0;
}