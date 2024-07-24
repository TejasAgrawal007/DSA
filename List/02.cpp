#include<bits/stdc++.h>
using namespace std;


int getSum(list<int> list1)
{
    int count = 0;

    for(auto x : list1)
    {
        count = count + x;
    }
    return count;

}

int main(){

    list<int> list1{1,2,3,4,5};

    int result = getSum(list1);

    cout<<"The Sum = "<<result<<endl;
    
    return 0;
}