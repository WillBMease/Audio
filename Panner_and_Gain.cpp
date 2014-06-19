//-----------------------------------------------------
//
// Code generated with Faust 0.9.67 (http://faust.grame.fr)
//-----------------------------------------------------
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif  

typedef long double quad;
/* link with  */
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

class mydsp : public dsp {
  private:
	FAUSTFLOAT 	fslider0;
	float 	fConst0;
	FAUSTFLOAT 	fslider1;
	float 	fRec0[2];
	FAUSTFLOAT 	fslider2;
  public:
	static void metadata(Meta* m) 	{ 
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
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/version", "1.0");
		m->declare("math.lib/license", "LGPL with exception");
	}

	virtual int getNumInputs() 	{ return 1; }
	virtual int getNumOutputs() 	{ return 2; }
	static void classInit(int samplingFreq) {
	}
	virtual void instanceInit(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fslider0 = 0.001f;
		fConst0 = (1.0f / float(min(192000, max(1, fSamplingFreq))));
		fslider1 = 0.5f;
		for (int i=0; i<2; i++) fRec0[i] = 0;
		fslider2 = 0.0f;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("Panner_and_Gain");
		interface->declare(&fslider2, "unit", "dB");
		interface->addVerticalSlider("gain", &fslider2, 0.0f, 0.0f, 1.0f, 0.01f);
		interface->addHorizontalSlider("interpolation time", &fslider0, 0.001f, 0.0001f, 0.01f, 0.0001f);
		interface->addHorizontalSlider("pan", &fslider1, 0.5f, 0.0f, 1.0f, 0.01f);
		interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fSlow0 = expf((0 - (fConst0 / float(fslider0))));
		float 	fSlow1 = (float(fslider1) * (1.0f - fSlow0));
		float 	fSlow2 = float(fslider2);
		FAUSTFLOAT* input0 = input[0];
		FAUSTFLOAT* output0 = output[0];
		FAUSTFLOAT* output1 = output[1];
		for (int i=0; i<count; i++) {
			fRec0[0] = ((fSlow0 * fRec0[1]) + fSlow1);
			float fTemp0 = (float)input0[i];
			output0[i] = (FAUSTFLOAT)(fSlow2 * (fTemp0 * sqrtf((1 - fRec0[0]))));
			output1[i] = (FAUSTFLOAT)(fSlow2 * (fTemp0 * sqrtf(fRec0[0])));
			// post processing
			fRec0[1] = fRec0[0];
		}
	}
};


