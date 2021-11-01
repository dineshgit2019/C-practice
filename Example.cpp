#include <bits/stdc++.h>
using namespace std;
 
// Prints frequencies of individual words in str
void printFrequencies(const string &str)
{
    
    unordered_map<string, int> wordFreq;
 
   
    stringstream ss(str);  // Used for breaking words
    string word; // To store individual words
    while (ss >> word)
        wordFreq[word]++;
 
   
    unordered_map<string, int>:: iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";
}
 

int main()
{
    string str = "i am dinesh and dinesh d and d ";
                
    printFrequencies(str);
    return 0;
}