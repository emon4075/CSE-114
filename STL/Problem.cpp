#include<bits/stdc++.h>
using namespace std;
int main(){
  int count=0;
  string doc_1,doc_2;
  doc_1="Data is the new oil of the digital economy";
  doc_2="Data is a new oil";
  list<string> L1,L2;
  stringstream SS(doc_1);
  string word;
  while (SS>>word) {
    L1.push_back(word);
  }
  stringstream ST(doc_2);
  while (ST>>word) {
    L2.push_back(word);
  }
  for(string i:L1)
  {
    for(string j:L2)
    {
      if (i==j) {
        count++;
      }
    }
  }
  L2.merge(L1);
  L2.sort();
  L2.unique();
  // cout<<count<< " "<<L2.size();
  float J=(count*1.0)/L2.size();
  cout<<J<<endl;
  return 0;
}
