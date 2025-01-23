# [Bronze III] Relocation - 31052 

[문제 링크](https://www.acmicpc.net/problem/31052) 

### 성능 요약

메모리: 71488 KB, 시간: 536 ms

### 분류

구현

### 제출 일자

2025년 1월 23일 23:07:56

### 문제 설명

<p>In the faraway country of Lineland, tech companies are starting to take over! Every week, it seems that tech companies sprout from the ground, merge, get acquired, or go under. For software engineers looking for new jobs in Lineland, it can be difficult to even find the companies where they’re interviewing.</p>

<p>To solve this issue, you’re going to make a new tech company! The product is simple: using deep neural blockchains in the cloud, your app finds the distance between any two tech companies in Lineland. This is supremely useful, as companies change offices all the time and it’s difficult to stay completely up to date. By centralizing this information, your company is going to make the world a better place.</p>

<p>Since Lineland is organized around a single line, the location of a company can be given by a single coordinate. The distance between any two companies is equal to the distance between their two coordinates.</p>

<p>Your job is to handle two kinds of user requests to the company’s flagship app. One kind of request updates the address of a company, the other requests the shortest distance between two companies.</p>

### 입력 

 <p>The first line has two positive space-separated integers $N$ and $Q$: the number of companies the app tracks ($2 \le N \le 100\, 000$), and the number of requests to process ($1 \le Q \le 100\, 000$). The next line has $N$ space-separated integers $1 \le X_ i \le 10^9$, which are the initial locations of the $N$ companies, given in order from $i=1$ to $i=N$.</p>

<p>Each of the next $Q$ lines has $3$ space-separated integers, taking one of the following forms:</p>

<ul>
	<li>
	<p>$1$ $C$ $X$, which means that company $C$ moves its location to $X$, or</p>
	</li>
	<li>
	<p>$2$ $A$ $B$, which is a query for the distance between companies $A$ and $B$.</p>
	</li>
</ul>

<p>It is guaranteed that $1 \leq A, B, C \leq N$ and $1 \leq X \leq 10^9$. It is possible two companies can share the same location. It is also guaranteed there is at least one query of type $2$.</p>

### 출력 

 <p>For each query of type $2$, print the distance between companies $A$ and $B$.</p>

