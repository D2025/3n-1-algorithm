# 3n+1-algorithm
Optimized 3n+1 algorithm

This is one of my first projects written in C, it's 3n+1 algorithm which i should describe in a couple points:
- It gives updates every 100 million numbers (seeds) ("n reached 1")
- It detects loops and when the loop is detected sends message "Number n looped"
- It has a couple optimizations:
  1. It calculates only odd numbers (seeds), as even numbers (seeds) would be instantly halfed to a number that has been already calculated before
  2. If number falls below it's original position (its seed) it automatically gets assigned 1 (for the same reason as above - this number was already calculated earlier)

This program can calculate around 1 billion seeds (technically 500 million as i only use odd numbers) from 3 to 1 000 000 001 in around 62s on my not very powerful laptop (8gb ram and i7-3520M)

Limitation: because i use long long int in the code it can only calculate number upto around 2^63/3 before experiencing issues. I'm trying to somehow fix this issue

I'm also including python file that is pretty much the same as C one but doesn't have this limitation. The obvious drawback is that it's at least like 20 times slower than C one.
