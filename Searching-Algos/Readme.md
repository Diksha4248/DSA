# Searching-Algorithms
Includes Linear Search, Binary Search and Ternary Search


## Linear Search
![Alt text](https://i0.wp.com/thecleverprogrammer.com/wp-content/uploads/2020/09/un-35.png?resize=1024%2C471&ssl=1 "Linear Search")

Time Complexity : O(N)

## Binary Search

![Alt text](https://res.cloudinary.com/practicaldev/image/fetch/s--98coOIoF--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/5hsod7t93v85b23rk671.png "Binary Search")

Two Approaches:

1) Iterative :
     Time Complexity : O(log N)
     Auxiliary Space: O(1)
2) Recursive :
    Time Complexity: O(log N)
    Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

## Ternary Search    

![Alt text](https://media.geeksforgeeks.org/wp-content/uploads/ternaryS-3.png "Ternary Search")

It is similar to binary search where we divide the array into two parts but in this algorithm, we divide the given array into three parts and determine which has the key (searched element). We can divide the array into three parts by taking mid1 and mid2 which can be calculated as shown below. Initially, l and r will be equal to 0 and n-1 respectively, where n is the length of the array. 

It is same as the binary search. The only difference is that, it reduces the time complexity a bit more. the algorithm involves ‘N’ steps. The searchable range would be the size = 3^N. Inversely, the number of steps needed to find the element is the log of the size of the collection. So the runtime is O(log N base 3).

Time Complexity:

1) Average Case : O (log N base 3)
2) Best Case : O(1)
3) Worst Case : O (log N base 3)