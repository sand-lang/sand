#include <san/ClassType.hpp>
#include <san/Scope.hpp>

San::Type *San::Scope::get_type(const std::string &name, const std::vector<San::Type *> &generics)
{
    if (auto primary_type = this->get_primary_type(name))
    {
        return primary_type;
    }

    if (auto type = this->types[name])
    {
        if (auto class_type = dynamic_cast<ClassType *>(type))
        {
            if (!generics.empty())
            {
                if (auto generated = class_type->get_generated(generics))
                {
                    return generated;
                }
            }

            return class_type;
        }

        return type;
    }

    if (this->parent)
    {
        return this->parent->get_type(name, generics);
    }

    return nullptr;
}
