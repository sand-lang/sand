#include <Sand/NameArray.hpp>

#include <Sand/Types/GenericClassType.hpp>

using namespace Sand;

NameArray *NameArray::get_generic_classes()
{
    auto array = new NameArray();

    for (auto it = this->names.rbegin(); it != this->names.rend(); it++)
    {
        auto name = *it;

        if (auto generic = dynamic_cast<Types::GenericClassType *>(name))
        {
            array->add(generic);
        }
        else
        {
            break;
        }
    }

    return array;
}
