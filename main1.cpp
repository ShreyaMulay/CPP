//
//  main.cpp
//  15aug
//
//  Created by Shubham Walhekar on 8/15/24.
//

#include <iostream>
using namespace std;

class threePoint;
class twoPoint{
    int x;
    int y;
public:
    void accept()
    {
        cout <<"Enter value of x and y :"<<endl;
        cin >> x>>y;
    }
    void display()
    {
        cout <<"value of x and y :"<<endl;
        cout << x <<y <<endl;
    }
    friend void add(twoPoint t1,threePoint t2);
    friend void displayAll(twoPoint t1,threePoint t2);
};
class threePoint{
    int x;
    int y;
    int z;
public:
    void accept()
    {
        cout <<"Enter value of x , y and z :"<<endl;
        cin >> x>>y>>z;
    }
    void display()
    {
        cout <<"value of x , y and z :"<<endl;
        cout << x << y << z <<endl;
    }
    friend void add(twoPoint t1,threePoint t2);
    friend void displayAll(twoPoint t1,threePoint t2);
};
void add(twoPoint t1,threePoint t2)
{
    twoPoint sum2;
    threePoint sum3;
    
    sum2.x = t1.x + t1.y;
    sum3.y = t2.x + t2.y+t2.z;
    
    cout << "Sum of twoPoint :" << sum2.x << endl;;

    cout << "Sum of threePoint :"<< sum3.y<<endl;
}
void displayAll(twoPoint t1,threePoint t2)
{
    cout <<"value of x nd y  twoPoint :"<<endl;
    cout << t1.x << t1.y <<endl;
    
    cout <<"value of x, y and z  threePoint :"<<endl;
    cout << t2.x << t2.y << t2.z <<endl;
    
}
int main()
{
    twoPoint t1;
    t1.accept();
//    t1.display();
    threePoint t2;
    t2.accept();
//    t2.display();
//    add(t1,t2);
    displayAll(t1,t2);
    return 0;
}

