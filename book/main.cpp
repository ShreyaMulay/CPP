//
//  main.cpp
//  book
//
//  Created by Shubham Walhekar on 8/15/24.
//

#include <iostream>
using namespace std;

class book{
public:
    char author[20];
    int price;
    char title[10];
    char stock[10];
public:
    book()
    {
       
    }
    book(char *a,char *t,int p, char *s)
    {
        strcpy(author, a);
        strcpy(title, t);
        price = p;
        strcpy(stock, s);
    }
    void accept()
    {
        cout <<"Enter author name :"<<endl;
        cin>> author;
        
        cout <<endl<<"Enter title  :"<<endl;
        cin>> title;
        
        cout <<endl<<"Enter price  :";
        cin>> price;
        
        cout <<endl<<"Enter stock  :";
        cin>> stock;
    }
    void display()
    {
            cout << "Author: " << author << endl;
            cout << "Title: " << title << endl;
            cout << "Price: $" << price << endl;
            cout << "Stock: " << stock << endl;
    }
};
int main() {
    book b[100];
    int n,i;
    
    cout <<"Enter how many books do u want ?"<<endl;
    cin >>n;
    for(i=0;i<n;i++)
    {
        cout <<"Enter deatils "<<endl;
        b[i].accept();
        cout<<endl;
    }
    
    for(i=0;i<n;i++)
    {
        cout <<"Deatils "<<endl;
        b[i].display();
        cout<<endl;
    }
    
    char search[10];
    char ans[10];
    bool found;

    
    do
    {
        found=false;

        cout<<"Enter title to search book :";
        cin >> search;
        
        for (int i = 0; i < n; i++)
        {
//            cout <<"123" << strstr(b[i].title, search);
            if(strstr(b[i].title, search) != nullptr)
            {
                cout << "Book found:" << endl;
                b[i].display();
                found=true;
                break;
                
            }

        }
        if(!found)
        {
            cout << "Book not found:" << endl;
        }
        
        cout<<"Do u want to continue ?";
        cin >>ans;
        
    }while(strcmp(ans,"no") !=0);
    
    return 0;
}
