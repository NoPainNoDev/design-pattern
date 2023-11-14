#pragma once

#define PLAYSTATION3 0x01
#define WII 0x02

#define PLATFORM PLAYSTATION3

namespace CrossPlatform
{
	class PS3FileSystem;
	class WiiFileSystem;
	class FileSystem
	{
	public:
		static FileSystem& instance()
		{
#if PLATFORM == PLAYSTATION3
			static FileSystem* instance = new PS3FileSystem();
#elif PLATFORM == WII
			static FileSystem* instance = new WiiFileSystem();
#endif
			return *instance;
		}
				virtual ~FileSystem() {}
		virtual char* ReadFile(char* path) = 0;
		virtual void WriteFile(char* path, char* contents) = 0;

	protected:
		FileSystem() {}
	};

	class PS3FileSystem : public FileSystem
	{
	public:
		virtual char* ReadFile(char* path)
		{
			// �Ҵ��� ���� IO API�� ����Ѵ�.
		}
		virtual void WriteFile(char* path, char* contents)
		{
			// �Ҵ��� ���� IO API�� ����Ѵ�.
		}
	};

	class WiiFileSystem : public FileSystem
	{
	public:
		virtual char* ReadFile(char* path)
		{
			// ���ٵ��� ���� IO API�� ����Ѵ�.
		}
		virtual void WriteFile(char* path, char* contents)
		{
			// ���ٵ��� ���� IO API�� ����Ѵ�.
		}
	};
};