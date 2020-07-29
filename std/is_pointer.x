import "./boolean_types"

namespace std {
    class is_pointer<T> extends false_type {}
    special class is_pointer<void *> extends true_type {}
}
