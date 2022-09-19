# Algorithms

- [ci_string](./ci_string.cpp) - case insensitive string class which is identical to the ```std::string```
- [Flagnth](./flagnth.hpp) - functor which returns true if being called n times
- [counted_ptr](./counted_ptr.hpp) - smart pointer, if created a copy of an object it will be pointed to the same object, destructor deletes object if being called for the last copy. 
- [Constraints Class](./constraints_classes.cpp) - Constraints class which compiles only if T has function T* Clone() const
- [Network simulation](./packages.java) - a simulation of a network packet processing
- [Slide max](./slide_max.cpp) - A function which finds a max value in slide brackets
- [Tables Joint](./tables_joint.py) - an algorithm of joining two tables
- [Pattern](./pattern.py) - find a pattern in a text
- [String hashing](./string-hashing.py) - String hashing for fast string comparison in O(1) including algorithm
to count all unique substrings in a string

## Bitwise operations

- [Basic manipulations](./bitwise/bitwise.py)
- [Single number](./bitwise/single-number.py) - You are given an array of integers.
Every element appears twice, except for one. You need to find the element that appears only one time. 
Your solution should have a linear runtime complexity (O(n)). Try to implement it without using extra memory.
- [Subsets](./bitwise/subsets.py) - Given an integer array nums of unique elements, 
return all possible subsets (the power set). The solution set must not contain duplicate subsets. 
Return the solution in any order. And the exact problem but with k-subsets - you need to return all
possible subsets of k-length

## Math

- [Majorant](./math/majority.cpp) - an algorithm which checks if the desired element is the majority element in array
- [Median](./math/median.cpp) - an algorithm which finds a median in an array
- [Binary Exponentiation](./math/binary-exp.py) - Exponentiation that works for O(log n)
- [GCD](./math/gcd.py) - The greatest common divisor which works for O(log(min(a, b)))
- [LCM](./math/lcm.py) - The least common multiple which works for O(log(min(a, b))) 
- [Sieve of Eratosthenes](./math/primes.py) - Print all prime numbers from 1 to n in O(n loglog n) 
- [Euler Function](./math/euler.py) - Counts the number of all co-prime numbers to n up to n.