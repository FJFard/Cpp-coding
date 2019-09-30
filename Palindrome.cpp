/*
A palindrome is a word that reads the same backward or forward.

Write a function that checks if a given word is a palindrome. Character case should be ignored.

For example, isPalindrome("Deleveled") should return true as character case should be ignored, resulting in 
"deleveled", which is a palindrome since it reads the same backward and forward.
/**/

#include <string>
#include <stdexcept>
#include <iostream>

bool isPalindrome(const std::string& word)
{
   //throw std::logic_error("Waiting to be implemented");
    int l = word.size();
    for(int i=0; i<l/2; i++){
        if(std::tolower(word.at(i)) != std::tolower(word.at(l-1-i))){
            return(false);
        }
    }
    return(true);
}

#ifndef RunTests
int main()
{
    std::cout << isPalindrome("Deleveled");
}
#endif
