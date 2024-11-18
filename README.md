# Problem Solving Library - Level 5 with OOP & Data Structures

## Description

This library is designed to solve complex problems (Level 5) using Object-Oriented Programming (OOP) principles and advanced data structures. The goal is to provide efficient and clean solutions to algorithmic problems by leveraging both OOP concepts and the power of sophisticated data structures. Ideal for developers who want to improve their problem-solving skills and build scalable, reusable code.

## Features

- **Object-Oriented Programming**: Solutions are implemented using OOP principles (e.g., classes, inheritance, polymorphism, encapsulation, and abstraction) to promote code reusability and organization.
- **Advanced Data Structures**: Implementations of data structures such as trees, graphs, heaps, tries, and segment trees to solve problems efficiently.
- **Level 5 Complexity**: The problems addressed require advanced problem-solving skills and focus on optimizing both time and space complexity.
- **Clean, Modular Code**: Each problem is broken into well-organized, modular classes and methods to make the solution easy to understand and extend.

## Data Structures Implemented

1. **Binary Search Tree (BST)**  
   A binary tree with at most two children per node, allowing for efficient search, insertion, and deletion operations. The class design supports both iterative and recursive solutions.

2. **Heap (Min-Heap and Max-Heap)**  
   A complete binary tree used to implement priority queues. Supports operations such as insertion, deletion of the root, and finding the minimum or maximum element.

3. **Graph (Adjacency List & Matrix)**  
   A flexible graph class that supports both directed and undirected graphs. Includes methods for BFS, DFS, and shortest path algorithms such as Dijkstra.

4. **Trie (Prefix Tree)**  
   A tree-like data structure used to store a set of strings efficiently. Includes methods for insertion, search, and prefix-based querying, ideal for autocomplete and dictionary-based problems.

5. **Segment Tree**  
   A tree structure designed for range queries (such as sum, minimum, or maximum) and range updates, implemented in an object-oriented way to handle complex interval-based problems.

## Problem Solving Using OOP & Data Structures

This library includes several algorithmic problems that are solved using object-oriented design principles and the above data structures.

1. **Kth Smallest Element in an Array**  
   - **Data Structure**: Min-Heap  
   - **OOP Approach**: A class that encapsulates the heap logic to insert elements and retrieve the kth smallest element efficiently.

2. **Graph Shortest Path**  
   - **Data Structure**: Graph (Adjacency List), Priority Queue  
   - **OOP Approach**: A graph class that models nodes and edges and uses Dijkstra’s algorithm to find the shortest path between two nodes.

3. **Word Search Using Trie**  
   - **Data Structure**: Trie  
   - **OOP Approach**: A Trie class that stores words and supports querying for word existence and prefix search, ideal for implementing word search problems.

4. **Range Queries with Segment Tree**  
   - **Data Structure**: Segment Tree  
   - **OOP Approach**: A segment tree class that supports range sum queries and updates efficiently, demonstrating how to handle dynamic intervals in a range.

## Installation

To get started, clone this repository to your local machine:

```bash
git clone https://github.com/your-username/problem-solving-library.git
