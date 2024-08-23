#pragma once

#include <string>

namespace cmake_gitsub {
	namespace food {

		class Food {

		private:
			std::string sound;

		public:
			Food();
			void Eat();
		};

	}

}