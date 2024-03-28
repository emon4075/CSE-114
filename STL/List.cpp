#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> Numbers={4,4,4,8,3,6};
  list<int> Number={0,3,1,2};
  cout<<"Initial List: ";
  for(int N:Numbers){
    cout<<N<<" ";
  }
  cout<<endl;
  Numbers.push_front(0);
  Numbers.push_back(4);
  Numbers.sort();
  Numbers.reverse();
  Numbers.unique();
  cout<<Numbers.empty()<<endl;
  cout<<"Modified List: ";
  for(int N:Numbers){
    cout<<N<<" ";
  }
  Numbers.merge(Number);
  Numbers.sort();
  for(int N:Numbers){
    cout<<N<<" ";
  }
  return 0;
}
