#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
  unordered_map<int, int> hash;
  int arr[] = {0, 1, 2, 3, 4, 5,5} ;

int size = sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<size;i++)
  {
      hash[arr[i]]++;
  }

   for (auto i : hash) 
  {
   cout<< i.second<<endl;
  }

   return 0;

}