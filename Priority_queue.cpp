// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main(){

//      vector<int>v={10,4,5,4,5,3,7,6,4,3,21};
//      int arr[]={10,4,5,4,5,3,7,6,4,3,21};

//     priority_queue<int> hp;//Maxheap by default
//     priority_queue<int, vector<int> ,greater<int> > hp; // Min heap
//     priority_queue<int, vector<int> ,greater<int> > minheapvector(v.begin(),v.end()); // using vector
//      priority_queue<int> hp[arr,arr+11];// using array

//     hp.push(80);
//     hp.push(3);
//     hp.push(50);
//     hp.push(1000);
//     hp.push(10);
    
//    cout<<hp.top();

// }
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    vector<int> v={10,4,5,4,5,3,7,6,4,3,21};
    int arr[]={10,4,5,4,5,3,7,6,4,3,21};

    // Max heap (default)
    priority_queue<int> maxheap;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    // Min heap created using vector
    priority_queue<int, vector<int>, greater<int>> minheapvector(v.begin(), v.end());

    // Max heap created using array
    priority_queue<int> maxheaparray(arr, arr+11);

    // Push elements in maxheap
    maxheap.push(80);
    maxheap.push(3);
    maxheap.push(50);
    maxheap.push(1000);
    maxheap.push(10);
    
    cout << maxheap.top();

    return 0;
}