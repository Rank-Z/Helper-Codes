using size_type = unsigned;

template<typename T, size_type _Size>
constexpr size_type get_array_size(T(&array)[_Size])
{
	return _Size;
}

void _Example()
{
	int arr[100];
	get_array_size(arr); //return 100

	int arr2[1];
	get_array_size(arr2); //return 1
}