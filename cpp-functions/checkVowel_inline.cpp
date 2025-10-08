#include<iostream>
using namespace std;

inline char checkVowel(char letter)
{
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

int main()
{
    cout << "The letter is = " << checkVowel('p') ? "Vowel" : "Consonant";
    return 0;
}
