#pragma once
class FileSystem
{
public:
	static FileSystem& instance()
	{
		//게으른 초기화
		if (nullptr == _instance)
		{
			_instance = new FileSystem();
		}
		return *_instance;
	}

private:
	FileSystem() {}
	static FileSystem* _instance;
};

