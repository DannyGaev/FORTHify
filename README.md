# FORTHify

## _Going FORTH with secure communications_

FORTHify is an implementation of the stack-based FORTH language designed for the encryption, decryption, and hashing of user communications. The main focuses of the project are:
1. To facilitate various encryption methods and their accompanying decryption methods
2. Provide hashing algorithms which consistently produce reliable hashes of inputs
3. Devoting a particular emphasis on the speed at which these operations and algorithms take place


#

Encryption algorithms expected to be implemented in FORTHify:
> * [Substitution](https://en.wikipedia.org/wiki/Substitution_cipher#:~:text=In%20cryptography%2C%20a%20substitution%20cipher,the%20above%2C%20and%20so%20forth)
> * [Rotation](https://en.wikipedia.org/wiki/Caesar_cipher)
>    - Rotation cipher syntax (do not include braces):     
>       - rotation {increment} {message_content} ;
> * [Transposition](https://en.wikipedia.org/wiki/Transposition_cipher)
>    - Transposition cipher syntax (do not include braces):
>       - transposition {keyword} {message_content} ;
> * [Morse Code](https://en.wikipedia.org/wiki/Morse_code)
>    - Morse code syntax (do not include braces):
>       - morse {message_content} ;
> * [Variations on choice encryption algorithms](https://www.arcserve.com/blog/5-common-encryption-algorithms-and-unbreakables-future)
> * [Variations on choice hashing algorithms](https://www.okta.com/identity-101/hashing-algorithms/)

## Basic FORTH operations

Word Declaration (do not include braces):
- : {word_name} {word_content} ;

In addition to facilitating more secure communications, FORTHify supports many basic FORTH operations:

- 'DUP': Duplicate the top item on the stack
- 'DROP': Remove the top item from the stack
- 'SWAP': Swap the top two items on the stack
- 'OVER': Duplicate the second item on the stack
- 'ROT': Rotate the top three items on the stack
- '+': Addition
- '-': Subtraction
- '*': Multiplication
- '/': Division
- '=': Test for equality
- '<': Less than.
- '>': Greater than.
- '<=': Less than or equal to.
- '>=': Greater than or equal to.
- FORTHify is expected to support a more extensive amount of operations soon!

## License

MIT
