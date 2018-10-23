# data-structure
读《大话数据结构》过程中，一些数据结构以及算法的实现
### 算法的时间复杂度
* O(1) < O(logn) < O(n) < O(nlogn) < O(n^2) < O(n^3) < O(2^n) < O(n!) < O(n^n)
### 线性结构
* [顺序存储](https://github.com/MyGodot/data-structure/blob/master/Seq_List.cpp)
* [链式存储](https://github.com/MyGodot/data-structure/blob/master/Chain_List.cpp)
  1. 单链表
  2. 静态连表
  3. 循环链表
  4. 双向链表
### 栈
* [顺序栈及两栈共享空间](https://github.com/MyGodot/data-structure/blob/master/stack_seq.cpp)
* [链式栈]()
### 队列
* [顺序队列及循环队列](https://github.com/MyGodot/data-structure/blob/master/queue_seq.cpp)
* [链式队列](https://github.com/MyGodot/data-structure/blob/master/queue_chain.cpp)
### 串
* [KMP模式匹配算法](https://github.com/MyGodot/data-structure/blob/master/Algorithm_KMP.cpp)
* 串的链式结构除了在串连接和串操作时有一定方便之外，不如顺序存储灵活，性能也没有顺序存储结构好
### 树
* [双亲表示法](https://github.com/MyGodot/data-structure/blob/master/parent_tree.cpp)
* [孩子表示法](https://github.com/MyGodot/data-structure/blob/master/child_tree.cpp)
* [双亲孩子表示法](https://github.com/MyGodot/data-structure/blob/master/parent_child_tree.cpp)
* 孩子兄弟表示法——>二叉树
#### 二叉树
* 二叉树的五种基本形态
* 特殊二叉树: 斜树|满二叉树|完全二叉树
* 二叉树的五个性质
* 顺序存储结构一般只用于完全二叉树
* 链式结构：二叉链表   |lchild|data|rchild|
