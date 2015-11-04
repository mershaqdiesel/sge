#ifndef __SGE_INPUT
#define __SGE_INPUT

namespace sge
{
	enum VKState
	{
		Up,
		Down
	};

	class Input
	{
	public:
		static Input& Get();
	private:
		Input();

		Input(Input const&);
		void operator=(Input const&);
	};
}

#endif //__SGE_INPUT