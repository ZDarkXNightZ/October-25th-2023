#include <iostream>

using namespace std;

int main()
{
    string secret_password = "acer";
    string user_guess;
     bool isCorrect = true;

    cout<<"Enter secret password"<<endl;
    cin>>user_guess;

    if(user_guess==secret_password)
    {
     cout << "You got it!" << endl;
    }
    else {
        cout << "Try again." << endl;
    }

}
