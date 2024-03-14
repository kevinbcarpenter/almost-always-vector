# Almost Always Vector?
- Alternative titles
    - Intuition from your compiler and tools.
    - Your tools provide intuition!
    - Tooling intuition to be a better developer

## Submission Details
**Tags**: standard library, vector, cpp17, cpp20, cpp23 <br />
**Session Type**: Back to Basic<br />
**Level**: Beginner<br />
**Audience**: application developers, students<br />
**Session Material**: slides, example code  <br />

## Abstract
Over the years the tools we use to develop have improved significantly. It used to be the compiler that could barely tell us we were missing a semicolon, now it will tell us the exact location.  The results from compilers have improved but are we doing all we can with them?  Do you always understand what they are saying?  

In this talk we will review the improvements by reading their output.  We will look at the common tools we use every day in our compilers and static analysis and work through some of the common and edge case errors.  We will pull apart items that are either code specific or linker specific and how to tell the difference.  Then we will look at static analysis and learn how we can use these tools to improve our development process.  

We will use a cross platform (Windows, Mac, Linux) project to explore best practices for settings regarding warnings, errors, static analysis and how to make the best use of them.  Understand some of the trickier items and how to improve our use overall.

Join us in this talk where we will learn to make better use of the tools, by building our intuiton.

## Outline
- The Basics
    - Where did Vector come from?
        - Arrays
        - Cost of fixed length arrays
            - Resizing
            - Memory reallocation
- basics
    - initializing
    - accessing elements
    - adding and removing elements.
- memory & allocators
    - capacity vs size
    - when reallocation happens and the cost
    - custom allocators
    - performance examples
- iterators
    - the beginning and ending
    - types of iterators
    - understanding iterators
    - how it works with ranged for loops
    - custom iterators
- algorithms
    - sorting and searching
        - why it matters
    - comparators and predicates
    - manipulating and changing the vector
    - invariants and invalidated
        - multithreading madness
- why almost always vector
    - practical
    - performance
    - versatility
    - efficiency




Choosing std::vector over other containers in the C++ standard library often makes sense due to its versatility and performance characteristics. Here are some key reasons why std::vector is a popular choice:

Dynamic Size: Unlike arrays, std::vector can resize itself dynamically, allowing you to add or remove elements efficiently. This flexibility is essential in many scenarios where the size of the data is not known in advance.
Contiguous Memory: std::vector stores its elements in contiguous memory, making it efficient for iterating over elements and often providing better cache locality compared to other containers like std::list.
Random Access: std::vector provides fast random access to its elements using indices, similar to arrays. This makes it suitable for scenarios where direct access to elements is required.
Efficient Element Access: Accessing elements in a std::vector is typically faster than accessing elements in containers like std::list, which have more complex internal structures.
Wide Support and Familiarity: std::vector is a widely used and well-understood container, making it easier for other developers to understand and maintain your code.
Compatible with Algorithms: std::vector works seamlessly with standard algorithms and other components of the standard library, allowing you to write expressive and efficient code.
While std::vector is a versatile container, it may not always be the best choice depending on the specific requirements of your application. Other containers like std::list, std::deque, or std::array may be more suitable in certain scenarios.