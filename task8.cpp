#include<iostream>
using namespace std;

int calculate_time(int);

int main()
{
    int num;
    cout<<"Enter Number of Colours you want: ";
    cin>>num;

    string colors[num];

    for(int i=0; i<num;i++)
    {
        cout<<"Enter "<<i+1<<" color: ";
        cin>>colors[i];
    }

    int result = calculate_time(num);
    cout<<result;
}
int calculate_time(int num)
{
    int switch_time;
    switch_time = num -1 ;

    int print_time;
    print_time= num*2;

    int total_time;
    total_time = print_time + switch_time;
    return total_time;
}