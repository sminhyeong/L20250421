#pragma once
template<typename T>
class UCalcurater
{
public:
	T Add(T Number1, T Number2)
	{
		return Number1 + Number2;
	}
	T Sub(T Number1, T Number2)
	{
		return Number1 - Number2;
	}
	T Mul(T Number1, T Number2)
	{
		return Number1 * Number2;
	}
	T Dev(T Number1, T Number2)
	{
		return (Number2 != 0 ? Number1 / Number2 : -1);
	}
};

