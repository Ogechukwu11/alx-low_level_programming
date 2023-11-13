DYNAMIC LIBRARY

A dynamic library, also known as a shared library, is a file containing code that software applications can use. Instead of including all the code in the application itself, it references these external libraries, making the application more efficient and smaller in size. When the program is running, it connects to the dynamic library to access the code it needs, like functions or procedures.

How it works:

When a program is compiled, it doesn't contain the actual code from the dynamic library. Instead, it has references to the functions or code within the library. During runtime (when the program is running), the system finds and connects the program to the dynamic library, allowing it to use the code stored there.

Creating a Dynamic Library:

To create a dynamic library, you write code (functions, procedures, etc.) and compile it into a shared library file. Different programming languages have different ways of creating these files. For instance, in C or C++, you compile your code using a special flag to create a shared library (e.g., -shared in GCC).

Using a Dynamic Library:

When creating a program, you need to specify the dynamic libraries it will use. This is often done during the compilation stage using flags or settings that indicate which libraries to link to the program. Then, when the program runs, the system finds and connects the program to the necessary dynamic libraries.

$LD_LIBRARY_PATH Environment Variable:

$LD_LIBRARY_PATH is an environment variable that tells the system where to look for dynamic libraries. When a program using dynamic libraries starts, it searches the directories listed in $LD_LIBRARY_PATH to find the required libraries.

Using $LD_LIBRARY_PATH:

You can set $LD_LIBRARY_PATH in the terminal or within scripts. For instance, if your libraries are in a specific directory like /path/to/mylibs, you'd use: export LD_LIBRARY_PATH=/path/to/mylibs:$LD_LIBRARY_PATH. This tells the system to check /path/to/mylibs first, and then whatever was previously in $LD_LIBRARY_PATH.

Differences between Static and Shared Libraries:

Static Libraries: Compiled directly into the program during the linking stage, increasing the program's size but making it more self-contained.

Shared Libraries: Remain separate from the program file, making the program smaller. During runtime, the system links to these libraries dynamically.

Basic Commands:

nm: Lists symbols from object files or libraries, showing functions and variables.
ldd: Prints the shared library dependencies of an executable.
ldconfig: Updates the shared library cache and links. Helps manage the runtime bindings of dynamically linked programs.
