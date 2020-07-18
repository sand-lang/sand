import "./map"
import "./vec"
import "./string"
import "./range"
import "./io"

enum JsonValueType {
    Number,
    String,
    Array,
    Object,
    Boolean,
    Null,
    Empty,
}

class JsonNode {
    type: JsonValueType;

    union JsonValue {
        map: std::Map<std::string, JsonNode>;
        array: std::Vec<JsonNode>;
        str: std::string;
        int: i64;
        boolean: bool;
    }

    value: JsonValue;

    static fn new_object() : JsonNode {
        let value: JsonValue;
        value.map = std::Map<std::string, JsonNode>::new();

        return JsonNode {
            type = JsonValueType::Object,
            value,
        };
    }

    static fn new_object(obj: const std::Map<std::string, JsonNode>&) : JsonNode {
        let value: JsonValue;
        value.map = obj;

        return JsonNode {
            type = JsonValueType::Object,
            value,
        };
    }

    static fn new_array() : JsonNode {
        let value: JsonValue;
        value.array = std::Vec<JsonNode>::new();

        return JsonNode {
            type = JsonValueType::Array,
            value,
        };
    }

    static fn new_array(array: const std::Vec<JsonNode>&) : JsonNode {
        let value: JsonValue;
        value.array = array;

        return JsonNode {
            type = JsonValueType::Array,
            value,
        };
    }

    static fn new_string(str: const std::string&) : JsonNode {
        let value: JsonValue;
        value.str = str;

        return JsonNode {
            type = JsonValueType::String,
            value,
        };
    }

    static fn new_string(str: const i8*) : JsonNode {
        return new_string(std::string::new(str));
    }

    static fn new_int(int: const i64&) : JsonNode {
        let value: JsonValue;
        value.int = int;

        return JsonNode {
            type = JsonValueType::Number,
            value,
        };
    }

    static fn new_boolean(boolean: const bool&) : JsonNode {
        let value: JsonValue;
        value.boolean = boolean;

        return JsonNode {
            type = JsonValueType::Boolean,
            value,
        };
    }

    static fn new_null() : JsonNode {
        let value: JsonValue;
        value.int = 0;

        return JsonNode {
            type = JsonValueType::Null,
            value,
        };
    }

    static fn new_empty() : JsonNode {
        let value: JsonValue;
        value.int = 0;

        return JsonNode {
            type = JsonValueType::Empty,
            value,
        };
    }

    // JsonNode insertion in map
    fn insert(key: const std::string&, value: const JsonNode&) : JsonNode& {
        this->value.map.insert(key, value);
        return *this;
    }

    fn insert(key: const i8*, value: const JsonNode&) : JsonNode& {
        this->value.map.insert(std::string::new(key), value);
        return *this;
    }

    // std::string insertion in map
    fn insert(key: const std::string&, value: const std::string&) : JsonNode& {
        this->insert(key, JsonNode::new_string(value));
        return *this;
    }

    fn insert(key: const i8*, value: const std::string&) : JsonNode& {
        this->insert(key, JsonNode::new_string(value));
        return *this;
    }

    // i8* insertion in map
    fn insert(key: const std::string&, value: const i8*) : JsonNode& {
        this->insert(key, JsonNode::new_string(value));
        return *this;
    }

    fn insert(key: const i8*, value: const i8*) : JsonNode& {
        this->insert(key, JsonNode::new_string(value));
        return *this;
    }

    // i64 insertion in map
    fn insert(key: const std::string&, value: const i64&) : JsonNode& {
        this->insert(key, JsonNode::new_int(value));
        return *this;
    }

    fn insert(key: const i8*, value: const i64&) : JsonNode& {
        this->insert(key, JsonNode::new_int(value));
        return *this;
    }

    // JsonNode insertion in vector
    fn insert(value: const JsonNode&) : JsonNode& {
        this->value.array.push(value);
        return *this;
    }

    // std::string insertion in vector
    fn insert(value: const std::string&) : JsonNode& {
        this->insert(JsonNode::new_string(value));
        return *this;
    }

    // i8* insertion in vector
    fn insert(value: const i8*) : JsonNode& {
        this->insert(JsonNode::new_string(value));
        return *this;
    }

    // i64 insertion in vector
    fn insert(value: const i64&) : JsonNode& {
        this->insert(JsonNode::new_int(value));
        return *this;
    }

    fn get_object() : std::Map<std::string, JsonNode>& {
        return this->value.map;
    }

    fn get_array() : std::Vec<JsonNode>& {
        return this->value.array;
    }

    fn get_int() : i64& {
        return this->value.int;
    }

    fn get_string() : std::string& {
        return this->value.str;
    }

    fn get_boolean() : bool& {
        return this->value.boolean;
    }

    fn get(key: const std::string&) : JsonNode& {
        return this->value.map[key];
    }

    fn get(key: const i8*) : JsonNode& {
        return this->value.map[std::string::assign(key)];
    }

    fn get(key: const i64&) : JsonNode& {
        return this->value.array[key];
    }

    fn [](key: const std::string&) : JsonNode& {
        return this->get(key);
    }

    fn [](key: const i8*) : JsonNode& {
        return this->get(key);
    }

    fn [](key: const i64&) : JsonNode& {
        return this->get(key);
    }

    fn get_int(key: const std::string&) : i64& {
        return this->get(key).value.int;
    }

