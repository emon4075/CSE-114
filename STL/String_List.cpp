#include<bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
  list<string> S={"Emon","Fahim","Saad"};
  cout<<"Before Push: "<<endl;
  for(string ST:S){
    cout<<ST<<endl;
  }
  S.push_back("EMRAN");
  S.push_front("Anik");
  cout<<"After Push At The End: "<<endl;
  S.sort();
  string STR="University of Jobra";
  stringstream SS(STR);
  string word;
  for(string ST:S){
    cout<<ST<<endl;
  }
  list<string> String_List;
  while(SS>>word)
  {
    String_List.push_back(word);
  }
  cout<<endl;
  cout<<"Separated Words: "<<endl;
  for(string ST:String_List){
    cout<<ST<<endl;
  }
  return 0;
}
