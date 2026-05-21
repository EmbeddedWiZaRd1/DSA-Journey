1.& (Address-of operator): "Give me the memory address of this variable"

2.* (Dereference operator): "Go to the address stored in this pointer and give me/modify the value inside."


3.When you add 1 to a pointer, you are not adding 1 to the memory address. You are telling the CPU to advance to the next available element slot. The compiler automatically multiplies the number you add by the sizeof() the data type the pointer points to