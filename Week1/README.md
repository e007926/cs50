Week 1
---------
* Prototype

  #### protoype.c
  ``` C
  #include <cs50.h>
  #include <stdio.h>

  void print_name(string name);//prototype

  int main(void) {
    string s = get_string();
    print_name(s);
  }

  void print_name(string name) {
    printf("hello, %s\n", name);
  }

  ```
* Problem set 1 - C
