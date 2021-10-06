//~~~START-Wed, 06-Oct-2021, 12:10:53 IST
//~~~Author:Rajesh Pandian M | mrprajesh.co.in


#include <iostream>
#include <numeric>
#include <vector>

int sumInt(const std::vector<int> v)  {
  return std::accumulate(v.begin(),v.end(), 0, std::plus<int>());
}

//~ int main(int argc, char* argv[]){
  //~ std::vector<int> v={1,2,3,4,5,6,7,8,9,10};
  //~ std::cout<< "Sum:" << sumInt(v) << '\n';
  //~ return 0;
//~ }
