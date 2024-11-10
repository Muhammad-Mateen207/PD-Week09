#include<iostream>
using namespace std;

void Transformation(int array[]);

int main()
{
  
     int array[3];

     for(int i=0; i<3; i++)
     {
        cout<<"Enter Element of the array: ";
        cin>>array[i];
     }

     int transformations;
     cout<<"Enter number of required Even-Odd transformations: ";
     cin>>transformations;

     for(int k=0; k<transformations; k++)
     {
          Transformation(array);
     }

}
void Transformation(int array[])
{
   int j;
     for(j=0; j <3; j++)
     {
        if(array[j] % 2 == 0)
        {
            array[j] = array[j] - 2;
        }
        else if(array[j] % 2 != 0 )
        {
            array[j] = array[j] + 2;
        }
     }

     cout<<" Output: [";
     for(int l=0; l<3; l++)
     {
         cout<<array[l];
        if(l<2)
        {
            cout<<" ,";
        }   
     }
    
     cout<<" ]"<<endl;
}