# Sorting algorithms in C

## Big(O) notation 
   Big(O) is the time complexity behaviour of an algorithm as the input data set grows.
   O in this means order of operations.
   There is also a concept of space complexity or memory usage, like whether an algorithm can be sorted in place,
   or with constant memory or will it use extra memory to store intermediate results.

   ![](graph.png)
   
   Least to Most time complexity (ascending order of time complexity) of few of the known algorithms are as follows

   1. Constant time : O(1)
   
        Example, looking up a single element in an array

   2. Logarithmic time : O(log n)
   
        Example, binary search performed on a sorted array has logarithmic complexity

   3. Linear time : O(n)
   
        Example, searching an unsorted array for a specific value

   4. Log linear : O(n log n)
   
      Complex sorting algorithms like
      
        (1) Heap sort

        (2) Merge sort
            Temporarily use extra memory to sort and memory need grows linearly with increase in input set.
            Method uses recursion.
            Uses recursion.
            Divide and conquer.
            Stable.
            Not in-place.

        (3) Quick sort (Randomized)
            Quick sort
            Worst case time complexity is quadratic. Best is log linear.
            Its an in-place sorting algorithm.
            Uses recursion.

   5. Quadratic : O(n<sup>2</sup>)
   
        (1) Bubble sort - Least efficient
            Remember first element bubbling (outer loop and inner loop)
            In place sorting

        (2) Selection sort
            Simplest
            Logic is, pick the smallest number from input list, put in the lowest possible index,
            iMin logic.

        (3) Insertion sort
            Is slightly better than selection and bubble.

        (4)

    An algorithm that is deterministic always produces the same outputs from a given set of inputs.
