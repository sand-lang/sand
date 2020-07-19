#[target_os = "linux"]
#[target_arch = "i386"]
fn syscall1<T1>(num: i32, arg1: T1) : i32 {
  let res: i32;

  asm("int $$0x80"
      : "={ax}"(res),
        "+{bx}"(arg1)
      : "{ax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "linux"]
#[target_arch = "i386"]
fn syscall2<T1, T2>(num: i32, arg1: T1, arg2: T2) : i32 {
  let res: i32;

  asm("int $$0x80"
      : "={ax}"(res),
        "+{bx}"(arg1),
        "+{cx}"(arg2)
      : "{ax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "linux"]
#[target_arch = "i386"]
fn syscall3<T1, T2, T3>(num: i32, arg1: T1, arg2: T2, arg3: T3) : i32 {
  let res: i32;

  asm("int $$0x80"
      : "={ax}"(res),
        "+{bx}"(arg1),
        "+{cx}"(arg2),
        "+{dx}"(arg3)
      : "{ax}"(num)
      : "cc", "memory");

  return res;
}

#[target_os = "linux"]
#[target_arch = "i386"]
fn exit(code: i32) {
  syscall1<i32, i32>(1, code);
}

#[target_os = "linux"]
#[target_arch = "i386"]
fn write(fd: u32, buf: void*, count: u64) {
  syscall3<u32, void*, u64>(4, fd, buf, count);
}
