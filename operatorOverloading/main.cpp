//
//  main.cpp
//  operatorOverloading
//
//  Created by Shubham Walhekar on 8/17/24.
//

#include <iostream>
using namespace std;
class overloadingEx
{
    string str;
public:
    overloadingEx(){}
    overloadingEx(string s)
    {
        str = s;
    }
    int operator==(overloadingEx s)
    {
        return strcmp(str.c_str(),s.str.c_str()) == 0;
    }
    ostream operator <<(ostream out, overloadingEx s)
    {
        out << s.str <<endl;
        return out;
    }
  
    
};

int main()
{

    int ch;
    overloadingEx s1,s2;
    
  
    do
    {
        cout <<"What u want fro  below :"<<endl;
        cout <<"1 : == Equality "<<endl;
        cout <<"2 : = String copy "<<endl;
        cout <<"3 : + Concatination "<<endl;
        cout <<"4 : << display string "<<endl;
        cout <<"5 : >> accept string "<<endl;
        cout <<"6 : - reverse string "<<endl;
        
        cin >> ch;
        
        
        switch(ch)
        {
            case 1:
             
                cout << "Enter String 1 : ";
                cin >> s1;
                
                cout << "Enter String 2 : ";
                cin >> s2;
                
                if(s1 == s2)
                {
                    cout <<"Both strings are equal ."<<endl;
                }
                else{
                    cout <<"Strings are not equal ."<<endl;
                }
                break;
            case 2:  
               break
                
                
            default:
                exit(0);
        }
        
        
        
    }while(ch !=0);
    
    return 0;
}
