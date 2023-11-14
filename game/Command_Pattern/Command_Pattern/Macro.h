#pragma once

template<typename T>
void Safe_Delete(T* val)
{
	if (nullptr != val)
	{
		delete val;
		val = nullptr;
	}
}

template<typename T>
void Safe_Delete_Arr(T* arr)
{
	if (nullptr != arr)
	{
		delete[] arr;
		arr = nullptr;
	}
}