//
//  main.cpp
//  intro
//
//  Created by Shubham Walhekar on 8/15/24.
//

#include <iostream>
using namespace std;

class House{
    class Furniture
    {
        char name[20];
        public:
            void accept()
            {
                cout << "Enter Furniture name :"<<endl;
                cin >> name;
            }
            void display()
            {
                cout << "Furniture name is :"<<name<<endl;
            }
    };
    class Person
    {
        char pname[20];
        public:
            void accept()
            {
                cout << "Enter your name :"<<endl;
                cin >> pname;
            }
            void display()
            {
                cout << "Name is :"<<pname<<endl;
            }
    };
public:
    void accept(){
        Furniture f;
        f.accept();
        Person p;
        p.accept();
    }
    void display(){
        Furniture f;
        f.display();
        Person p;
        p.display();
    }
};
void stat()
{
    int m=0;
    static int n =0;
    m++;
    n++;
    cout << m << n <<" " <<n<<" \n ";
}
int &min(int &x, int &y) //return by reference i.e return a varible 
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
//    House h;
//    h.accept();
//    h.display();
//    stat();
//    stat();
    int a=10,b=20;
    min(a,b) = -1;
    cout << a <<endl<<b<<endl;
    return 0;
}
