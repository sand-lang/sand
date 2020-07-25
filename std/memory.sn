import "./range"

import "./linux/syscalls"

namespace std {
    #[target_os = "darwin"]
    namespace memory {
        extern fn calloc(u64, u64) : void*;
        extern fn free(ptr: void *);
        extern fn memcpy(src: void*, dst: void*, len: u64) : void*;

        fn allocate<T>(count: u64) : T* {
            return calloc(count, (sizeof T) as u64) as T*;
        }

        fn deallocate(ptr: void*&) {
            if ptr != 0 {
                free(ptr);
                ptr = null;
            }
        }
    }

    #[target_os = "linux"]
    namespace memory {
        alias mmap_prots = linux::syscalls::mmap_prots;
        alias mmap_flags = linux::syscalls::mmap_flags;

        fn calloc(size: u64, count: u64) : void* {
            let ptr = linux::syscalls::mmap(
                null,
                size * count,
                mmap_prots::PROT_READ | mmap_prots::PROT_WRITE,
                mmap_flags::MAP_ANONYMOUS | mmap_flags::MAP_SHARED,
                -1,
                0
            );

            if ptr == -1 {
                return null;
            }

            return ptr;
        }

        fn allocate<T>(count: u64) : T* {
            return calloc(count, (sizeof T) as u64) as T*;
        }

        fn deallocate(ptr: void*&) {
            if ptr != 0 {
                // free(ptr);
                ptr = null;
            }
        }
    }

    #[target_os = "windows"]
    namespace memory {
        extern fn VirtualAlloc(void*, u64, u64, u64) : void*;
        extern fn VirtualFree(void*, u64, u64) : bool;

        fn allocate<T>(count: u64) : T* {
            return VirtualAlloc(null, count * (sizeof T), 12288, 4) as T*;
        }

        fn deallocate(ptr: void*&) {
            if ptr != 0 {
                if VirtualFree(ptr, 0, 0x8000) {
                    ptr = null;
                }
            }
        }
    }

    namespace memory {
        fn copy(source: void*, destination: void*, length: u64) : void* {
            for i in std::range<u64>::new(0 as u64, length) {
                destination[i] = source[i];
            }

            return destination;
        }
    }
}

fn memcpy(destination: void*, source: void*, length: u64) : void* {
    return std::memory::copy(source, destination, length);
}
