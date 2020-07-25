#[target_os = "linux"]
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

#[target_os = "linux"]
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

#[target_os = "linux"]
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

#[target_os = "linux"]
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

#[target_os = "linux"]
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

#[target_os = "linux"]
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
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn write(fd: u32, buffer: i8*, size: u64) : i64 {
  return syscall3<u32, i8*, u64>(1, fd, buffer, size);
}

enum mmap_prots {
  PROT_READ = 0x1,
  PROT_WRITE = 0x2,
  PROT_EXEC  = 0x4,
  PROT_NONE  = 0x0,
}

enum mmap_flags {
  MAP_ANONYMOUS = 0x20,
  MAP_SHARED = 0x01,
  MAP_PRIVATE = 0x02,
  MAP_FIXED = 0x10,

  MAP_GROWSDOWN = 0x0100,
}

// syscall 9
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn mmap(addr: void*, len: u64, prot: mmap_prots, flags: mmap_flags, fd: u64, off: u64) : void* {
  return syscall6<void*, u64, u64, u64, u64, u64>(9, addr, len, prot, flags, fd, off) as void*;
}

// syscall 12
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn brk(ptr: void*) : i64 {
  return syscall1<void*>(12, ptr);
}

enum clone_flags {
  CLONE_VM              = 0x00000100,
  CLONE_FS              = 0x00000200,
  CLONE_FILES           = 0x00000400,
  CLONE_SIGHAND         = 0x00000800,
  CLONE_PARENT          = 0x00008000,
  CLONE_THREAD          = 0x00010000,
  CLONE_SYSVSEM         = 0x00040000,
  CLONE_SETTLS          = 0x00080000,
  CLONE_PARENT_SETTID   = 0x00100000,
  CLONE_CHILD_CLEARTID  = 0x00200000,
  CLONE_IO              = 0x80000000,
}

// syscall 56
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn clone(flags: clone_flags, stack: void*, parent_tid: i32*, child_tid: i32*, tls: void*) : i64 {
  return syscall5<clone_flags, void*, i32*, i32*, void*>(56, flags, stack, parent_tid, child_tid, tls);
}

// syscall 60
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn exit(ret: i32) : i64 {
  return syscall1<i32>(60, ret);
}

// syscall 61
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn wait4(pid: i64, stat_addr: i32*, options: i32) : i64 {
  return syscall3<i64, i32*, i32>(61, pid, stat_addr, options);
}


// syscall 202
#[target_os = "linux"]
#[target_arch = "x86_64"]
fn futex(uaddr: i32*, op: i32, val: u32) : i64 {
  return syscall5<i32*, i32, u32, void*, u32*>(202, uaddr, op, val, null, null as u32*);
}
