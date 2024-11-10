#include<iostream>
using namespace std;

int main()
{
    int price = 500;
    string movies[5] = {"Gladiator","StarWars","Terminator","TakingLives","TombRider"};

    string movie;
    cout<<"Enter Name of the Movie: ";
    cin>>movie;

    int final_price;

    for(int i=0; i<5; i++)
    {
        if((movie == movies[i]))
        {
            if(i/2 == 0)
            {

            final_price = .5 * 500;
            cout<<"Final Price of the movie "<<movies[i]<<" is "<<final_price;
            return 0;
            }
            else if(i/2 != 0)
            {
                final_price = .1 *500;
                cout<<"Final Price of the movie "<<movies[i]<<" is "<<final_price;
                return 0;
            }
           
        }

    }
    if(movie != movies[5])
    {
        cout<<"Movie Not Found";
    }


}