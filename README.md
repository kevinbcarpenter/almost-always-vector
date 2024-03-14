# Almost Always Vector?
- Alternative titles
    - Vector Velcro, Why Vector Sticks Around
    - Vector Virtuoso: The Ins and Outs of std::vector

## Submission Details
**Tags**: standard library, vector, containers, data structures, cpp17, cpp20, cpp23 <br />
**Session Type**: Back to Basic<br />
**Level**: Beginner<br />
**Audience**: application developers, students<br />
**Session Material**: slides, example code  <br />

## Abstract
Are you a fresh face in the world of C++ development, or perhaps you've got a bit of experience under your belt? Have you ever stopped to marvel at just how often std::vector pops up? It's a thing of beauty, a structure you can just keep piling data into, effortlessly sort, search, insert, and delete from. But do you know the price you pay for all this convenience? What about when you need to expand the structure? Or when you're on the hunt for something specific? Ever dabbled with custom predicates to dynamically tweak your data? With a plethora of data structures at our disposal in the standard library, it's a head-scratcher why std::vector seems to steal the show. 

Join this talk to unravel the mystery behind why we almost always opt for std::vector, and learn how to wield it with maximum efficiency.

## Outline
- Introduction (3 minutes)
    - Brief overview of the talk's structure and goals.
- The Basics (5 minutes)
    - Discuss the origins of std::vector from arrays.
    - Highlight the limitations of fixed-length arrays and the advantages of std::vector.
    - Demonstrate basic operations like initialization, element access, and adding/removing elements.
- Memory Management and Allocators (7 minutes)
    -  Explain the concepts of capacity and size.
    - Discuss how and when reallocation happens, comparing it to fixed-length arrays.
    - Introduce custom allocators and their potential benefits.
- Iterators (15 minutes)
    - Explain the purpose and types of iterators.
    - Demonstrate iterator usage for iterating over a vector.
    - Discuss how iterators work with ranged for loops and introduce the concept of custom iterators.
- Algorithms (15 minutes)
    - Showcase common algorithms like sorting and searching and their importance.
    - Explain how to use comparators and predicates with algorithms.
    - Discuss how to manipulate and change the vector using algorithms.
    - Mention the importance of invariants and how operations can invalidate iterators, especially in multithreaded environments.
- Comparing with Other Containers (10 minutes)
    - Contrast std::vector with other containers like std::queue, std::map, and std::list.
    - Discuss the trade-offs between sequential and random access containers.
- Why Almost Always Vector (3 minutes)
    - Summarize the efficiency, practicality, versatility, and of using std::vector.
