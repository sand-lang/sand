#[target_os = "windows"]
#[target_arch = "x86_64"]
fn __chkstk() {
    asm(
      "push   %rcx\n"
      "push   %rax\n"
      "cmp    $$0x1000, %rax\n"
      "lea    24(%rsp), %rcx\n"
      "jb     1f\n"
"2:\n"
      "sub    $$0x1000, %rcx\n"
      "test   %rcx, (%rcx)\n"
      "sub    $$0x1000, %rax\n"
      "cmp    $$0x1000, %rax\n"
      "ja     2b\n"
"1:\n"
      "sub    %rax, %rcx\n"
      "test   %rcx, (%rcx)\n"
      "pop    %rax\n"
      "pop    %rcx\n"
      "ret\n" : :);
}
