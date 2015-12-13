#ifndef __SGE_INPUT
#define __SGE_INPUT

namespace sge
{
	enum VKey
	{
		Up,
		Down,
		Left,
		Right,
		A,
		B,
		C,
		D,
		E,
		F,
		G,
		H,
		I,
		J,
		K,
		L,
		M,
		N,
		O,
		P,
		Q,
		R,
		S,
		T,
		U,
		V,
		W,
		X,
		Y,
		Z,
		Tab,
		CapsLock,
		LeftShift,
		RightShift,
		LeftCtrl,
		RightCtrl,
		LeftAlt,
		RightAlt,
		LeftSuper,
		RightSuper,
		Esc,
		Grave,
		One,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Zero,
		Minus,
		Plus,
		Backspace,
		Insert,
		Home,
		Delete,
		End,
		PageUp,
		PageDown,
		F1,
		F2,
		F3,
		F4,
		F5,
		F6,
		F7,
		F8,
		F9,
		F10,
		F11,
		F12,
		PrintScreen,
		ScrollLock,
		Break,
		NumKeys
	};

	enum VKState
	{
		Released,
		Pressed,
		NumStates
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