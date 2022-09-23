# Ft_Putsquare
## C project part of a C_Rush at 42 São Paulo

---

In this project We needed to draw a square using some especified letters, in my case, it was 'A' for the upper corners, 'C' for the down corners and 'B' for the conecting lines. Also, the size of the square is determined by ints passed as arguments. For exemple:

```C
int main(void)
{
  ft_putsquare(4, 4);
  return (0);
}

```
in this case, the function should print the following square:
```txt
A B B A
B     B
B     B
C B B C
```
---
In this program instead I choose to work with args, so calling **a.out 4 4** will get the expected result

---

# Rules

In this project, we needed to follow some rules

- We could only use **while** loops. **Do While** and **For** loops are not permited

- The only external lib function we were permited to use was **write()**

- We had limitations on the code like:
  - Limit of 25 lines for each function
  - every **variable** declaration must:
    - Be declared in one line and its content must be atributed on a new line. Ex:
    ```C
    int var;
    
    var = 0;
    ```
    - Everyr variable declaration must be followed by a new line
  - Functions, loops and conditional must all be followed by a new line as well
  ```C
  char func(int a, int b)
  {
    if (a)
    {
      while(a != b)
      {
        wrte();
      }
    }
  }
  ```
---
