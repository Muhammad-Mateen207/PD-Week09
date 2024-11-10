#include<iostream>
#include<string>
using namespace std;

int common_characters(string,string);

int main()
{
    string word1;
    cout<<"Enter First String: ";
    cin>> word1;

    string word2;
    cout<<"Enter Second String: ";
    cin>> word2;

    int result = common_characters(word1,word2);
    cout<<"Count of Common Characters is: "<<result;
    
}
int common_characters(string word1,string word2)
{
    int count=0;
    for(int i=0; i< word1.length(); i++)
    {
        for(int j=0; j < word2.length(); j++)
        {
            if (word1[i] == word2[j])
            {
                count++;
                word2[j]='\0';
                break;
            }
        }
    }
   return count;
}