    fn get_int(key: const i8*) : i64& {
        return this->get(std::string::assign(key)).value.int;
    }

    fn get_int(key: const i64&) : i64& {
        return this->get(key).value.int;
    }

    fn get_boolean(key: const std::string&) : bool& {
        return this->get(key).value.boolean;
    }

    fn get_boolean(key: const i8*) : bool& {
        return this->get(std::string::assign(key)).value.boolean;
    }

    fn get_boolean(key: const i64&) : bool& {
        return this->get(key).value.boolean;
    }

    fn get_string(key: const std::string&) : std::string& {
        return this->get(key).value.str;
    }

    fn get_string(key: const i8*) : std::string& {
        return this->get(std::string::assign(key)).value.str;
    }

    fn get_string(key: const i64&) : std::string& {
        return this->get(key).value.str;
    }

    fn stringify() : std::string {
        let str = std::string::new("");

        if this->type == JsonValueType::Object {
            str += "{";

            let node = this->value.map.list.first;

            while node != null {
                str += "\"" + node->value.key.replace('"', std::string::assign("\\\"")) + "\":";
                str += node->value.value->stringify();

                if node->next != null {
                    str += ",";
                }

                node = node->next;
            }

            str += "}";
        } else if this->type == JsonValueType::Array {
            str += "[";

            let vector = this->value.array;
            for i in std::range<u64>::new(vector.length) {
                str += vector[i].stringify();

                if (i + 1) < vector.length {
                    str += ",";
                }
            }

            str += "]";
        } else if this->type == JsonValueType::Number {
            str += std::to_string(this->value.int);
        } else if this->type == JsonValueType::String {
            str += "\"" + this->value.str.replace('"', std::string::assign("\\\"")) + "\"";
        } else if this->type == JsonValueType::Boolean {
            if this->value.int == 0 {
                str += "false";
            } else {
                str += "true";
            }
        } else if this->type == JsonValueType::Null {
            str += "null";
        }

        return str;
    }

    static fn parse(str: const i8*, error: bool&) : JsonNode {
        error = false;
        let node = _parse(str, error);

        if str[0] != 0 {
            error = true;
        }

        if error {
            std::print("JSON syntax error.");
        }

        return node;
    }

    static fn _parse(str: const i8*&, error: bool&) : JsonNode {
        while str[0] == ' ' {
            str += 1;
        }

        if str[0] == '{' {
            return JsonNode::new_object(_parse_object(str, error));
        } else if str[0] == '[' {
            return JsonNode::new_array(_parse_array(str, error));
        } else if str[0] == '"' {
            return JsonNode::new_string(_parse_string(str, error));
        } else if str[0] == '-' || (str[0] >= '0' && str[0] <= '9') {
            return JsonNode::new_int(_parse_int(str, error));
        } else if std::starts_with(str, "null") {
            str += 4;
            return JsonNode::new_null();
        } else if std::starts_with(str, "true") {
            str += 4;
            return JsonNode::new_boolean(true);
        } else if std::starts_with(str, "false") {
            str += 5;
            return JsonNode::new_boolean(false);
        } else {
            error = true;
            return JsonNode::new_empty();
        }
    }

    static fn _parse_object(str: const i8*&, error: bool&) : std::Map<std::string, JsonNode> {
        str += 1;

        let obj = std::Map<std::string, JsonNode>::new();

        while str[0] != 0 {
            if str[0] == '}' {
                break;
            }

            let name = _parse_string(str, error);

            if error {
                break;
            }

            if str[0] != ':' {
                error = true;
                break;
            }

            str += 1;

            let value = _parse(str, error);

            if error {
                break;
            }

            obj.insert(name, value);

            if str[0] == ',' {
                str += 1;

                if str[0] == '}' {
                    error = true;
                    break;
                }
            }
        }

        if str[0] != 0 {
            str += 1;
        }

        return obj;
    }

    static fn _parse_array(str: const i8*&, error: bool&) : std::Vec<JsonNode> {
        str += 1;

        let array = std::Vec<JsonNode>::new();

        while str[0] != 0 {
            if str[0] == ']' {
                break;
            }

            let value = _parse(str, error);

            if error {
                break;
            }

            array.push(value);

            if str[0] == ',' {
                str += 1;

                if str[0] == ']' {
                    error = true;
                    break;
                }
            }
        }

        if str[0] != 0 {
            str += 1;
        }

        return array;
    }

    static fn _parse_string(str: const i8*&, error: bool&) : std::string {
        if str[0] != '"' {
            error = true;
        }

        let out = std::string::new();

        str += 1;
        while str[0] != '"' {
            if str[0] == 0 {
                error = true;
                break;
            }

            if str[0] == '\\' {
                if str[1] == 0 {
                    error = true;
                    break;
                }

                out += str[1];

                str += 2;
            } else {
                out += str[0];
                str += 1;
            }
        }

        if str[0] != 0 {
            str += 1;
        }

        return out;
    }

    static fn _parse_int(str: const i8*&, error: bool&) : i64 {
        let out: i64 = 0;
        let multiplier = 0;
        let negative = str[0] == '-';

        if negative {
            str += 1;
        }

        if str[0] < '0' || str[0] > '9' {
            error = true;
        } else while str[0] >= '0' && str[0] <= '9' {
            out *= multiplier * 10;
            out += str[0] - '0';

            multiplier += 1;
            str += 1;
        }

        return out;
    }
}
