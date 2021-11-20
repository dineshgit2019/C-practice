// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;
 
#include <iostream>
#include <string>
#include <set>
#include <algorithm>

int main()
{
   
   string str="dineshd";
   
   set<char> s;
   for(char ch : str)
   {
       s.insert(ch);
   }
   for(char  c : s){
   cout<<c<<endl;
   }
    return 0;
}