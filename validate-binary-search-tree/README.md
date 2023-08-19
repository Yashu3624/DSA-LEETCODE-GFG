<h2>  Validate Binary Search Tree</h2><hr><div class="cursor-hover"><p>Given the <code>root</code> of a binary tree, <em>determine if it is a valid binary search tree (BST)</em>.</p>

<p>A <strong>valid BST</strong> is defined as follows:</p>

<ul>
	<li class="cursor-hover">The left <span data-keyword="subtree">subtree</span> of a node contains only nodes with keys <strong class="cursor-hover">less than</strong> the node's key.</li>
	<li>The right subtree of a node contains only nodes with keys <strong>greater than</strong> the node's key.</li>
	<li class="cursor-hover">Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/01/tree1.jpg" style="width: 302px; height: 182px;">
<pre class="cursor-hover"><strong>Input:</strong> root = [2,1,3]
<strong>Output:</strong> true
</pre>

<p class="cursor-hover"><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/01/tree2.jpg" style="width: 422px; height: 292px;" class="cursor-hover">
<pre class="cursor-hover"><strong>Input:</strong> root = [5,1,4,null,null,3,6]
<strong>Output:</strong> false
<strong>Explanation:</strong> The root node's value is 5 but its right child's value is 4.
</pre>

<p>&nbsp;</p>
<p class="cursor-hover"><strong>Constraints:</strong></p>

<ul>
	<li class="cursor-hover">The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li class="cursor-hover"><code class="cursor-hover">-2<sup>31</sup> &lt;= Node.val &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>