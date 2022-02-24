#include<iostream>
#include<vector>

using namespace std;

void maxSum(vector<int> arr, int n)
{
    int min=arr[0];
    long long sum = 0;
    int index;
    for(int i=0; i<n; i++)
    {
        if(min>=arr[i])
        {
            min = arr[i];
            index = i;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(i!=index)
        {
            sum += arr[i];
        }
    }
    cout<<sum;
}

void minSum(vector<int> arr, int n)
{
    int max=arr[0];
    long long sum=0;
    int index;
    for(int i=0; i<n; i++)
    {
        if(max<=arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    
    for(int i=0; i<n; i++)
    {
       if(i!=index)
       {
           sum += arr[i];
       } 
    }
    cout<<sum;
}

void miniMaxSum(vector<int> arr) {
    int n=arr.size();
    minSum(arr, n);
    cout<<" ";
    maxSum(arr, n);
    cout<<endl;
}

int main()
{
    vector<int> arr;
    int input;
    // int input[5]={156873294, 719583602, 581240736, 605827319, 895647130};

    for (int i = 0; i < 5; i++)
    {
        cin>>input;
        arr.push_back(input);
    }

    int n = arr.size();
    minSum(arr, n);
    cout<<" ";
    maxSum(arr, n);
    
    return 0;
}