# [Sum of All Odd Length Subarrays](https://leetcode.com/problems/sum-of-all-odd-length-subarrays/)

<p>Given an array of integers <code>nums</code>, return <em>the number of <strong>good pairs</strong></em>.</p>

<p>Given an array of positive integers <code>arr</code>, return <e>the sum of all possible <strong>odd-length subarrays</strong> of </em><code>arr</code>.</p>

<p>A <strong>subarray</strong> is a contiguous subsequence of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [1,4,2,5,3]
<strong>Output:</strong> 58
<strong>Explanation:</strong> The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [1,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are only 2 subarrays of odd length, [1] and [2]. Their sum is 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> arr = [10,11,12]
<strong>Output:</strong> 66
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= arr.length <= 100</code></li>
	<li><code>1 <= arr[i] <= 1000</code></li>
</ul>
