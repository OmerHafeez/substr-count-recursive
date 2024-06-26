#include <iostream>
using namespace std;

int countSubstrsHelper(char* s, int start, int end);
int countSubstrs(char* s, int start, int end);

int main() 
{
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH];
    cout << "Enter a string: ";
    cin >> s;

    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    
    int count = countSubstrs(s, 0, length-1);
    cout << "Number of substrings that start and end with the same character: " << count << endl;
    
    return 0;
}

int countSubstrs(char* s, int start, int end) 
{
    if (start >= end)
    {
        return 0;  
    }
    
    int count = countSubstrsHelper(s, start, end);

    if (s[start] == s[end] || start == end) 
    {
        count += 1 + countSubstrs(s, start + 1, end - 1);
    }
    
    return count; 
}

int countSubstrsHelper(char* s, int start, int end) 
{
    if (start > end)
    {
        return 0;  
    }
    
    return countSubstrsHelper(s, start + 1, end) + 1;
}
