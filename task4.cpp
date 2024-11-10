#include<iostream>
using namespace std;
bool Check_Seven(int numbers[], int n);

int main()
{
    int n;
    cout<<"Enter the number of elements you want in array: ";
    cin>> n;

    int numbers[n];
    for(int i=0; i<n;i++)
    {
        cout<<"Enter the elements of array one by one: ";
        cin>>numbers[i];
    }

    if(Check_Seven(numbers, n))
    {
        cout<<" Boom! "<<endl;
    }
    else
    {
           cout<<"7 is Not Found"<<endl;
    }

}
bool Check_Seven(int numbers[], int n)
{
    for (int i=0; i<numbers[n];i++)
    {
       int num=numbers[n];

       while( num>0)
       {
         if(num%10 == 7)
         {
            return true;
         }
         num = num /10;
       }
    }
}