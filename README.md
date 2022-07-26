# 3n+1-algorithm
Optimized 3n+1 algorithm

This is one of my first projects written in C, it's 3n+1 algorithm which i should describe in a couple points:
- It gives updates every 100 million numbers ("n reached 1")
- It detects loops and when the loop is detected sends message "Number n looped"
- It has a couple optimizations:
  1. It calculates only odd numbers, as even numbers would be instantly halfed to a number that has been already calculated before
  2. If number falls below it's original position it automatically gets assigned 1 (for the same reason as above - this number was already calculated earlier)

This program according to my not very precise calculations can calculate 1 billion numbers in 62s.
