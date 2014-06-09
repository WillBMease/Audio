//-----------------------------------------------------
// name: "zita_rev1"
//
// Code generated with Faust 0.9.67 (http://faust.grame.fr)
//-----------------------------------------------------
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif  

typedef long double quad;
/* link with  */
#include <omp.h>
#include <math.h>
#ifndef FAUSTPOWER
#define FAUSTPOWER
#include <cmath>
template <int N> inline float faustpower(float x)          { return powf(x,N); } 
template <int N> inline double faustpower(double x)        { return pow(x,N); }
template <int N> inline int faustpower(int x)              { return faustpower<N/2>(x) * faustpower<N-N/2>(x); } 
template <> 	 inline int faustpower<0>(int x)            { return 1; }
template <> 	 inline int faustpower<1>(int x)            { return x; }
#endif

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

class mydsp : public dsp {
  private:
	FAUSTFLOAT 	fslider0;
	float 	fRec0_perm[4];
	FAUSTFLOAT 	fslider1;
	int 	iConst0;
	float 	fConst1;
	float 	fRec14_perm[4];
	FAUSTFLOAT 	fslider2;
	float 	fConst2;
	float 	fConst3;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT 	fslider4;
	float 	fConst4;
	float 	fRec13_perm[4];
	FAUSTFLOAT 	fcheckbox0;
	float 	fYec0[16384];
	int 	fYec0_idx;
	int 	fYec0_idx_save;
	FAUSTFLOAT 	fslider5;
	float 	fConst5;
	float 	fYec1[32768];
	int 	fYec1_idx;
	int 	fYec1_idx_save;
	float 	fConst6;
	int 	iConst7;
	float 	fYec2[2048];
	int 	fYec2_idx;
	int 	fYec2_idx_save;
	int 	iConst8;
	float 	fRec11_perm[4];
	float 	fRec18_perm[4];
	float 	fConst9;
	float 	fConst10;
	float 	fRec17_perm[4];
	float 	fYec3[32768];
	int 	fYec3_idx;
	int 	fYec3_idx_save;
	float 	fConst11;
	int 	iConst12;
	float 	fYec4[4096];
	int 	fYec4_idx;
	int 	fYec4_idx_save;
	int 	iConst13;
	float 	fRec15_perm[4];
	float 	fRec22_perm[4];
	float 	fConst14;
	float 	fConst15;
	float 	fRec21_perm[4];
	float 	fYec5[16384];
	int 	fYec5_idx;
	int 	fYec5_idx_save;
	float 	fConst16;
	int 	iConst17;
	float 	fYec6[4096];
	int 	fYec6_idx;
	int 	fYec6_idx_save;
	int 	iConst18;
	float 	fRec19_perm[4];
	float 	fRec26_perm[4];
	float 	fConst19;
	float 	fConst20;
	float 	fRec25_perm[4];
	float 	fYec7[32768];
	int 	fYec7_idx;
	int 	fYec7_idx_save;
	float 	fConst21;
	int 	iConst22;
	float 	fYec8[4096];
	int 	fYec8_idx;
	int 	fYec8_idx_save;
	int 	iConst23;
	float 	fRec23_perm[4];
	float 	fRec30_perm[4];
	float 	fConst24;
	float 	fConst25;
	float 	fRec29_perm[4];
	float 	fYec9[16384];
	int 	fYec9_idx;
	int 	fYec9_idx_save;
	float 	fYec10[16384];
	int 	fYec10_idx;
	int 	fYec10_idx_save;
	float 	fConst26;
	int 	iConst27;
	float 	fYec11[2048];
	int 	fYec11_idx;
	int 	fYec11_idx_save;
	int 	iConst28;
	float 	fRec27_perm[4];
	float 	fRec34_perm[4];
	float 	fConst29;
	float 	fConst30;
	float 	fRec33_perm[4];
	float 	fYec12[16384];
	int 	fYec12_idx;
	int 	fYec12_idx_save;
	float 	fConst31;
	int 	iConst32;
	float 	fYec13[4096];
	int 	fYec13_idx;
	int 	fYec13_idx_save;
	int 	iConst33;
	float 	fRec31_perm[4];
	float 	fRec38_perm[4];
	float 	fConst34;
	float 	fConst35;
	float 	fRec37_perm[4];
	float 	fYec14[16384];
	int 	fYec14_idx;
	int 	fYec14_idx_save;
	float 	fConst36;
	int 	iConst37;
	float 	fYec15[4096];
	int 	fYec15_idx;
	int 	fYec15_idx_save;
	int 	iConst38;
	float 	fRec35_perm[4];
	float 	fRec42_perm[4];
	float 	fConst39;
	float 	fConst40;
	float 	fRec41_perm[4];
	float 	fYec16[16384];
	int 	fYec16_idx;
	int 	fYec16_idx_save;
	float 	fConst41;
	int 	iConst42;
	float 	fYec17[2048];
	int 	fYec17_idx;
	int 	fYec17_idx_save;
	int 	iConst43;
	float 	fRec39_perm[4];
	float 	fRec3_perm[4];
	float 	fRec4_perm[4];
	float 	fRec5_perm[4];
	float 	fRec6_perm[4];
	float 	fRec7_perm[4];
	float 	fRec8_perm[4];
	float 	fRec9_perm[4];
	float 	fRec10_perm[4];
	FAUSTFLOAT 	fslider6;
	FAUSTFLOAT 	fslider7;
	float 	fConst44;
	float 	fRec2_perm[4];
	FAUSTFLOAT 	fslider8;
	FAUSTFLOAT 	fslider9;
	float 	fRec1_perm[4];
	FAUSTFLOAT 	fslider10;
	float 	fRec43_perm[4];
	float 	fRec45_perm[4];
	float 	fRec44_perm[4];
  public:
	static void metadata(Meta* m) 	{ 
		m->declare("name", "zita_rev1");
		m->declare("effect.lib/name", "Faust Audio Effect Library");
		m->declare("effect.lib/author", "Julius O. Smith (jos at ccrma.stanford.edu)");
		m->declare("effect.lib/copyright", "Julius O. Smith III");
		m->declare("effect.lib/version", "1.33");
		m->declare("effect.lib/license", "STK-4.3");
		m->declare("effect.lib/exciter_name", "Harmonic Exciter");
		m->declare("effect.lib/exciter_author", "Priyanka Shekar (pshekar@ccrma.stanford.edu)");
		m->declare("effect.lib/exciter_copyright", "Copyright (c) 2013 Priyanka Shekar");
		m->declare("effect.lib/exciter_version", "1.0");
		m->declare("effect.lib/exciter_license", "MIT License (MIT)");
		m->declare("filter.lib/name", "Faust Filter Library");
		m->declare("filter.lib/author", "Julius O. Smith (jos at ccrma.stanford.edu)");
		m->declare("filter.lib/copyright", "Julius O. Smith III");
		m->declare("filter.lib/version", "1.29");
		m->declare("filter.lib/license", "STK-4.3");
		m->declare("filter.lib/reference", "https://ccrma.stanford.edu/~jos/filters/");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/version", "1.0");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/version", "1.0");
		m->declare("math.lib/license", "LGPL with exception");
	}

	virtual int getNumInputs() 	{ return 2; }
	virtual int getNumOutputs() 	{ return 2; }
	static void classInit(int samplingFreq) {
	}
	virtual void instanceInit(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fslider0 = -2e+01f;
		for (int i=0; i<4; i++) fRec0_perm[i]=0;
		fslider1 = 2e+02f;
		iConst0 = min(192000, max(1, fSamplingFreq));
		fConst1 = (3.141592653589793f / float(iConst0));
		for (int i=0; i<4; i++) fRec14_perm[i]=0;
		fslider2 = 2.0f;
		fConst2 = floorf((0.5f + (0.219991f * iConst0)));
		fConst3 = ((0 - (6.907755278982138f * fConst2)) / float(iConst0));
		fslider3 = 3.0f;
		fslider4 = 6e+03f;
		fConst4 = (6.283185307179586f / float(iConst0));
		for (int i=0; i<4; i++) fRec13_perm[i]=0;
		fcheckbox0 = 0.0;
		for (int i=0; i<16384; i++) fYec0[i]=0;
		fYec0_idx = 0;
		fYec0_idx_save = 0;
		fslider5 = 6e+01f;
		fConst5 = (0.001f * iConst0);
		for (int i=0; i<32768; i++) fYec1[i]=0;
		fYec1_idx = 0;
		fYec1_idx_save = 0;
		fConst6 = floorf((0.5f + (0.019123f * iConst0)));
		iConst7 = int((int((fConst2 - fConst6)) & 16383));
		for (int i=0; i<2048; i++) fYec2[i]=0;
		fYec2_idx = 0;
		fYec2_idx_save = 0;
		iConst8 = int((int((fConst6 - 1)) & 1023));
		for (int i=0; i<4; i++) fRec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec18_perm[i]=0;
		fConst9 = floorf((0.5f + (0.256891f * iConst0)));
		fConst10 = ((0 - (6.907755278982138f * fConst9)) / float(iConst0));
		for (int i=0; i<4; i++) fRec17_perm[i]=0;
		for (int i=0; i<32768; i++) fYec3[i]=0;
		fYec3_idx = 0;
		fYec3_idx_save = 0;
		fConst11 = floorf((0.5f + (0.027333f * iConst0)));
		iConst12 = int((int((fConst9 - fConst11)) & 16383));
		for (int i=0; i<4096; i++) fYec4[i]=0;
		fYec4_idx = 0;
		fYec4_idx_save = 0;
		iConst13 = int((int((fConst11 - 1)) & 2047));
		for (int i=0; i<4; i++) fRec15_perm[i]=0;
		for (int i=0; i<4; i++) fRec22_perm[i]=0;
		fConst14 = floorf((0.5f + (0.192303f * iConst0)));
		fConst15 = ((0 - (6.907755278982138f * fConst14)) / float(iConst0));
		for (int i=0; i<4; i++) fRec21_perm[i]=0;
		for (int i=0; i<16384; i++) fYec5[i]=0;
		fYec5_idx = 0;
		fYec5_idx_save = 0;
		fConst16 = floorf((0.5f + (0.029291f * iConst0)));
		iConst17 = int((int((fConst14 - fConst16)) & 8191));
		for (int i=0; i<4096; i++) fYec6[i]=0;
		fYec6_idx = 0;
		fYec6_idx_save = 0;
		iConst18 = int((int((fConst16 - 1)) & 2047));
		for (int i=0; i<4; i++) fRec19_perm[i]=0;
		for (int i=0; i<4; i++) fRec26_perm[i]=0;
		fConst19 = floorf((0.5f + (0.210389f * iConst0)));
		fConst20 = ((0 - (6.907755278982138f * fConst19)) / float(iConst0));
		for (int i=0; i<4; i++) fRec25_perm[i]=0;
		for (int i=0; i<32768; i++) fYec7[i]=0;
		fYec7_idx = 0;
		fYec7_idx_save = 0;
		fConst21 = floorf((0.5f + (0.024421f * iConst0)));
		iConst22 = int((int((fConst19 - fConst21)) & 16383));
		for (int i=0; i<4096; i++) fYec8[i]=0;
		fYec8_idx = 0;
		fYec8_idx_save = 0;
		iConst23 = int((int((fConst21 - 1)) & 2047));
		for (int i=0; i<4; i++) fRec23_perm[i]=0;
		for (int i=0; i<4; i++) fRec30_perm[i]=0;
		fConst24 = floorf((0.5f + (0.125f * iConst0)));
		fConst25 = ((0 - (6.907755278982138f * fConst24)) / float(iConst0));
		for (int i=0; i<4; i++) fRec29_perm[i]=0;
		for (int i=0; i<16384; i++) fYec9[i]=0;
		fYec9_idx = 0;
		fYec9_idx_save = 0;
		for (int i=0; i<16384; i++) fYec10[i]=0;
		fYec10_idx = 0;
		fYec10_idx_save = 0;
		fConst26 = floorf((0.5f + (0.013458f * iConst0)));
		iConst27 = int((int((fConst24 - fConst26)) & 8191));
		for (int i=0; i<2048; i++) fYec11[i]=0;
		fYec11_idx = 0;
		fYec11_idx_save = 0;
		iConst28 = int((int((fConst26 - 1)) & 1023));
		for (int i=0; i<4; i++) fRec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec34_perm[i]=0;
		fConst29 = floorf((0.5f + (0.127837f * iConst0)));
		fConst30 = ((0 - (6.907755278982138f * fConst29)) / float(iConst0));
		for (int i=0; i<4; i++) fRec33_perm[i]=0;
		for (int i=0; i<16384; i++) fYec12[i]=0;
		fYec12_idx = 0;
		fYec12_idx_save = 0;
		fConst31 = floorf((0.5f + (0.031604f * iConst0)));
		iConst32 = int((int((fConst29 - fConst31)) & 8191));
		for (int i=0; i<4096; i++) fYec13[i]=0;
		fYec13_idx = 0;
		fYec13_idx_save = 0;
		iConst33 = int((int((fConst31 - 1)) & 2047));
		for (int i=0; i<4; i++) fRec31_perm[i]=0;
		for (int i=0; i<4; i++) fRec38_perm[i]=0;
		fConst34 = floorf((0.5f + (0.174713f * iConst0)));
		fConst35 = ((0 - (6.907755278982138f * fConst34)) / float(iConst0));
		for (int i=0; i<4; i++) fRec37_perm[i]=0;
		for (int i=0; i<16384; i++) fYec14[i]=0;
		fYec14_idx = 0;
		fYec14_idx_save = 0;
		fConst36 = floorf((0.5f + (0.022904f * iConst0)));
		iConst37 = int((int((fConst34 - fConst36)) & 8191));
		for (int i=0; i<4096; i++) fYec15[i]=0;
		fYec15_idx = 0;
		fYec15_idx_save = 0;
		iConst38 = int((int((fConst36 - 1)) & 2047));
		for (int i=0; i<4; i++) fRec35_perm[i]=0;
		for (int i=0; i<4; i++) fRec42_perm[i]=0;
		fConst39 = floorf((0.5f + (0.153129f * iConst0)));
		fConst40 = ((0 - (6.907755278982138f * fConst39)) / float(iConst0));
		for (int i=0; i<4; i++) fRec41_perm[i]=0;
		for (int i=0; i<16384; i++) fYec16[i]=0;
		fYec16_idx = 0;
		fYec16_idx_save = 0;
		fConst41 = floorf((0.5f + (0.020346f * iConst0)));
		iConst42 = int((int((fConst39 - fConst41)) & 8191));
		for (int i=0; i<2048; i++) fYec17[i]=0;
		fYec17_idx = 0;
		fYec17_idx_save = 0;
		iConst43 = int((int((fConst41 - 1)) & 1023));
		for (int i=0; i<4; i++) fRec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec3_perm[i]=0;
		for (int i=0; i<4; i++) fRec4_perm[i]=0;
		for (int i=0; i<4; i++) fRec5_perm[i]=0;
		for (int i=0; i<4; i++) fRec6_perm[i]=0;
		for (int i=0; i<4; i++) fRec7_perm[i]=0;
		for (int i=0; i<4; i++) fRec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec9_perm[i]=0;
		for (int i=0; i<4; i++) fRec10_perm[i]=0;
		fslider6 = 0.0f;
		fslider7 = 315.0f;
		fConst44 = (6.283185307179586f / float(iConst0));
		for (int i=0; i<4; i++) fRec2_perm[i]=0;
		fslider8 = 0.0f;
		fslider9 = 315.0f;
		for (int i=0; i<4; i++) fRec1_perm[i]=0;
		fslider10 = 0.0f;
		for (int i=0; i<4; i++) fRec43_perm[i]=0;
		for (int i=0; i<4; i++) fRec45_perm[i]=0;
		for (int i=0; i<4; i++) fRec44_perm[i]=0;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("zita_with_bypass.2.tmp");
		interface->addCheckButton("Bypass", &fcheckbox0);
		interface->declare(0, "0", "");
		interface->declare(0, "tooltip", "~ ZITA REV1 FEEDBACK DELAY NETWORK (FDN) & SCHROEDER ALLPASS-COMB REVERBERATOR (8x8). See Faust's effect.lib for documentation and references");
		interface->openHorizontalBox("Zita_Rev1");
		interface->declare(0, "1", "");
		interface->openHorizontalBox("Input");
		interface->declare(&fslider5, "1", "");
		interface->declare(&fslider5, "style", "knob");
		interface->declare(&fslider5, "tooltip", "Delay in ms before reverberation begins");
		interface->declare(&fslider5, "unit", "ms");
		interface->addVerticalSlider("In Delay", &fslider5, 6e+01f, 2e+01f, 1e+02f, 1.0f);
		interface->closeBox();
		interface->declare(0, "2", "");
		interface->openHorizontalBox("Decay Times in Bands (see tooltips)");
		interface->declare(&fslider1, "1", "");
		interface->declare(&fslider1, "style", "knob");
		interface->declare(&fslider1, "tooltip", "Crossover frequency (Hz) separating low and middle frequencies");
		interface->declare(&fslider1, "unit", "Hz");
		interface->addVerticalSlider("LF X", &fslider1, 2e+02f, 5e+01f, 1e+03f, 1.0f);
		interface->declare(&fslider3, "2", "");
		interface->declare(&fslider3, "style", "knob");
		interface->declare(&fslider3, "tooltip", "T60 = time (in seconds) to decay 60dB in low-frequency band");
		interface->declare(&fslider3, "unit", "s");
		interface->addVerticalSlider("Low RT60", &fslider3, 3.0f, 1.0f, 8.0f, 0.1f);
		interface->declare(&fslider2, "3", "");
		interface->declare(&fslider2, "style", "knob");
		interface->declare(&fslider2, "tooltip", "T60 = time (in seconds) to decay 60dB in middle band");
		interface->declare(&fslider2, "unit", "s");
		interface->addVerticalSlider("Mid RT60", &fslider2, 2.0f, 1.0f, 8.0f, 0.1f);
		interface->declare(&fslider4, "4", "");
		interface->declare(&fslider4, "style", "knob");
		interface->declare(&fslider4, "tooltip", "Frequency (Hz) at which the high-frequency T60 is half the middle-band's T60");
		interface->declare(&fslider4, "unit", "Hz");
		interface->addVerticalSlider("HF Damping", &fslider4, 6e+03f, 1.5e+03f, 2.352e+04f, 1.0f);
		interface->closeBox();
		interface->declare(0, "3", "");
		interface->openHorizontalBox("RM Peaking Equalizer 1");
		interface->declare(&fslider7, "1", "");
		interface->declare(&fslider7, "style", "knob");
		interface->declare(&fslider7, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 1");
		interface->declare(&fslider7, "unit", "Hz");
		interface->addVerticalSlider("Eq1 Freq", &fslider7, 315.0f, 4e+01f, 2.5e+03f, 1.0f);
		interface->declare(&fslider6, "2", "");
		interface->declare(&fslider6, "style", "knob");
		interface->declare(&fslider6, "tooltip", "Peak level in dB of second-order Regalia-Mitra peaking equalizer section 1");
		interface->declare(&fslider6, "unit", "dB");
		interface->addVerticalSlider("Eq1 Level", &fslider6, 0.0f, -15.0f, 15.0f, 0.1f);
		interface->closeBox();
		interface->declare(0, "4", "");
		interface->openHorizontalBox("RM Peaking Equalizer 2");
		interface->declare(&fslider9, "1", "");
		interface->declare(&fslider9, "style", "knob");
		interface->declare(&fslider9, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 2");
		interface->declare(&fslider9, "unit", "Hz");
		interface->addVerticalSlider("Eq2 Freq", &fslider9, 315.0f, 4e+01f, 2.5e+03f, 1.0f);
		interface->declare(&fslider8, "2", "");
		interface->declare(&fslider8, "style", "knob");
		interface->declare(&fslider8, "tooltip", "Peak level in dB of second-order Regalia-Mitra peaking equalizer section 2");
		interface->declare(&fslider8, "unit", "dB");
		interface->addVerticalSlider("Eq2 Level", &fslider8, 0.0f, -15.0f, 15.0f, 0.1f);
		interface->closeBox();
		interface->declare(0, "5", "");
		interface->openHorizontalBox("Output");
		interface->declare(&fslider10, "1", "");
		interface->declare(&fslider10, "style", "knob");
		interface->declare(&fslider10, "tooltip", "-1 = dry, 1 = wet");
		interface->addVerticalSlider("Dry/Wet Mix", &fslider10, 0.0f, -1.0f, 1.0f, 0.01f);
		interface->declare(&fslider0, "2", "");
		interface->declare(&fslider0, "style", "knob");
		interface->declare(&fslider0, "tooltip", "Output scale factor");
		interface->declare(&fslider0, "unit", "dB");
		interface->addVerticalSlider("Level", &fslider0, -2e+01f, -7e+01f, 4e+01f, 0.1f);
		interface->closeBox();
		interface->closeBox();
		interface->closeBox();
	}
	virtual void compute (int fullcount, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fRec0_tmp[512+4];
		float 	fRec14_tmp[512+4];
		float 	fRec13_tmp[512+4];
		float 	fZec0[512];
		float 	fRec11_tmp[512+4];
		float 	fRec12[512];
		float 	fRec18_tmp[512+4];
		float 	fRec17_tmp[512+4];
		float 	fRec15_tmp[512+4];
		float 	fRec16[512];
		float 	fRec22_tmp[512+4];
		float 	fRec21_tmp[512+4];
		float 	fRec19_tmp[512+4];
		float 	fRec20[512];
		float 	fRec26_tmp[512+4];
		float 	fRec25_tmp[512+4];
		float 	fRec23_tmp[512+4];
		float 	fRec24[512];
		float 	fRec30_tmp[512+4];
		float 	fRec29_tmp[512+4];
		float 	fZec1[512];
		float 	fRec27_tmp[512+4];
		float 	fRec28[512];
		float 	fRec34_tmp[512+4];
		float 	fRec33_tmp[512+4];
		float 	fRec31_tmp[512+4];
		float 	fRec32[512];
		float 	fRec38_tmp[512+4];
		float 	fRec37_tmp[512+4];
		float 	fRec35_tmp[512+4];
		float 	fRec36[512];
		float 	fRec42_tmp[512+4];
		float 	fRec41_tmp[512+4];
		float 	fRec39_tmp[512+4];
		float 	fRec40[512];
		float 	fZec2[512];
		float 	fZec3[512];
		float 	fRec3_tmp[512+4];
		float 	fRec4_tmp[512+4];
		float 	fZec4[512];
		float 	fRec5_tmp[512+4];
		float 	fRec6_tmp[512+4];
		float 	fZec5[512];
		float 	fZec6[512];
		float 	fRec7_tmp[512+4];
		float 	fRec8_tmp[512+4];
		float 	fZec7[512];
		float 	fZec8[512];
		float 	fRec9_tmp[512+4];
		float 	fRec10_tmp[512+4];
		float 	fZec9[512];
		float 	fZec10[512];
		float 	fRec2_tmp[512+4];
		float 	fZec11[512];
		float 	fZec12[512];
		float 	fZec13[512];
		float 	fRec1_tmp[512+4];
		float 	fRec43_tmp[512+4];
		float 	fZec14[512];
		float 	fZec15[512];
		float 	fZec16[512];
		float 	fZec17[512];
		float 	fZec18[512];
		float 	fRec45_tmp[512+4];
		float 	fZec19[512];
		float 	fZec20[512];
		float 	fZec21[512];
		float 	fRec44_tmp[512+4];
		float 	fZec22[512];
		float 	fSlow0 = (0.0010000000000000009f * powf(10,(0.05f * float(fslider0))));
		float* 	fRec0 = &fRec0_tmp[4];
		float 	fSlow1 = (1.0f / tanf((fConst1 * float(fslider1))));
		float 	fSlow2 = (1 + fSlow1);
		float 	fSlow3 = (1.0f / fSlow2);
		float 	fSlow4 = (0 - ((1 - fSlow1) / fSlow2));
		float* 	fRec14 = &fRec14_tmp[4];
		float 	fSlow5 = float(fslider2);
		float 	fSlow6 = expf((fConst3 / fSlow5));
		float 	fSlow7 = float(fslider3);
		float 	fSlow8 = ((expf((fConst3 / fSlow7)) / fSlow6) - 1);
		float 	fSlow9 = faustpower<2>(fSlow6);
		float 	fSlow10 = (1.0f - fSlow9);
		float 	fSlow11 = cosf((fConst4 * float(fslider4)));
		float 	fSlow12 = (1.0f - (fSlow9 * fSlow11));
		float 	fSlow13 = (fSlow12 / fSlow10);
		float 	fSlow14 = sqrtf(max((float)0, ((faustpower<2>(fSlow12) / faustpower<2>(fSlow10)) - 1.0f)));
		float 	fSlow15 = (fSlow6 * ((1.0f + fSlow14) - fSlow13));
		float 	fSlow16 = (fSlow13 - fSlow14);
		float* 	fRec13 = &fRec13_tmp[4];
		float 	fSlow17 = float(fcheckbox0);
		float 	fSlow18 = (1 - fSlow17);
		int 	iSlow19 = int((int((fConst5 * float(fslider5))) & 8191));
		float* 	fRec11 = &fRec11_tmp[4];
		float* 	fRec18 = &fRec18_tmp[4];
		float 	fSlow20 = expf((fConst10 / fSlow5));
		float 	fSlow21 = ((expf((fConst10 / fSlow7)) / fSlow20) - 1);
		float 	fSlow22 = faustpower<2>(fSlow20);
		float 	fSlow23 = (1.0f - fSlow22);
		float 	fSlow24 = (1.0f - (fSlow11 * fSlow22));
		float 	fSlow25 = (fSlow24 / fSlow23);
		float 	fSlow26 = sqrtf(max((float)0, ((faustpower<2>(fSlow24) / faustpower<2>(fSlow23)) - 1.0f)));
		float 	fSlow27 = (fSlow20 * ((1.0f + fSlow26) - fSlow25));
		float 	fSlow28 = (fSlow25 - fSlow26);
		float* 	fRec17 = &fRec17_tmp[4];
		float* 	fRec15 = &fRec15_tmp[4];
		float* 	fRec22 = &fRec22_tmp[4];
		float 	fSlow29 = expf((fConst15 / fSlow5));
		float 	fSlow30 = ((expf((fConst15 / fSlow7)) / fSlow29) - 1);
		float 	fSlow31 = faustpower<2>(fSlow29);
		float 	fSlow32 = (1.0f - fSlow31);
		float 	fSlow33 = (1.0f - (fSlow11 * fSlow31));
		float 	fSlow34 = (fSlow33 / fSlow32);
		float 	fSlow35 = sqrtf(max((float)0, ((faustpower<2>(fSlow33) / faustpower<2>(fSlow32)) - 1.0f)));
		float 	fSlow36 = (fSlow29 * ((1.0f + fSlow35) - fSlow34));
		float 	fSlow37 = (fSlow34 - fSlow35);
		float* 	fRec21 = &fRec21_tmp[4];
		float* 	fRec19 = &fRec19_tmp[4];
		float* 	fRec26 = &fRec26_tmp[4];
		float 	fSlow38 = expf((fConst20 / fSlow5));
		float 	fSlow39 = ((expf((fConst20 / fSlow7)) / fSlow38) - 1);
		float 	fSlow40 = faustpower<2>(fSlow38);
		float 	fSlow41 = (1.0f - fSlow40);
		float 	fSlow42 = (1.0f - (fSlow11 * fSlow40));
		float 	fSlow43 = (fSlow42 / fSlow41);
		float 	fSlow44 = sqrtf(max((float)0, ((faustpower<2>(fSlow42) / faustpower<2>(fSlow41)) - 1.0f)));
		float 	fSlow45 = (fSlow38 * ((1.0f + fSlow44) - fSlow43));
		float 	fSlow46 = (fSlow43 - fSlow44);
		float* 	fRec25 = &fRec25_tmp[4];
		float* 	fRec23 = &fRec23_tmp[4];
		float* 	fRec30 = &fRec30_tmp[4];
		float 	fSlow47 = expf((fConst25 / fSlow5));
		float 	fSlow48 = ((expf((fConst25 / fSlow7)) / fSlow47) - 1);
		float 	fSlow49 = faustpower<2>(fSlow47);
		float 	fSlow50 = (1.0f - fSlow49);
		float 	fSlow51 = (1.0f - (fSlow11 * fSlow49));
		float 	fSlow52 = (fSlow51 / fSlow50);
		float 	fSlow53 = sqrtf(max((float)0, ((faustpower<2>(fSlow51) / faustpower<2>(fSlow50)) - 1.0f)));
		float 	fSlow54 = (fSlow47 * ((1.0f + fSlow53) - fSlow52));
		float 	fSlow55 = (fSlow52 - fSlow53);
		float* 	fRec29 = &fRec29_tmp[4];
		float* 	fRec27 = &fRec27_tmp[4];
		float* 	fRec34 = &fRec34_tmp[4];
		float 	fSlow56 = expf((fConst30 / fSlow5));
		float 	fSlow57 = ((expf((fConst30 / fSlow7)) / fSlow56) - 1);
		float 	fSlow58 = faustpower<2>(fSlow56);
		float 	fSlow59 = (1.0f - fSlow58);
		float 	fSlow60 = (1.0f - (fSlow11 * fSlow58));
		float 	fSlow61 = (fSlow60 / fSlow59);
		float 	fSlow62 = sqrtf(max((float)0, ((faustpower<2>(fSlow60) / faustpower<2>(fSlow59)) - 1.0f)));
		float 	fSlow63 = (fSlow56 * ((1.0f + fSlow62) - fSlow61));
		float 	fSlow64 = (fSlow61 - fSlow62);
		float* 	fRec33 = &fRec33_tmp[4];
		float* 	fRec31 = &fRec31_tmp[4];
		float* 	fRec38 = &fRec38_tmp[4];
		float 	fSlow65 = expf((fConst35 / fSlow5));
		float 	fSlow66 = ((expf((fConst35 / fSlow7)) / fSlow65) - 1);
		float 	fSlow67 = faustpower<2>(fSlow65);
		float 	fSlow68 = (1.0f - fSlow67);
		float 	fSlow69 = (1.0f - (fSlow11 * fSlow67));
		float 	fSlow70 = (fSlow69 / fSlow68);
		float 	fSlow71 = sqrtf(max((float)0, ((faustpower<2>(fSlow69) / faustpower<2>(fSlow68)) - 1.0f)));
		float 	fSlow72 = (fSlow65 * ((1.0f + fSlow71) - fSlow70));
		float 	fSlow73 = (fSlow70 - fSlow71);
		float* 	fRec37 = &fRec37_tmp[4];
		float* 	fRec35 = &fRec35_tmp[4];
		float* 	fRec42 = &fRec42_tmp[4];
		float 	fSlow74 = expf((fConst40 / fSlow5));
		float 	fSlow75 = ((expf((fConst40 / fSlow7)) / fSlow74) - 1);
		float 	fSlow76 = faustpower<2>(fSlow74);
		float 	fSlow77 = (1.0f - fSlow76);
		float 	fSlow78 = (1.0f - (fSlow11 * fSlow76));
		float 	fSlow79 = (fSlow78 / fSlow77);
		float 	fSlow80 = sqrtf(max((float)0, ((faustpower<2>(fSlow78) / faustpower<2>(fSlow77)) - 1.0f)));
		float 	fSlow81 = (fSlow74 * ((1.0f + fSlow80) - fSlow79));
		float 	fSlow82 = (fSlow79 - fSlow80);
		float* 	fRec41 = &fRec41_tmp[4];
		float* 	fRec39 = &fRec39_tmp[4];
		float* 	fRec3 = &fRec3_tmp[4];
		float* 	fRec4 = &fRec4_tmp[4];
		float* 	fRec5 = &fRec5_tmp[4];
		float* 	fRec6 = &fRec6_tmp[4];
		float* 	fRec7 = &fRec7_tmp[4];
		float* 	fRec8 = &fRec8_tmp[4];
		float* 	fRec9 = &fRec9_tmp[4];
		float* 	fRec10 = &fRec10_tmp[4];
		float 	fSlow83 = powf(10,(0.05f * float(fslider6)));
		float 	fSlow84 = float(fslider7);
		float 	fSlow85 = (fConst44 * (fSlow84 / sqrtf(max((float)0, fSlow83))));
		float 	fSlow86 = ((1.0f - fSlow85) / (1.0f + fSlow85));
		float 	fSlow87 = ((0 - cosf((fConst44 * fSlow84))) * (1 + fSlow86));
		float* 	fRec2 = &fRec2_tmp[4];
		float 	fSlow88 = powf(10,(0.05f * float(fslider8)));
		float 	fSlow89 = float(fslider9);
		float 	fSlow90 = (fConst44 * (fSlow89 / sqrtf(max((float)0, fSlow88))));
		float 	fSlow91 = ((1.0f - fSlow90) / (1.0f + fSlow90));
		float 	fSlow92 = ((0 - cosf((fConst44 * fSlow89))) * (1 + fSlow91));
		float* 	fRec1 = &fRec1_tmp[4];
		float 	fSlow93 = (0.0010000000000000009f * float(fslider10));
		float* 	fRec43 = &fRec43_tmp[4];
		float* 	fRec45 = &fRec45_tmp[4];
		float* 	fRec44 = &fRec44_tmp[4];
		#pragma omp parallel\
			firstprivate(fSlow0, fRec0, fSlow1, fSlow2, fSlow3, fSlow4, fRec14, fSlow5, fSlow6, fSlow7, fSlow8, fSlow9, fSlow10, fSlow11, fSlow12, fSlow13, fSlow14, fSlow15, fSlow16, fRec13, fSlow17, fSlow18, iSlow19, fRec11, fRec18, fSlow20, fSlow21, fSlow22, fSlow23, fSlow24, fSlow25, fSlow26, fSlow27, fSlow28, fRec17, fRec15, fRec22, fSlow29, fSlow30, fSlow31, fSlow32, fSlow33, fSlow34, fSlow35, fSlow36, fSlow37, fRec21, fRec19, fRec26, fSlow38, fSlow39, fSlow40, fSlow41, fSlow42, fSlow43, fSlow44, fSlow45, fSlow46, fRec25, fRec23, fRec30, fSlow47, fSlow48, fSlow49, fSlow50, fSlow51, fSlow52, fSlow53, fSlow54, fSlow55, fRec29, fRec27, fRec34, fSlow56, fSlow57, fSlow58, fSlow59, fSlow60, fSlow61, fSlow62, fSlow63, fSlow64, fRec33, fRec31, fRec38, fSlow65, fSlow66, fSlow67, fSlow68, fSlow69, fSlow70, fSlow71, fSlow72, fSlow73, fRec37, fRec35, fRec42, fSlow74, fSlow75, fSlow76, fSlow77, fSlow78, fSlow79, fSlow80, fSlow81, fSlow82, fRec41, fRec39, fRec3, fRec4, fRec5, fRec6, fRec7, fRec8, fRec9, fRec10, fSlow83, fSlow84, fSlow85, fSlow86, fSlow87, fRec2, fSlow88, fSlow89, fSlow90, fSlow91, fSlow92, fRec1, fSlow93, fRec43, fRec45, fRec44)
		{
			for (int index = 0; index < fullcount; index += 512) {
				int count = min (512, fullcount-index);
				FAUSTFLOAT* input0 = &input[0][index];
				FAUSTFLOAT* input1 = &input[1][index];
				FAUSTFLOAT* output0 = &output[0][index];
				FAUSTFLOAT* output1 = &output[1][index];
				// SECTION : 1
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38d9a10
						// pre processing
						fYec0_idx = (fYec0_idx+fYec0_idx_save)&16383;
						// exec code
						for (int i=0; i<count; i++) {
							fYec0[(fYec0_idx+i)&16383] = (fSlow18 * (float)input1[i]);
						}
						// post processing
						fYec0_idx_save = count;
						
					} 
					#pragma omp section 
					{
						// LOOP 0x38fd230
						// pre processing
						fYec9_idx = (fYec9_idx+fYec9_idx_save)&16383;
						// exec code
						for (int i=0; i<count; i++) {
							fYec9[(fYec9_idx+i)&16383] = (fSlow18 * (float)input0[i]);
						}
						// post processing
						fYec9_idx_save = count;
						
					} 
				} 
				// SECTION : 2
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38d9930
						// exec code
						for (int i=0; i<count; i++) {
							fZec0[i] = (0.3f * fYec0[(fYec0_idx+i-iSlow19)&16383]);
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x38fd150
						// exec code
						for (int i=0; i<count; i++) {
							fZec1[i] = (0.3f * fYec9[(fYec9_idx+i-iSlow19)&16383]);
						}
						
					} 
				} 
				// SECTION : 3
				#pragma omp single 
				{ 
					// LOOP 0x38c4180
					// pre processing
					for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
					for (int i=0; i<4; i++) fRec13_tmp[i]=fRec13_perm[i];
					fYec1_idx = (fYec1_idx+fYec1_idx_save)&32767;
					fYec2_idx = (fYec2_idx+fYec2_idx_save)&2047;
					for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
					for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
					for (int i=0; i<4; i++) fRec17_tmp[i]=fRec17_perm[i];
					fYec3_idx = (fYec3_idx+fYec3_idx_save)&32767;
					fYec4_idx = (fYec4_idx+fYec4_idx_save)&4095;
					for (int i=0; i<4; i++) fRec15_tmp[i]=fRec15_perm[i];
					for (int i=0; i<4; i++) fRec22_tmp[i]=fRec22_perm[i];
					for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
					fYec5_idx = (fYec5_idx+fYec5_idx_save)&16383;
					fYec6_idx = (fYec6_idx+fYec6_idx_save)&4095;
					for (int i=0; i<4; i++) fRec19_tmp[i]=fRec19_perm[i];
					for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
					for (int i=0; i<4; i++) fRec25_tmp[i]=fRec25_perm[i];
					fYec7_idx = (fYec7_idx+fYec7_idx_save)&32767;
					fYec8_idx = (fYec8_idx+fYec8_idx_save)&4095;
					for (int i=0; i<4; i++) fRec23_tmp[i]=fRec23_perm[i];
					for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
					for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
					fYec10_idx = (fYec10_idx+fYec10_idx_save)&16383;
					fYec11_idx = (fYec11_idx+fYec11_idx_save)&2047;
					for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
					for (int i=0; i<4; i++) fRec34_tmp[i]=fRec34_perm[i];
					for (int i=0; i<4; i++) fRec33_tmp[i]=fRec33_perm[i];
					fYec12_idx = (fYec12_idx+fYec12_idx_save)&16383;
					fYec13_idx = (fYec13_idx+fYec13_idx_save)&4095;
					for (int i=0; i<4; i++) fRec31_tmp[i]=fRec31_perm[i];
					for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
					for (int i=0; i<4; i++) fRec37_tmp[i]=fRec37_perm[i];
					fYec14_idx = (fYec14_idx+fYec14_idx_save)&16383;
					fYec15_idx = (fYec15_idx+fYec15_idx_save)&4095;
					for (int i=0; i<4; i++) fRec35_tmp[i]=fRec35_perm[i];
					for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
					for (int i=0; i<4; i++) fRec41_tmp[i]=fRec41_perm[i];
					fYec16_idx = (fYec16_idx+fYec16_idx_save)&16383;
					fYec17_idx = (fYec17_idx+fYec17_idx_save)&2047;
					for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
					for (int i=0; i<4; i++) fRec3_tmp[i]=fRec3_perm[i];
					for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
					for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
					for (int i=0; i<4; i++) fRec6_tmp[i]=fRec6_perm[i];
					for (int i=0; i<4; i++) fRec7_tmp[i]=fRec7_perm[i];
					for (int i=0; i<4; i++) fRec8_tmp[i]=fRec8_perm[i];
					for (int i=0; i<4; i++) fRec9_tmp[i]=fRec9_perm[i];
					for (int i=0; i<4; i++) fRec10_tmp[i]=fRec10_perm[i];
					// exec code
					for (int i=0; i<count; i++) {
						fRec14[i] = ((fSlow4 * fRec14[i-1]) + (fSlow3 * (fRec10[i-1] + fRec10[i-2])));
						fRec13[i] = ((fSlow16 * fRec13[i-1]) + (fSlow15 * (fRec10[i-1] + (fSlow8 * fRec14[i]))));
						fYec1[(fYec1_idx+i)&32767] = (1e-20f + (0.35355339059327373f * fRec13[i]));
						fYec2[(fYec2_idx+i)&2047] = (((0.6f * fRec11[i-1]) + fYec1[(fYec1_idx+i-iConst7)&32767]) - fZec0[i]);
						fRec11[i] = fYec2[(fYec2_idx+i-iConst8)&2047];
						fRec12[i] = (0 - (0.6f * fYec2[(fYec2_idx+i) & 2047]));
						fRec18[i] = ((fSlow4 * fRec18[i-1]) + (fSlow3 * (fRec6[i-1] + fRec6[i-2])));
						fRec17[i] = ((fSlow28 * fRec17[i-1]) + (fSlow27 * (fRec6[i-1] + (fSlow21 * fRec18[i]))));
						fYec3[(fYec3_idx+i)&32767] = (1e-20f + (0.35355339059327373f * fRec17[i]));
						fYec4[(fYec4_idx+i)&4095] = (((0.6f * fRec15[i-1]) + fYec3[(fYec3_idx+i-iConst12)&32767]) - fZec0[i]);
						fRec15[i] = fYec4[(fYec4_idx+i-iConst13)&4095];
						fRec16[i] = (0 - (0.6f * fYec4[(fYec4_idx+i) & 4095]));
						fRec22[i] = ((fSlow4 * fRec22[i-1]) + (fSlow3 * (fRec8[i-1] + fRec8[i-2])));
						fRec21[i] = ((fSlow37 * fRec21[i-1]) + (fSlow36 * (fRec8[i-1] + (fSlow30 * fRec22[i]))));
						fYec5[(fYec5_idx+i)&16383] = (1e-20f + (0.35355339059327373f * fRec21[i]));
						fYec6[(fYec6_idx+i)&4095] = (fYec5[(fYec5_idx+i-iConst17)&16383] + (fZec0[i] + (0.6f * fRec19[i-1])));
						fRec19[i] = fYec6[(fYec6_idx+i-iConst18)&4095];
						fRec20[i] = (0 - (0.6f * fYec6[(fYec6_idx+i) & 4095]));
						fRec26[i] = ((fSlow4 * fRec26[i-1]) + (fSlow3 * (fRec4[i-1] + fRec4[i-2])));
						fRec25[i] = ((fSlow46 * fRec25[i-1]) + (fSlow45 * (fRec4[i-1] + (fSlow39 * fRec26[i]))));
						fYec7[(fYec7_idx+i)&32767] = (1e-20f + (0.35355339059327373f * fRec25[i]));
						fYec8[(fYec8_idx+i)&4095] = (fZec0[i] + ((0.6f * fRec23[i-1]) + fYec7[(fYec7_idx+i-iConst22)&32767]));
						fRec23[i] = fYec8[(fYec8_idx+i-iConst23)&4095];
						fRec24[i] = (0 - (0.6f * fYec8[(fYec8_idx+i) & 4095]));
						fRec30[i] = ((fSlow4 * fRec30[i-1]) + (fSlow3 * (fRec9[i-1] + fRec9[i-2])));
						fRec29[i] = ((fSlow55 * fRec29[i-1]) + (fSlow54 * (fRec9[i-1] + (fSlow48 * fRec30[i]))));
						fYec10[(fYec10_idx+i)&16383] = (1e-20f + (0.35355339059327373f * fRec29[i]));
						fYec11[(fYec11_idx+i)&2047] = (fYec10[(fYec10_idx+i-iConst27)&16383] - (fZec1[i] + (0.6f * fRec27[i-1])));
						fRec27[i] = fYec11[(fYec11_idx+i-iConst28)&2047];
						fRec28[i] = (0.6f * fYec11[(fYec11_idx+i) & 2047]);
						fRec34[i] = ((fSlow4 * fRec34[i-1]) + (fSlow3 * (fRec5[i-1] + fRec5[i-2])));
						fRec33[i] = ((fSlow64 * fRec33[i-1]) + (fSlow63 * (fRec5[i-1] + (fSlow57 * fRec34[i]))));
						fYec12[(fYec12_idx+i)&16383] = (1e-20f + (0.35355339059327373f * fRec33[i]));
						fYec13[(fYec13_idx+i)&4095] = (fYec12[(fYec12_idx+i-iConst32)&16383] - (fZec1[i] + (0.6f * fRec31[i-1])));
						fRec31[i] = fYec13[(fYec13_idx+i-iConst33)&4095];
						fRec32[i] = (0.6f * fYec13[(fYec13_idx+i) & 4095]);
						fRec38[i] = ((fSlow4 * fRec38[i-1]) + (fSlow3 * (fRec7[i-1] + fRec7[i-2])));
						fRec37[i] = ((fSlow73 * fRec37[i-1]) + (fSlow72 * (fRec7[i-1] + (fSlow66 * fRec38[i]))));
						fYec14[(fYec14_idx+i)&16383] = (1e-20f + (0.35355339059327373f * fRec37[i]));
						fYec15[(fYec15_idx+i)&4095] = ((fZec1[i] + fYec14[(fYec14_idx+i-iConst37)&16383]) - (0.6f * fRec35[i-1]));
						fRec35[i] = fYec15[(fYec15_idx+i-iConst38)&4095];
						fRec36[i] = (0.6f * fYec15[(fYec15_idx+i) & 4095]);
						fRec42[i] = ((fSlow4 * fRec42[i-1]) + (fSlow3 * (fRec3[i-1] + fRec3[i-2])));
						fRec41[i] = ((fSlow82 * fRec41[i-1]) + (fSlow81 * (fRec3[i-1] + (fSlow75 * fRec42[i]))));
						fYec16[(fYec16_idx+i)&16383] = (1e-20f + (0.35355339059327373f * fRec41[i]));
						fYec17[(fYec17_idx+i)&2047] = ((fYec16[(fYec16_idx+i-iConst42)&16383] + fZec1[i]) - (0.6f * fRec39[i-1]));
						fRec39[i] = fYec17[(fYec17_idx+i-iConst43)&2047];
						fRec40[i] = (0.6f * fYec17[(fYec17_idx+i) & 2047]);
						fZec2[i] = (fRec40[i] + fRec36[i]);
						fZec3[i] = (fRec28[i] + (fRec32[i] + fZec2[i]));
						fRec3[i] = (fRec11[i-1] + (fRec15[i-1] + (fRec19[i-1] + (fRec23[i-1] + (fRec27[i-1] + (fRec31[i-1] + (fRec35[i-1] + (fRec39[i-1] + (fRec12[i] + (fRec16[i] + (fRec20[i] + (fRec24[i] + fZec3[i]))))))))))));
						fRec4[i] = (0 - ((fRec11[i-1] + (fRec15[i-1] + (fRec19[i-1] + (fRec23[i-1] + (fRec12[i] + (fRec16[i] + (fRec24[i] + fRec20[i]))))))) - (fRec27[i-1] + (fRec31[i-1] + (fRec35[i-1] + (fRec39[i-1] + fZec3[i]))))));
						fZec4[i] = (fRec32[i] + fRec28[i]);
						fRec5[i] = (0 - ((fRec11[i-1] + (fRec15[i-1] + (fRec27[i-1] + (fRec31[i-1] + (fRec12[i] + (fRec16[i] + fZec4[i])))))) - (fRec19[i-1] + (fRec23[i-1] + (fRec35[i-1] + (fRec39[i-1] + (fRec20[i] + (fRec24[i] + fZec2[i]))))))));
						fRec6[i] = (0 - ((fRec19[i-1] + (fRec23[i-1] + (fRec27[i-1] + (fRec31[i-1] + (fRec20[i] + (fRec24[i] + fZec4[i])))))) - (fRec11[i-1] + (fRec15[i-1] + (fRec35[i-1] + (fRec39[i-1] + (fRec12[i] + (fRec16[i] + fZec2[i]))))))));
						fZec5[i] = (fRec40[i] + fRec32[i]);
						fZec6[i] = (fRec36[i] + fRec28[i]);
						fRec7[i] = (0 - ((fRec11[i-1] + (fRec19[i-1] + (fRec27[i-1] + (fRec35[i-1] + (fRec12[i] + (fRec20[i] + fZec6[i])))))) - (fRec15[i-1] + (fRec23[i-1] + (fRec31[i-1] + (fRec39[i-1] + (fRec16[i] + (fRec24[i] + fZec5[i]))))))));
						fRec8[i] = (0 - ((fRec15[i-1] + (fRec23[i-1] + (fRec27[i-1] + (fRec35[i-1] + (fRec16[i] + (fRec24[i] + fZec6[i])))))) - (fRec11[i-1] + (fRec19[i-1] + (fRec31[i-1] + (fRec39[i-1] + (fRec12[i] + (fRec20[i] + fZec5[i]))))))));
						fZec7[i] = (fRec40[i] + fRec28[i]);
						fZec8[i] = (fRec36[i] + fRec32[i]);
						fRec9[i] = (0 - ((fRec15[i-1] + (fRec19[i-1] + (fRec31[i-1] + (fRec35[i-1] + (fRec16[i] + (fRec20[i] + fZec8[i])))))) - (fRec11[i-1] + (fRec23[i-1] + (fRec27[i-1] + (fRec39[i-1] + (fRec12[i] + (fRec24[i] + fZec7[i]))))))));
						fRec10[i] = (0 - ((fRec11[i-1] + (fRec23[i-1] + (fRec31[i-1] + (fRec35[i-1] + (fRec12[i] + (fRec24[i] + fZec8[i])))))) - (fRec15[i-1] + (fRec19[i-1] + (fRec27[i-1] + (fRec39[i-1] + (fRec16[i] + (fRec20[i] + fZec7[i]))))))));
					}
					// post processing
					for (int i=0; i<4; i++) fRec10_perm[i]=fRec10_tmp[count+i];
					for (int i=0; i<4; i++) fRec9_perm[i]=fRec9_tmp[count+i];
					for (int i=0; i<4; i++) fRec8_perm[i]=fRec8_tmp[count+i];
					for (int i=0; i<4; i++) fRec7_perm[i]=fRec7_tmp[count+i];
					for (int i=0; i<4; i++) fRec6_perm[i]=fRec6_tmp[count+i];
					for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
					for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
					for (int i=0; i<4; i++) fRec3_perm[i]=fRec3_tmp[count+i];
					for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
					fYec17_idx_save = count;
					fYec16_idx_save = count;
					for (int i=0; i<4; i++) fRec41_perm[i]=fRec41_tmp[count+i];
					for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
					for (int i=0; i<4; i++) fRec35_perm[i]=fRec35_tmp[count+i];
					fYec15_idx_save = count;
					fYec14_idx_save = count;
					for (int i=0; i<4; i++) fRec37_perm[i]=fRec37_tmp[count+i];
					for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
					for (int i=0; i<4; i++) fRec31_perm[i]=fRec31_tmp[count+i];
					fYec13_idx_save = count;
					fYec12_idx_save = count;
					for (int i=0; i<4; i++) fRec33_perm[i]=fRec33_tmp[count+i];
					for (int i=0; i<4; i++) fRec34_perm[i]=fRec34_tmp[count+i];
					for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
					fYec11_idx_save = count;
					fYec10_idx_save = count;
					for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
					for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
					for (int i=0; i<4; i++) fRec23_perm[i]=fRec23_tmp[count+i];
					fYec8_idx_save = count;
					fYec7_idx_save = count;
					for (int i=0; i<4; i++) fRec25_perm[i]=fRec25_tmp[count+i];
					for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
					for (int i=0; i<4; i++) fRec19_perm[i]=fRec19_tmp[count+i];
					fYec6_idx_save = count;
					fYec5_idx_save = count;
					for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
					for (int i=0; i<4; i++) fRec22_perm[i]=fRec22_tmp[count+i];
					for (int i=0; i<4; i++) fRec15_perm[i]=fRec15_tmp[count+i];
					fYec4_idx_save = count;
					fYec3_idx_save = count;
					for (int i=0; i<4; i++) fRec17_perm[i]=fRec17_tmp[count+i];
					for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
					for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
					fYec2_idx_save = count;
					fYec1_idx_save = count;
					for (int i=0; i<4; i++) fRec13_perm[i]=fRec13_tmp[count+i];
					for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
					
				} 
				// SECTION : 4
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x3929d00
						// exec code
						for (int i=0; i<count; i++) {
							fZec9[i] = (0.37f * (fRec4[i] + fRec5[i]));
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3936e90
						// exec code
						for (int i=0; i<count; i++) {
							fZec17[i] = (0.37f * (fRec4[i] - fRec5[i]));
						}
						
					} 
				} 
				// SECTION : 5
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38c3d20
						// pre processing
						for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fZec10[i] = (fSlow87 * fRec2[i-1]);
							fRec2[i] = (0 - ((fZec10[i] + (fSlow86 * fRec2[i-2])) - fZec9[i]));
						}
						// post processing
						for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3936b90
						// pre processing
						for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fZec18[i] = (fSlow87 * fRec45[i-1]);
							fRec45[i] = (0 - ((fZec18[i] + (fSlow86 * fRec45[i-2])) - fZec17[i]));
						}
						// post processing
						for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
						
					} 
				} 
				// SECTION : 6
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x392c610
						// exec code
						for (int i=0; i<count; i++) {
							fZec11[i] = (fSlow86 * fRec2[i]);
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3939c40
						// exec code
						for (int i=0; i<count; i++) {
							fZec19[i] = (fSlow86 * fRec45[i]);
						}
						
					} 
				} 
				// SECTION : 7
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x392c470
						// exec code
						for (int i=0; i<count; i++) {
							fZec12[i] = (0.5f * ((fZec11[i] + (fRec2[i-2] + (fZec9[i] + fZec10[i]))) + (fSlow83 * ((fZec11[i] + (fZec10[i] + fRec2[i-2])) - fZec9[i]))));
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3931910
						// pre processing
						for (int i=0; i<4; i++) fRec43_tmp[i]=fRec43_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fRec43[i] = ((0.999f * fRec43[i-1]) + fSlow93);
						}
						// post processing
						for (int i=0; i<4; i++) fRec43_perm[i]=fRec43_tmp[count+i];
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3939aa0
						// exec code
						for (int i=0; i<count; i++) {
							fZec20[i] = (0.5f * ((fZec19[i] + (fRec45[i-2] + (fZec17[i] + fZec18[i]))) + (fSlow83 * ((fZec19[i] + (fZec18[i] + fRec45[i-2])) - fZec17[i]))));
						}
						
					} 
				} 
				// SECTION : 8
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38c38c0
						// pre processing
						for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fZec13[i] = (fSlow92 * fRec1[i-1]);
							fRec1[i] = (0 - ((fZec13[i] + (fSlow91 * fRec1[i-2])) - fZec12[i]));
						}
						// post processing
						for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3933130
						// exec code
						for (int i=0; i<count; i++) {
							fZec14[i] = (1.0f + fRec43[i]);
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3936730
						// pre processing
						for (int i=0; i<4; i++) fRec44_tmp[i]=fRec44_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fZec21[i] = (fSlow92 * fRec44[i-1]);
							fRec44[i] = (0 - ((fZec21[i] + (fSlow91 * fRec44[i-2])) - fZec20[i]));
						}
						// post processing
						for (int i=0; i<4; i++) fRec44_perm[i]=fRec44_tmp[count+i];
						
					} 
				} 
				// SECTION : 9
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38c1880
						// pre processing
						for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
						// exec code
						for (int i=0; i<count; i++) {
							fRec0[i] = ((0.999f * fRec0[i-1]) + fSlow0);
						}
						// post processing
						for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3933050
						// exec code
						for (int i=0; i<count; i++) {
							fZec15[i] = (1.0f - (0.5f * fZec14[i]));
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3933ea0
						// exec code
						for (int i=0; i<count; i++) {
							fZec16[i] = (fSlow91 * fRec1[i]);
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x393d6a0
						// exec code
						for (int i=0; i<count; i++) {
							fZec22[i] = (fSlow91 * fRec44[i]);
						}
						
					} 
				} 
				// SECTION : 10
				#pragma omp sections 
				{ 
					#pragma omp section 
					{
						// LOOP 0x38c1680
						// exec code
						for (int i=0; i<count; i++) {
							output0[i] = (FAUSTFLOAT)((fSlow17 * (float)input0[i]) + (fRec0[i] * ((0.25f * (((fZec16[i] + (fRec1[i-2] + (fZec12[i] + fZec13[i]))) + (fSlow88 * ((fZec16[i] + (fZec13[i] + fRec1[i-2])) - fZec12[i]))) * fZec14[i])) + (fSlow18 * ((float)input0[i] * fZec15[i])))));
						}
						
					} 
					#pragma omp section 
					{
						// LOOP 0x3936530
						// exec code
						for (int i=0; i<count; i++) {
							output1[i] = (FAUSTFLOAT)((fSlow17 * (float)input1[i]) + (fRec0[i] * ((0.25f * (fZec14[i] * ((fZec22[i] + (fRec44[i-2] + (fZec20[i] + fZec21[i]))) + (fSlow88 * ((fZec22[i] + (fZec21[i] + fRec44[i-2])) - fZec20[i]))))) + (fSlow18 * ((float)input1[i] * fZec15[i])))));
						}
						
					} 
				} 
			}
		}
	}
};


