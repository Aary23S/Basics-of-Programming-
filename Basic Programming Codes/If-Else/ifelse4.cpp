//vowel or consonent by menu driven prog
#include<iostream>
using namespace std;
int main()
{
        char alpha;
        cout<<"\nEnter the alphbatet : ";
        cin>>alpha;
        switch(alpha)
        {
            case 'a' :
            cout<<"\nVowel";
            break;
            case 'e' :
            cout<<"\nVowel";
            break;
            case 'i' :
            cout<<"\nVowel";
            break;
            case 'o' :
            cout<<"\nVowel";
            break;
            case 'u' :
            cout<<"\nVowel";
            break;
            default : 
            cout<<"\nConsonent ";
            break;
        }

    return 0;

}