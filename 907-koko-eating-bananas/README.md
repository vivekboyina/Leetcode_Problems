<h2><a href="https://leetcode.com/problems/koko-eating-bananas">Koko Eating Bananas</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Koko loves to eat bananas. There are <code>n</code> piles of bananas, the <code>i<sup>th</sup></code> pile has <code>piles[i]</code> bananas. The guards have gone and will come back in <code>h</code> hours.</p>

<p>Koko can decide her bananas-per-hour eating speed of <code>k</code>. Each hour, she chooses some pile of bananas and eats <code>k</code> bananas from that pile. If the pile has less than <code>k</code> bananas, she eats all of them instead and will not eat any more bananas during this hour.</p>

<p>Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.</p>

<p>Return the <strong>minimum</strong> integer <code>k</code> such that she can eat all the bananas <strong>within</strong> <code>h</code> hours.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">piles = [3,6,7,11], h = 8</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>At a speed of 4 bananas per hour, Koko takes 1, 2, 2, and 3 hours to finish the respective piles, totaling 8 hours.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">piles = [30,11,23,4,20], h = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">30</span></p>

<p><strong>Explanation:</strong></p>

<p>Koko must finish each pile in exactly 1 hour, so her minimum eating speed must be 30 bananas per hour.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">piles = [30,11,23,4,20], h = 6</span></p>

<p><strong>Output:</strong> <span class="example-io">23</span></p>

<p><strong>Explanation:</strong></p>

<p>At a speed of 23 bananas per hour, Koko takes 2 hours for the first pile and 1 hour for each remaining pile, totaling 6 hours.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= piles.length &lt;= 10<sup>4</sup></code></li>
	<li><code>piles.length &lt;= h &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= piles[i] &lt;= 10<sup>9</sup></code></li>
</ul>
