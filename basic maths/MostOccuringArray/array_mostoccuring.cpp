#include<iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
  int max_count = 0;
  int majority_candidate = -1; // Initialize with a value that doesn't exist in the array
  for (int i = 0; i < size; i++)
  {
    int count = 1;
    for (int j = i + 1; j < size; j++)
      if (nums[i] == nums[j])
        count++;
    if (count > max_count)
    {
      max_count = count;
      majority_candidate = nums[i]; // Update the majority candidate
    }
  }

  if (max_count > size / 2)
  {
    cout <<"\nmajority candidate found "<<majority_candidate << endl;
  }
  else
  {
    cout << "No majority candidate found" << endl;
  }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
      cin >> nums[i];
    cout<<endl;
  most_occurred_number(nums, n);
}
