# CS372-ChainOfResponsibility

Will Fisher
05/04/2015
CS372 Software Construction

This is the take home final for Fall CS372 Class.  This is an implementation of the Chain of Responsibility design pattern.

It makes use of being able to chain together a set of behaviors to be able to pass along some item to a series of handlers to determine which one is the most appropriate one to handle the given value.

I used [https://sourcemaking.com/design_patterns/chain_of_responsibility](https://sourcemaking.com/design_patterns/chain_of_responsibility) as the reference material for how to implement the design pattern.

As part of the example implementations I created 3 simple use cases.

1. Determine if a number is postive, negative or zero and return the determination as a string.
2. Determine if a number is one of a given set of factors and return a string with the results.
3. Create the st, nd, rd, th version of a given number, for example 1st, 5th, 11th, 13th.  Interesting thing to note here is that in this case the ordering of the rules is important in order to make sure some of the special cases for 11, 12, 13 are handled correctly.
