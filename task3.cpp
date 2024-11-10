#include<iostream>
using namespace std;
bool isEven(int count);

int main()
{
     string word;
     cout<<"Enter a Word: ";
     cin>>word;

     int count=0;
     for(int i=0; word[i] != '\0'; i++)
     {
        char one_letter = word[i];
        count++;
     }
     cout<<isEven(count);
}
bool isEven(int count)
{
    if(count/2 == 0)
     {
        return true;
     }
     else
     {
        return false;
     }    
}
