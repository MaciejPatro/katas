# Hungarian notation 

## Exercise
* We have source and header files `hungarian_notation_class.*pp`. Our goal is to safely
improve the class by removing hungarian notation for member fields (`m_`) ensuring the code continues to compile.

* Requirements:
    * fix declarations for `private` fields. 
    * fix all expressions using those fields.
    * update constructor to handle correctly changed fields.
    * ignore static members starting with `m_`
    * ignore functions starting with `m_`
    * ignore declarations of fields with same name from different class (other namespace)
    * ignore public/protected variables - as we should assume that this is API header and this change can be considered unsafe
    
* [AST documentation](https://clang.llvm.org/docs/LibASTMatchersReference.html)
* [clang tooling p1](https://devblogs.microsoft.com/cppblog/exploring-clang-tooling-part-1-extending-clang-tidy/)
* [clang tooling p2](https://devblogs.microsoft.com/cppblog/exploring-clang-tooling-part-2-examining-the-clang-ast-with-clang-query/)
* [clang tooling p3](https://devblogs.microsoft.com/cppblog/exploring-clang-tooling-part-3-rewriting-code-with-clang-tidy/)

### Cheatsheet
* `clang-query`:
    * usage:
    ```text
    clang-query filename -- <compiler flags>
    ```
    * `help` - help
    * `enable output dump` - more readable output
    * `m fieldDecl()` - example matcher for all field declarations

* `clang-tidy`
    * usage:
     
    ```text
    clang-tidy <options> filename -- <compiler flags>
    ```
    * options:
        * `--checks="-*,misc-my-check"` - filter only my-check
        * `--header-filter=".*"` - query also header files
        * `--fix` - enable fixes

* some matchers that can be useful:
    * `matchesName`
    * `member`
    * `forField`
