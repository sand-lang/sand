#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall1<T1>(num: i64, arg1: T1) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1)
      : "{ax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall2<T1, T2>(num: i64, arg1: T1, arg2: T2) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1),
        "+{rsi}"(arg2)
      : "{ax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall3<T1, T2, T3>(num: i64, arg1: T1, arg2: T2, arg3: T3) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1),
        "+{rsi}"(arg2),
        "+{rdx}"(arg3)
      : "{rax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall4<T1, T2, T3, T4>(num: i64, arg1: T1, arg2: T2, arg3: T3, arg4: T4) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1),
        "+{rsi}"(arg2),
        "+{rdx}"(arg3),
        "+{r10}"(arg4)
      : "{rax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall5<T1, T2, T3, T4, T5>(num: i64, arg1: T1, arg2: T2, arg3: T3, arg4: T4, arg5: T5) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1),
        "+{rsi}"(arg2),
        "+{rdx}"(arg3),
        "+{r10}"(arg4),
        "+{r8}"(arg5)
      : "{rax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn syscall6<T1, T2, T3, T4, T5, T6>(num: i64, arg1: T1, arg2: T2, arg3: T3, arg4: T4, arg5: T5, arg6: T6) : i64 {
  let res: i64;

  asm("syscall\n"
      : "={rax}"(res),
        "+{rdi}"(arg1),
        "+{rsi}"(arg2),
        "+{rdx}"(arg3),
        "+{r10}"(arg4),
        "+{r8}"(arg5),
        "+{r9}"(arg6)
      : "{rax}"(num)
      : "cc", "memory");

  return res;
}

// syscall 1
#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn exit(ret: i32) {
    syscall1<i32>(0x2000000 + 1, ret);
}

// syscall 4
#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn write(fd: u32, buffer: i8*, size: u64) : i64 {
  return syscall3<u32, i8*, u64>(0x2000000 + 4, fd, buffer, size);
}

// syscall 7
#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn wait4(pid: i64, stat_addr: i32*, options: i32) : i64 {
  return syscall3<i64, i32*, i32>(0x2000000 + 7, pid, stat_addr, options);
}

enum mmap_prots {
  PROT_READ = 0x1,
  PROT_WRITE = 0x2,
  PROT_EXEC  = 0x4,
  PROT_NONE  = 0x0,
}

enum mmap_flags {
  MAP_SHARED = 0x01,
  MAP_PRIVATE = 0x02,
  MAP_FIXED = 0x10,

  MAP_ANONYMOUS = 0x1000,
  // MAP_GROWSDOWN = 0x0100,
}

// syscall 197
#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn mmap(addr: void*, len: u64, prot: mmap_prots, flags: mmap_flags, fd: u64, off: u64) : void* {
  return syscall6<void*, u64, u64, u64, u64, u64>(0x2000000 + 197, addr, len, prot, flags, fd, off) as void*;
}

alias PTHREAD_SIZE = 8176;

class darwin_pthread_handler_rec {
  routine: fn(void*): void *;
  arg: void*;
  next: darwin_pthread_handler_rec*;
}

class opaque_pthread_t {
  sig: i64;
  cleanup_stack: darwin_pthread_handler_rec*;
  operator: i8[PTHREAD_SIZE];
}

alias pthread_t = opaque_pthread_t*;

// syscall 197
#[target_os = "darwin"]
#[target_arch = "x86_64"]
fn bsdthread_create(func: void*, arg: void*, stack: void*, pthread: pthread_t, flags: u32) : void* {
  return syscall5<void*, void*, void*, void*, u32>(0x2000000 + 360, func, arg, stack, pthread, flags) as void*;
}
