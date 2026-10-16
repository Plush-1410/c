# C Observation

A collection of C programming exercises and supporting sample files.

The programs cover input and output, operators, loops, arrays, functions,
strings, pointers, structures, file copying, and DNA nucleotide counting.
Each C source file is a separate program. `pal.c` is currently empty.

## Compile and run

With GCC installed, compile one program at a time:

```sh
gcc program9.c -o program9
```

On Windows with MinGW:

```powershell
gcc program9.c -o program9.exe
.\program9.exe
```

For the file-copy example, enter `source.txt` as the source and a new filename
as the destination. The destination is overwritten if it already exists.
`dna.txt` contains sample input for `program10.c`.

Some exercises use Windows-specific headers or functions such as `conio.h`,
`getch`, and `strrev`; they may require a compatible compiler.

The `.vscode` folder contains the existing MinGW editor configuration.
Adjust compiler paths to match your installation. Generated executables and
object files are excluded from version control.
