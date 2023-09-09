# Sorting-Algorithms
Includes Selection Sort, Insertion Sort, Bubble Sort, Merge Sort , Quick Sort, Radix Sort


## Bubble Sort 
![Bubble Sort](https://www.w3resource.com/w3r_images/bubble-short.png "Bubble Sort")

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

1) Time Complexity: O(N^2)
2) Auxiliary Space: O(1)

## Insertion Sort
![Insertion Sort](https://media.geeksforgeeks.org/wp-content/uploads/insertion_sort-recursion.png "Insertion Sort")

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

1) Time Complexity: O(N^2) 
2) Auxiliary Space: O(1)

## Selection Sort
![Selection Sort](https://www.simplilearn.com/ice9/free_resources_article_thumb/Selection-Sort-Soni/what-is-selection-sort.png "Selection Sort")

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

1) Time Complexity: O(N^2) 
2) Auxiliary Space: O(1)

## Merge Sort
![Merge Sort](https://www.programiz.com/sites/tutorial2program/files/merge-sort-example_0.png "Merge Sort")

Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

1) Time Complexity: O(nLogn)
2) Auxiliary Space: O(N)

Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. T(n) = 2T(n/2) + O(n) The solution of the above recurrence is O(nLogn). 

## Quick Sort
![Quick Sort](https://www.techiedelight.com/wp-content/uploads/Quicksort.png "Quick Sort")

QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

1) Time Complexity :
    - Best Case : Ω (N log (N))
    - Worst Case: O(N^2)
2) Auxiliary Space : O(1)   

## Radix Sort
![Radix Sort](https://i.ytimg.com/vi/nu4gDuFabIM/maxresdefault.jpg "Radix Sort")

Radix Sort is a linear sorting algorithm that sorts elements by processing them digit by digit. It is an efficient sorting algorithm for integers or strings with fixed-size keys. 

1) Time Complexity: O(d * (n + b)) where :
   - d = number of digits,
   - n = number of elements,
   - b = base of the number system being used

3) Auxiliary Space: O(n + b)
