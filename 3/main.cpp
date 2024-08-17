//
//  main.cpp
//  3
//
//  Created by Shubham Walhekar on 8/10/24.
//
//      call by ref
//      https://www.programiz.com/online-compiler/1XKT35thvQYCV

//      function overloading
//      https://www.programiz.com/online-compiler/1YuDUKWUjtxCo

//      static variable
//      https://www.programiz.com/online-compiler/24XBiTiUOwDU3

//      static function
//      https://www.programiz.com/online-compiler/4SqzyEBKn67aP

//      friend function
//      https://www.programiz.com/online-compiler/7ap71cjXEeplg

//      dynamic memory allocation & deallocation
//      https://www.programiz.com/online-compiler/9ODQ4ftJEKkAM

//      operator overloading
//     https://www.programiz.com/online-compiler/0qbEFT43k59kz

#include <iostream>
using namespace std;

class Date
{
    int dd,mm,yy;
public:
    void accept();
    void display();
};
class Student
{
    int rollno;
    char name[20];
    float percentage;
    Date bdate;
    
public:
    void accept();
    void display();
};

void Student :: accept(){
    cout <<"Enter student roll no,name, and percentage :\n";
    cin >> rollno >> name >> percentage ;
    bdate.accept();
    
}
void Student:: display(){
    cout << "Roll no : "<< rollno << endl;
    cout << "Name : "<< name << endl;
    cout << "Percentage : "<< percentage << endl;
    bdate.display();
}


void Date :: accept(){
    cout <<"Enter date / month / year:\n";
    cin >> dd >> mm >> yy  ;
}
void Date:: display(){
    cout << "Date is  : "<< dd <<"/" << mm <<"/"  << yy << endl;
   
}


int main(){
    //1st way to create an obj
    /*Student S;
    S.accept();
    S.display();
    
    //2nd way to create an obj
    Student *ptr = new Student();
    ptr ->accept();
    ptr -> display();*/
    
    //create array of object
    
    int i,n;
    Student S[100];
    cout << "Enter how many student do u want ? "<<endl;
    cin >> n;
    
    for(i=0;i<n;i++)
    {
        S[i].accept();
    }
    for(i=0;i<n;i++)
    {
        S[i].display();
        cout << "-------------------------------------- "<<endl;
    }
    
        
    return 0;
}
