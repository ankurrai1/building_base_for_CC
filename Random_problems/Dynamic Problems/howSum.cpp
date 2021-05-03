#include <bits/stdc++.h>

// task is to find how target sum is achived each element can be taken over and over

using namespace std;

void printVactor(vector<int> path){
    for(unsigned int i=0; i<path.size(); ++i){
        cout << path[i] << " ";
    }
}

vector<int> howSum(int target, int arr[], int n){
    vector<int> res;
    if(target == 0) return res;
    if(target < 0){
        res.push_back(-1);
        return res;
    }
    for(int i = 0; i < n; i++){
        res = howSum(target-arr[i], arr, n);
        if(res.empty() || res[0] != -1){
            res.push_back(arr[i]);
            return res;
        }
    }
    res.push_back(-1);
    return res;
}


int main()
{
    int arr1[] = {2, 3};
    int arr2[] = {5, 3, 4, 7};
    int arr3[] = {2, 4};
    int arr4[] = {2, 3, 5};
    int arr5[] = {7, 14};
    
    vector<int> res;
    
    res = howSum(7, arr1, 2);
    if(res.empty() || res[0] != -1) printVactor(res);
    else cout << "NULL" << endl;
    
    cout << " -------------------"  <<endl;
    
    vector<int> res1;
    
    res1 = howSum(7, arr2, 4);
    if(res1.empty() || res1[0] != -1) printVactor(res1);
    else cout << "NULL" << endl;
    
    cout << " -------------------"  <<endl;
    
    vector<int> res2;
    
    res2 = howSum(7, arr3, 2);
    if(res2.empty() || res2[0] != -1) printVactor(res2);
    else cout << "NULL" << endl;
    
     cout << " -------------------"  <<endl;
     
    vector<int> res3;
    
    res3 = howSum(8, arr4, 3);
    if(res3.empty() || res3[0] != -1) printVactor(res3);
    else cout << "NULL" << endl;
    
    return 0;
}
