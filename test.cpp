#include<bits/stdc++.h>
using namespace std;
 
bool three_sum(int Arr[], int arr_size, int sum) 
{ 
    int l, r; 

    for (int i = 0; i < arr_size - 2; i++)
    { 
 
        
        for (int j = i + 1; j < arr_size - 1; j++)
        { 
 
            
            for (int k = j + 1; k < arr_size; k++)
            { 
                if (Arr[i] + Arr[j] + Arr[k] == sum)
                { 
                    cout << "Output: " << Arr[i] <<
                        ", " << Arr[j] << ", " << Arr[k]; 
                    return true; 
                } 
            } 
        } 
    } 
 
 
    cout<<"Sum values not found"; 
} 
 
int main() 
{ 
    int Arr[] = { 1, 2, 6, 9, 3 }; 
    int sum = 13; 
    int arr_size = sizeof(Arr) / sizeof(Arr[0]); 
    three_sum(Arr, arr_size, sum); 
    return 0; 
} 