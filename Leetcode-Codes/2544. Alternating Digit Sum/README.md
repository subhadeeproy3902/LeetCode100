# [Alternating Digit Sum](https://leetcode.com/problems/alternating-digit-sum/)
<p>You are given a positive integer <code>n</code>. Each digit <code>n</code> has a sign according to the following rules:</p>

<li>The most <strong>significant digit</strong> is assigned a <strong>positive</strong> sign.</li><br/>

<li>Each other digit has an opposite sign to its adjacent digits.</li><br/>

<p>Return <em>the sum of all digits with their corresponding sign</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 521
<strong>Output:</strong> 4
<strong>Explanation:</strong> (+5) + (-2) + (+1) = 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 111
<strong>Output:</strong> 1
<strong>Explanation:</strong> (+1) + (-1) + (+1) = 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 886996
<strong>Output:</strong> 0
<strong>Explanation:</strong> (+8) + (-8) + (+6) + (-9) + (+9) + (-6) = 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= n <= 10<sup>9</sup>

</code></li>
</ul>
