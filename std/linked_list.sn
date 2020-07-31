import "./memory"

namespace std {
    class LinkedListNode<T> {
        value: T;
        next: LinkedListNode<T>*;
    }

    class LinkedList<T> {
        first: LinkedListNode<T>* = null;

        static fn new() : LinkedList<T> {
            return LinkedList<T> {};
        }

        fn insert(value: T) {
            let node: LinkedListNode<T>* = std::memory::allocate<LinkedListNode<T>>(1);
            node[0] = LinkedListNode<T> {
                value,
                next = this->first,
            };

            this->first = node;
        }
    }
}