#pragma once
class FileSystem
{
public:
	static FileSystem& instance()
	{
		//������ �ʱ�ȭ
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

