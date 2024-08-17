//
//  main.cpp
//  movie
//
//  Created by Shubham Walhekar on 8/15/24.
//

// Create a class Movie that stores the name of a movie, its genre, and the number of actors in the movie. Use dynamic memory to allocate space for storing actor names, and implement a constructor to initialize the movie details. Add a method to display the movie information along with the list of actors.
#include <iostream>
using namespace std;

class Movie{
public:
    string mname;
    string genre;
    int no_actors;
    string *aname;

    public:
    Movie(){}
    Movie(string n,string g,int n_a)
    {
        mname =n;
        genre = g;
        no_actors =n_a;
        
        aname = new string[no_actors];
        
        int i;
        for(i=0;i<no_actors;i++)
        {
            cout << "Enter "<<i+1<<" actor name :"<<endl;
            cin >> aname[i];

        }
        
    }
    void display()
    {
        cout << "movie name :";
        cout << mname <<endl;
        
        cout << "movie genre :";
        cout << genre<<endl;
        
        
        cout << "movie no_actors :";
        cout << no_actors<<endl;
        
        
        cout << "actors name :";
        int i;
        for(i=0;i<no_actors;i++)
        {
            cout << endl<<i+1<<"  actor name :";
            cout << aname[i]<<endl;

        }
        
    }
//    bool searchMovie(string search)
//    {
//        return (strstr(aname.c_str(), search.c_str()) != nullptr);
//    }

};
int main() 
{
    Movie m("ddlj","action",3);
    
    m.display();
    
    //   .c_str(): This converts a std::string to a C-style string (const char*) so that you can pass it to functions like strstr.
//        
//    bool found;
//    string search;
//    int i;
//    
//    cout<<"Enter actor name to search :";
//    cin >> search;
//    
//    for(i=0;i<n;i++)
//    {
//        if(m[i].searchMovie(search))
//        {
//            m[i].display();
//            found=true;
//            break;
//        }
//    }
//    if(!found)
//    {
//        cout<<"Not found";
//    }
//    
//    
//    
    
    
    
    
    
    
    
   /* Movie m[10];
    int i,n;
    cout <<"Enter how many object do u want ?"<<endl;
    cin >>n;
    
    for(i=0;i<n;i++)
    {
        cout <<"Enter movie details "<<endl;
        m[i].accept();
    }
    for(i=0;i<n;i++)
    {
        cout <<"movie details "<<endl;
        m[i].display();
    }
    string search;
    
    cout<<"Enter actor name to search :";
    cin >> search;
    
   
//   .c_str(): This converts a std::string to a C-style string (const char*) so that you can pass it to functions like strstr.
    
    bool found;
    for(i=0;i<n;i++)
    {
        if(m[i].searchMovie(search))
//        if (strstr(m[i].aname.c_str(), search.c_str()) != nullptr) 
        {
            m[i].display();
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Not found";
    }
    */
    return 0;
    
    
}
