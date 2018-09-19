#include "Note.hpp"


namespace song {


	Note::Note(int barCnt, math::Fraction posInBar, size_t tickTime)
		: barCnt(barCnt), posInBar(posInBar), tickTime(tickTime) {
	}

	Note::~Note() {}


}
