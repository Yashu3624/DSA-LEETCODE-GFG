# Search in a Rotated Array
## Medium
<div class="problems_problem_content__Xm_eO cursor-hover"><p><span style="font-size:18px">Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A. The whole array A is given as the range to search.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre class="cursor-hover"><span style="font-size:18px"><strong>Input:</strong>
N = 9
A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
key = 10
l = 0 , h = 8
<strong>Output</strong>:
5
<strong>Explanation</strong>: 10 is found at index 5.</span></pre>

<p><span style="font-size:18px"><strong>Example 2</strong>:</span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 4
A[] = {3, 5, 1, 2}
key = 6
l = 0 , h = 3</span><span style="font-size:18px"><strong>
Output</strong>:
-1</span><span style="font-size:18px"><strong>
Explanation</strong>: There is no element that has value 6.</span></pre>

<p><span style="font-size:18px"><strong>Your Task</strong>:<br>
Complete the function&nbsp;search()&nbsp;which takes an array arr[] and start,&nbsp;end index of the array and the K&nbsp;as input parameters, and returns the answer.<br>
<br>
Can you solve it in expected time complexity?</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>:&nbsp;O(log N).<br>
<strong>Expected Auxiliary Space</strong>:&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong>:<br>
1 ≤ N ≤ 10<sup>7</sup><br>
0 ≤ A[i] ≤ 10<sup>8</sup><br>
1 ≤ key ≤ 10<sup>8</sup></span></p>

<p>&nbsp;</p>
</div>