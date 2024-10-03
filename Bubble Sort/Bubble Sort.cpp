#include <iostream>

void bubble_sort(int unsorted_data[], int unsorted_data_length)
{
    bool swap = false;

    do
    {
        swap = false;
        for (int i = 0; i<unsorted_data_length-1; i++)
        {
            if (unsorted_data[i] > unsorted_data[i + 1])
            {
                int temp = unsorted_data[i];
                unsorted_data[i] = unsorted_data[i + 1];
                unsorted_data[i + 1] = temp;
                swap = true;
            }
        }

    } while (swap);
}

int main()
{
    int unsorted_data [] = { 4,23,6,5,78,9,7,24,6565,3 };
    int unsorted_data_length = sizeof(unsorted_data) / sizeof(unsorted_data[0]);
    
    for (int i = 0; i < unsorted_data_length; i++)std::cout << unsorted_data[i] << ", ";
    std::cout << "\n";

    bubble_sort(unsorted_data, unsorted_data_length);
    
    for (int i = 0; i < unsorted_data_length; i++) std::cout << unsorted_data[i] << ", ";
}
