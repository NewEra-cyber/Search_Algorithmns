\#ICS 2105: Search Algorithmns

\# ICS 2105: Search Algorithms Assignment



\### 👥 Group Members

1\. Onyango Marikus Munda - SCT221-0120/2024

2\. Anilov Githua Maina - SCT221-0084/2024

3\. Amani Mwale Wasonga - SCT221-0104/2024

4\. Ian Maina - SCT221-0106/2024



\---



\### 📋 Comparison \& Time Analysis



In our tests with the provided code, the execution time for all three algorithms consistently showed \*\*0.000000 seconds\*\*. 



While the output is near-zero due to the high speed of modern CPUs and the small size of our input array, the theoretical efficiency (Big O) explains how they behave as data scales:



| Algorithm | Big O | Time Taken (Results) | Explanation |

| :--- | :--- | :--- | :--- |

| \*\*Linear Search\*\* | $O(n)$ | 0.000000s | Slowest. Checks every index. Time grows as items increase. |

| \*\*Binary Search\*\* | $O(\\log n)$ | 0.000000s | Faster. Cuts data in half. Requires sorting ($O(n \\log n)$) first. |

| \*\*Hashing\*\* | $O(1)$ | 0.000000s | Fastest. Uses a direct index. Constant time regardless of size. |



\### 📝 Conclusion

Even though our small-scale test shows 0 seconds, \*\*Hashing\*\* is the superior choice for large-scale systems because its $O(1)$ complexity ensures it remains near 0.000000s even when searching millions of records, unlike Linear Search.

