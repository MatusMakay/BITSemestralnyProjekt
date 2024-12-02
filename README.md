# BITSemestralnyProjekt

## Heap Exploitation and Protection Examples

This repository demonstrates various heap-based vulnerabilities and their corresponding protected implementations. The project includes examples of common heap exploitation techniques and shows how to properly secure them.

### Vulnerabilities Covered

#### 1. Double-Linked List (DLL) Unlink Exploitation
- **Source Code**: https://exploit.education/protostar/heap-three/
- **Vulnerable Version**: Shows unsafe string copying without bounds checking
- **Protected Version**: Implements proper bounds checking using strncpy and null termination


#### 2. Note Taker Buffer Overflow
- **Source Code**: https://github.com/intere/hacking/blob/master/booksrc/notetaker.c
- **Vulnerable Version**: Demonstrates heap overflow through unsafe strcpy
- **Protected Version**: Implements proper bounds checking with strncpy and buffer size limits

#### 3. Use After Free
- **Source Code**: https://exploit.education/protostar/heap-two/
- **Vulnerable Version**: Shows classic use-after-free vulnerability
- **Protected Version**: Implements proper cleanup and pointer nulling

### Exploitation Techniques

The repository includes working exploit examples:

1. **DLL Unlink Exploit**: Python script demonstrating heap exploitation through unlink technique. Goal is to redirect code flow and call function winner.

2. **Note Taker Exploit**: Shell script showing heap overflow exploitation with goal to create fake root user on system.

3. **Use After Free Exploit**: Python script demonstrating use-after-free vulnerability.

### Security Measures Implemented

1. **Bounds Checking**: Using strncpy instead of strcpy
2. **Null Termination**: Explicit null termination of strings
3. **Pointer Hygiene**: Proper pointer nulling after free
4. **Memory Cleanup**: Proper memory initialization and cleanup
5. **Buffer Size Validation**: Input length validation before operations

## Building and Running

Each example contains two versions:
- `*/*.c` - Vulnerable version
- `*/*Protected.c` - Protected version