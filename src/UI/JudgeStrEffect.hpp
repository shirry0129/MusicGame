//
//  JudgeStrEffect.hpp
//  MusicGame
//
//  Created by NanamiYamamoto on 2018/10/17.
//

#ifndef JudgeStrEffect_hpp
#define JudgeStrEffect_hpp


#include <Siv3D.hpp>


namespace ui {

	
	struct JudgeStrEffect : IEffect {
	
		static constexpr double floatingHeight = 50;

		JudgeStrEffect(
			const String& _str, const Vec2& _fromPos, double _remainSec, const Color& _color
		) noexcept;

		virtual bool update(double t) override;
		
		
	private:
		const String str;
		const Vec2 fromPos;
		const double remainSec;
		const Color color;
		
	};
	
	
	
	struct _1stJudgeStrEffect : JudgeStrEffect {
	
		_1stJudgeStrEffect(
			const Vec2& _fromPos, double _remainSec
		) noexcept;

	};
	
	
	struct _2ndJudgeStrEffect : JudgeStrEffect {
	
		_2ndJudgeStrEffect(
			const Vec2& _fromPos, double _remainSec
		) noexcept;

	};
	
	
	struct _3rdJudgeStrEffect : JudgeStrEffect {
	
		_3rdJudgeStrEffect(
			const Vec2& _fromPos, double _remainSec
		) noexcept;

	};
	
	struct MissJudgeStrEffect : JudgeStrEffect {
	
		MissJudgeStrEffect(
			const Vec2& _fromPos, double _remainSec
		) noexcept;

	};
	
	
	
	using CriticalStrEffect = _1stJudgeStrEffect;
	using CorrectStrEffect = _2ndJudgeStrEffect;
	using NiceStrEffect = _3rdJudgeStrEffect;
	using MissStrEffect = MissJudgeStrEffect;

}


#endif /* JudgeStrEffect_hpp */
