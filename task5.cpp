#include<iostream>
using namespace std;

bool check_elements(string array[],int num);

int main()
{
    int num=4;

    string array[num];

    for(int i=0; i<num; i++)
    {
        cout<<"Enter 4 elements of the array one by one: ";
        cin>>array[i];
    }

    if(check_elements(array,num))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}
bool check_elements(string array[],int num)
{
    for(int j=1; j<num; j++)
    {
        string first= array[0];

        if(array[j] != first)
        {
            return false;
        }
        return true;
    }
}