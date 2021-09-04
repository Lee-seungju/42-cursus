# push_swap
[![slee2's 42Project Score](https://badge42.herokuapp.com/api/project/slee2/push_swap)](https://github.com/JaeSeoKim/badge42)

[퀵소트와 적용](https://velog.io/@seungju0000/series/pushswap)
7/6 - retry...T_T

7/8 - Fixed due to norm-v3

![a1](https://user-images.githubusercontent.com/53372971/131775356-8ddf713d-2187-4eb6-958e-f56b001af707.JPG)

This project is to change the top alignment to the bottom. This program has an A-stack and a B-stack. Put the first shuffled sort on stack A. The final stage of this project is to put the finally sorted values ​​back into the A stack through a few commands.

![a2](https://user-images.githubusercontent.com/53372971/131775363-2e565f65-6227-49bd-a11e-666fed217b0b.JPG)

#### sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

#### sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

#### ss : sa and sb at the same time.

#### pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

#### pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

#### ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.

#### rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

#### rr : ra and rb at the same time.

#### rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

![a3](https://user-images.githubusercontent.com/53372971/131775651-746a6fab-3e5c-4996-96db-7e59f0b51d3b.JPG)

