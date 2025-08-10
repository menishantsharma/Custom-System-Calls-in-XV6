
# Custom System Calls Implementation in XV6

In this project I have implemented various custom system calls in xv6 operating system. I also implemented page fault handler with lazy allocation.

## Features

- Page fault handler with lazy allocation
- Syscall to get number of ready processes
- Syscall to create n child processes.
- Syscall to get size of address space used by the process.
- Syscall to get physical address of a virtual address
- Syscall to get number of page table pages allocated to the current process
- Syscall to get number of page table pages allocated for user space memory for the current process
- Syscall to get number of page table pages allocated for kernel space memory for the current process
- Syscall to get number of physical pages mapped to the virtual addresses of a process
- Syscall to grows the size of the process (virtual) address space. Clone of mmap

## Tech Stack

**C**: The core language used to create the system calls.

**xv6**: OS.

## Run Locally

Clone the project

```bash
git clone https://github.com/menishantsharma/Custom-System-Calls-in-XV6
```

Go to the project directory

```bash
cd Custom-System-Calls-in-XV6
```

Install Build Essential

```bash
sudo apt-get update
```

Install Build Essential and other libraries

```bash
sudo apt -y install build-essential gdb coreutils util-linux sysstat procps wget tar qemu
```

Change Directory

```bash
cd xv6
```

Build server

```bash
make
```

Boot into xv6
```bash
make qemu-nox
```

Now create user programs to test various custom system calls implemented.

## System Calls

- ```int numberofprocesses()``` - returns the total number of processes in READY state.
- ```int spawn(int n, int* pids)``` - creates n child processes when invoked.
- ```int getvasize(int pid)``` - returns the size of the address space used by a process.
- ```uint va2pa(uint virtual_addr)``` - returns the virtual address to physical address mapping from the page table of the current process.
- ```int get_pgtb_size()``` - returns the number of page table pages allocated to the current process.
- ```int get_usr_pgtb_size()``` - returns the number of page table pages allocated for user space memory for the current process.
- ```int get_kernel_pgtb_size()``` - returns the number of page table pages allocated for kernel space memory for the current process.
- ```int getpasize(int pid)``` - returns the number of physical pages mapped to the virtual addresses of a process.
- ```int mmap(int size)``` - mmap call grows the size of the process (virtual) address space of current process.

## Authors

- **Nishant Sharma** - MTech CSE Student at IIT Bombay
- **Github** - [@Nishant Sharma](https://github.com/menishantsharma)


## License

[MIT](https://choosealicense.com/licenses/mit/)