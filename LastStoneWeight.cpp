#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int laststoneweight(vector<int> &stones){
    priority_queue<int> pq(stones.begin(),stones.end());
    while(pq.size()>1){

        int p1=pq.top(); // 1st element 
        pq.pop();
        int p2=pq.top(); // 2nd element 
        pq.pop();

        int sub= abs(p1-p2);

        if(sub!=0) pq.push(sub);
    }
    if(pq.size()==0) return 0;
    return pq.top();
}
int main(){

   vector<int> v={2,7,4,1,8,1};
   int result=laststoneweight(v);
   cout << "Last stone weight: " << result << endl;
   return 0;
   


}