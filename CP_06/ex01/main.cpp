#include "Serialize.hpp"

int main()
{
	Data data;

	data.iData = 543;
    data.cData = 'y';
	data.fData = 42.02;

	Data * 		originalPointerData = &data;
	uintptr_t 	raw = serialize(originalPointerData);
	Data *		deserializePointerData = deserialize(raw);

	std::cout << "Reinterpret Pointer: " << raw << std::endl;
	std::cout << "Original Pointer:    " << originalPointerData << std::endl;
	std::cout << "Deserialize Pointer: " << deserializePointerData << std::endl;

	return (0);
}