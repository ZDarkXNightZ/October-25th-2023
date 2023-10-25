#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{

double ct, cte, cts, cto, ctt;
    cout<<"Enter the cost of your groceries\n";
    cin>>ct;

cte=ct*0.08;
cts=ct*0.10;
cto=ct*0.12;
ctt=ct*0.14;

   if (ct>10 && ct<61)
    {
            cout<<"You win a discount coupon of $"<<cte<<" (8% of your purchase)";
   }
    else if (ct>60 && ct<151)
    {
         cout<<"You win a discount coupon of $"<<cts<<" (10% of your purchase)";
    }
   else if (ct>150 && ct<211)
    {
        cout<<"You win a discount coupon of $"<<cto<<" (12% of your purchase)";
   }
   else if (ct>210)
    {
         cout<<"You win a discount coupon of $"<<ctt<<" (14% of your purchase)";
   }
   
   else cout<<"You haven't spent enough money to receive a discount";
   
   }