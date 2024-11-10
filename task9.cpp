#include<iostream>
#include<string>
using namespace std;

bool Valid_Pin(string);
string Conversion(string);

string Moves[10] = {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};

int main()
{
   string pin;
   cout<<"Enter the Pin Code: ";
   cin>>pin;

   if(Valid_Pin(pin))
   {
      string D_Moves;
      D_Moves = Conversion(pin);
      cout<<D_Moves<<endl;
   }
   else
   {
        cout<<" INVALID PIN CODE. PLEASE TRY AGAIN!";
   }

}

bool Valid_Pin(string pin)
{
    if(pin.length() != 4)
    {
        return false;
    }
    for(int i=0; i < pin.length() ; i++)
    {
        if( pin[i] < '0' || pin[i] > '9')
        {
            return false;
        }
    }
    return true;
}
string Conversion(string pin)
{
    string Result;

    for(int i=0; i< pin.length(); i++)
    {
        int digit = pin[i] - '0';
        int index = (digit + i) % 10;

        Result = Result + Moves[index];
        if(i < pin.length()-1)
        {
            Result = Result + " ,";
        }
    }
    return Result;
}