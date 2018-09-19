/*

 This class manages the note of music game.
 It retains timing, lane position and more.

 2018/9/12 written by Nanami Yamamoto.
*/



#ifndef _NOTE_HPP_
#define _NOTE_HPP_


#include "Fraction.hpp"

namespace song {

	struct Note {
		Note(int barCnt, math::Fraction posInBar, size_t tickTime) noexcept;
		~Note();

		const int bar;
		const math::Fraction posInBar;
		const size_t lane;
	};


}

#endif // !_NOTE_HPP_

