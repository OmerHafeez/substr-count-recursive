# substr-count-recursive
Write a C++ program to find out the substrings which starts and ends with same character.
Input : S = "abcab"
Output : 7
There are 15 substrings of "abcab" a, ab, abc, abca, abcab, b, bc, bca bcab, c, ca, cab, a, ab, b
Out of the above substrings, there are 7 substrings : a, abca, b, bcab, c, a and b.
Input : S = "aba"
Output : 4
The substrings are a, b, a, and aba
Function Prototype:
int countSubstrs(string str, int starting, int index, int size);
