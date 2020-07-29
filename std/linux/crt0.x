import "./syscalls"

#[target_os = "linux"]
#[target_arch = "x86_64"]
fn _start() : i32 {
    asm("pop %rax\n"
        "xor %ebp, %ebp\n"
        "mov (%rsp), %edi\n"
        "lea 8(%rsp), %rsi\n"
        "lea 16(%rsp,%rdi,8), %rdx\n"
        "xor %eax, %eax\n"
        "call main\n"
        : : : "cc", "memory");

    linux::syscalls::exit(0);
}
