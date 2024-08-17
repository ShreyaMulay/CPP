//
//  main.cpp
//  game
//
//  Created by Shubham Walhekar on 8/15/24.
//

#include <iostream>
using namespace std;

class game{
    int no_of_player;
    string *name;
    
public:
    game(int n)
    {
        no_of_player = n;
        name = new string[no_of_player];
    
        int i;
        
        for(i=0;i<no_of_player;i++)
        {
            cout <<" Enter "<<i+1<<" player name :";
            cin>>name[i];
        }
    }
    void display(int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            cout <<i+1<<" player name :";
            cout <<endl<<name[i];
        }
    }
};

int main() {
    game g(3);
    g.display(3);
    
    return 0;
}
