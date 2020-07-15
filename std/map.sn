import "./linked_list"

namespace std {
    class KeyValuePair<K, T> {
        key: K;
        value: T*;

        static fn new(key: K, value: const T&) : KeyValuePair<K, T> {
            let ptr = std::memory::allocate<T>(1);
            ptr[0] = value;

            return KeyValuePair<K, T> {
                key,
                value = ptr,
            };
        }
    }

    class Map<K, T> {
        list: LinkedList<KeyValuePair<K, T>>;

        static fn new() : Map<K, T> {
            return Map<K, T> {
                list = LinkedList<KeyValuePair<K, T>>::new(),
            };
        }

        fn insert(key: K, value: T) {
            let pair = KeyValuePair<K, T>::new(key, value);
            this->insert(pair);
        }

        fn insert(pair: KeyValuePair<K, T>) {
            this->list.insert(pair);
        }

        fn get(key: K) : T& {
            let node = this->list.first;

            while node {
                if node->value.key == key {
                    return node->value.value[0];
                }

                node = node->next;
            }
        }

        fn [](key: K) : T& {
            return this->get(key);
        }
    }
}
