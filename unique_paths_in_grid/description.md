# Unique Paths in a Grid


## Exercise
* Given a grid of size `m * n`, lets assume you are starting at `(1,1)` and your goal is to reach `(m,n)`. At any instance,
 if you are on `(x,y)`, you can either go to `(x, y + 1)` or `(x + 1, y)`.
  
  Now consider if some obstacles are added to the grids. How many unique paths would there be?
  An obstacle is marked as 1 and and empty space as 0 in the grid.
  
  Example :
  There is one obstacle in the middle of a 3x3 grid as illustrated below.
  ```text
  [
    [0,0,0],
    [0,1,0],
    [0,0,0]
  ]
    ```
  
  The total number of unique paths is `2`.

* Solve the problem in TDD manner using `googletest` for function declaration:
