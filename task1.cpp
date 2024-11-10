#include<iostream>
using namespace std;

int main()
{
     const int elements = 4;

     string fruit[elements]={"Peach","Apple","Guava","Watermelon"};
     int price[elements] = {60,70,40,30};

     int quantity;
     string fruitname;

     cout<<"Enter the name of Fruit:";
     cin>>fruitname;
     cout<<"Enter the quantity: ";
     cin>>quantity;

     for(int i=0; i<elements; i++)
     {
         if(fruitname == fruit[i])
         {
             int final_price = price[i]*quantity;
              cout<<"The Price of "<<quantity<<" kgs of "<< fruitname <<" is "<< final_price;   
             return 0;
         }
     }

     if(fruitname != fruit[elements])
     {
         cout<<"Fruit Not Found";
     }

}