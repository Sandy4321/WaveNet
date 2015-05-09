#pragma once

#include "Wavelon.h"
#include <vector>

namespace wnn
{
	class Layer
	{
	public:
		Layer(int in, int out);
		std::vector<double> process(std::vector<double> in);
	private:
		std::vector<Wavelon> wavelons;
		std::vector<double> weights;
	};
}