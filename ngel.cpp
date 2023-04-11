//Soham mishra cs-iot-2-a-2101641550075
#include <iostream>
#include <stack>
using namespace std;
 

void printPrevSmaller(int arr[], int n)
{
    
    stack<int> Stack;
    for (int i=0; i<n; i++)
    {
        while (!Stack.empty() && Stack.top() <= arr[i])
            Stack.pop();
        if (Stack.empty())
            cout << "-1,";
        else {
		
            cout << Stack.top() << ", ";}
        Stack.push(arr[i]);
    }
}
 
int main()
{
    int arr[] = {1, 3, 0, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printPrevSmaller(arr, n);
    return 0;
}
