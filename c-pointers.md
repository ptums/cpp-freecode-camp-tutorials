# Pointers in C/C++

## pointers is a fundamental concept in programming

### Memory

- before we think about pointers we need to undersand how we store variables in memory (RAM).
- In a typical computer architecture each parition of memory has a n address
- It starts at 0 and the addresses increases
- When a variable is stored in memory the computer knows how much memory to use based on its the variables type.
  -- int = 4 bytes, char = 1 bytes, float = 4 bytes,
- the value of the variable is stored in binary form in memory

Can we operate on the addresses in memory?

Yes with pointers

### Pointers Basics

- variables that store address of another variable
- pointers store the address in a slot in memory

```
  int a;
  int *p; // setting up this slot is going to store the address of an int


  p = &a; // this is a basic pointer. p is no assigned the address of a which is an int.

  print p // will print out the address id
  print &a // will print out the address id
  print &p // will print out the value of a
  print *p // will print out the value of a. This is called dereferencing

```

### Working with Pointers

```
int a;
int *p;

char c;
char *p0;

double d;
double *p1;

p = *a;
a = 8;
*p => 8;


// Example
int main()
{
  int a;
  int *p;

  p = &a;

  print(p); // will print out the address of a;
  print(*p); // will print the value of a

  // every time the program runs the address value will change
}


int main() {
  int a;
  int *p;

  a = 10;
  p = &a; // &a = address of a
  *p = 12; dereferencing
  int b = 20;
  *p = b; // will the adress of p change to point b? No

  // we can simplify the set up
  int a = 10;
  int* p = &a;
}
```

### Pointer arithmetic

- When adding pointers you add the value of how much memory the variable types takes up.
- For example, int takes up 4 bytes.

  ```
  int a = 10;
  int *p;
  p = &a;

  // say the results of p is 100
  // then p + 1 is 104
  // p + 2 = 108


  ```

### Pointer types, void pointer, pointer arthmetic

-- pointers are strongly type.

```
int* -> int
char* -> char
```

why strong types?

why not have some generic types?

- because we not only store the address but the type to dereference the value of the pointer. We need to have the type to access/modify the value.
- different types are stored in different byte size. So we also need the type for the pointer so we can apply arthmetic to the pointer.
  https://youtu.be/zuegQmMdy8M?t=1602
