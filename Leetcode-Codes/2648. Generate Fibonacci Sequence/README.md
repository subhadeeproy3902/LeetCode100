# [Generate Fibonacci Sequence](https://leetcode.com/problems/generate-fibonacci-sequence/)
<p>Write a generator function that returns a generator object which yields the <strong>fibonacci sequence</strong>.</p>

<p>The <strong>fibonacci sequence</strong> is defined by the relation <code>X<sub>n</sub> = X<sub>n-1</sub> + X<sub>n-2</sub></code>.</p>

<p>The first few numbers of the series are <code>0, 1, 1, 2, 3, 5, 8, 13</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> callCount = 5
<strong>Output:</strong> [0,1,1,2,3]
<strong>Explanation:</strong>
const gen = fibGenerator();
gen.next().value; // 0
gen.next().value; // 1
gen.next().value; // 1
gen.next().value; // 2
gen.next().value; // 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> callCount = 0
<strong>Output:</strong> []
<strong>Explanation:</strong> gen.next() is never called so nothing is outputted
</pre>



<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 <= callCount <= 50</code></li>
</ul>