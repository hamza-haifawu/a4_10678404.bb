#include <iostream>

using namespace std;



    int GCD(int m, int n)
{
          if(n==0){

            return m;
            }

          else
{
        (GCD(n, m%n));
}
}

int main()
{
    int m, n;
    char choice;
    do
        {
            cout<< "Enter your first number: ";
            cin>> m;
            cout<<endl;

            cout<< "Enter your second number:";
            cin>> n;
            cout<<endl;
            cout<< " GCD is: "<<GCD(m, n)<<endl;
            cout<< "Do you wish to continue(press y):";
            cin>>choice;
            cout<<endl;

        }while(choice=='y'|| choice=='Y');

return 0;}

