;
;
jcolsamp.inc - private declarations for color conversion &up / downsampling
;
;
Copyright 2009 Pierre Ossman < ossman@cendio.se > for Cendio AB
;
;
Based on the x86 SIMD extension for IJG JPEG library
;
Copyright(C) 1999 - 2006, MIYASAKA Masaru.
;
For conditions of distribution and use, see copyright notice in jsimdext.inc
;
;
[TAB8]

;
--------------------------------------------------------------------------

;
pseudo - resisters to make ordering of RGB configurable
;
% if RGB_RED == 0
% define  mmA  mm0
% define  mmB  mm1
% define xmmA xmm0
% define xmmB xmm1
% elif RGB_GREEN == 0
% define  mmA  mm2
% define  mmB  mm3
% define xmmA xmm2
% define xmmB xmm3
% elif RGB_BLUE == 0
% define  mmA  mm4
% define  mmB  mm5
% define xmmA xmm4
% define xmmB xmm5
% else
	% define  mmA  mm6
	% define  mmB  mm7
	% define xmmA xmm6
	% define xmmB xmm7
	% endif

	% if RGB_RED == 1
		% define  mmC  mm0
		% define  mmD  mm1
		% define xmmC xmm0
		% define xmmD xmm1
		% elif RGB_GREEN == 1
		% define  mmC  mm2
		% define  mmD  mm3
		% define xmmC xmm2
		% define xmmD xmm3
		% elif RGB_BLUE == 1
		% define  mmC  mm4
		% define  mmD  mm5
		% define xmmC xmm4
		% define xmmD xmm5
		% else
			% define  mmC  mm6
			% define  mmD  mm7
			% define xmmC xmm6
			% define xmmD xmm7
			% endif

			% if RGB_RED == 2
				% define  mmE  mm0
				% define  mmF  mm1
				% define xmmE xmm0
				% define xmmF xmm1
				% elif RGB_GREEN == 2
				% define  mmE  mm2
				% define  mmF  mm3
				% define xmmE xmm2
				% define xmmF xmm3
				% elif RGB_BLUE == 2
				% define  mmE  mm4
				% define  mmF  mm5
				% define xmmE xmm4
				% define xmmF xmm5
				% else
					% define  mmE  mm6
					% define  mmF  mm7
					% define xmmE xmm6
					% define xmmF xmm7
					% endif

					% if RGB_RED == 3
						% define  mmG  mm0
						% define  mmH  mm1
						% define xmmG xmm0
						% define xmmH xmm1
						% elif RGB_GREEN == 3
						% define  mmG  mm2
						% define  mmH  mm3
						% define xmmG xmm2
						% define xmmH xmm3
						% elif RGB_BLUE == 3
						% define  mmG  mm4
						% define  mmH  mm5
						% define xmmG xmm4
						% define xmmH xmm5
						% else
							% define  mmG  mm6
							% define  mmH  mm7
							% define xmmG xmm6
							% define xmmH xmm7
							% endif

							;
--------------------------------------------------------------------------
