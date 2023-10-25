#include <iostream>
using namespace std;

int main()
{
    string yeeee = "yes";
    string nahhh = "no";
    string answer;
     bool isCorrect = true;

    cout<<"This program may reformat your hard disk. Do you wish to continue (yes/no)?\n";
    cin>>answer;

    if(answer==yeeee)
    {
     cout << "Bye bye data .\n";
    }
   
    else if(answer==nahhh)
    {
        cout<<"Wise Choice.\n";
    }
   
    else {
        cout << "That was not a yes or no, so I guess I will trash your disk!\n";
    }

}