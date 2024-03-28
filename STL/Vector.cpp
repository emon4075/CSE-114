#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  vector<int> V;
  V.push_back(10);
  V.push_back(20);
  V.push_back(30);
  V.push_back(40);
  cout<<"Size of The Vector: "<<V.size()<<endl;
  cout<<"Capacity of the Vector is: "<<V.capacity()<<endl;
  // for (int i = 0; i < V.size(); i++) {
  // cout<<V[i]<<endl;
  // }
  for(auto it=V.begin();it<V.end();it++){
    cout<<*it<<endl;
  }
  return 0;
}
