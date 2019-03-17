// generated from file '../dkbuild/luna//luna.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "clayjonesod_table.h"

namespace luna {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec3[2];
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fRec4[6];
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fRec2[5];
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "luna";
	name = N_("Luna");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<6; i++) fRec4[i] = 0;
	for (int i=0; i<5; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.91518471342251e-21 * fConst0);
	fConst2 = ((fConst0 * (0 - (1.51359130892551e-17 + fConst1))) - 6.49308844544986e-17);
	fConst3 = (3.01602073887241e-21 * fConst0);
	fConst4 = (1.43550366084209e-16 + (fConst0 * (1.56741729045639e-17 + fConst3)));
	fConst5 = (1.63454887428584e-19 * fConst0);
	fConst6 = (0 - (7.01778204780709e-19 + fConst5));
	fConst7 = (1.69108779997646e-19 * fConst0);
	fConst8 = (1.55082749173123e-18 + fConst7);
	fConst9 = (6.6009623450355e-19 * fConst0);
	fConst10 = (9.3329022942705e-17 + (fConst0 * (1.50139860082701e-17 + fConst9)));
	fConst11 = (1.6490612731071e-19 * fConst0);
	fConst12 = (7.08008966890097e-19 + fConst11);
	fConst13 = (1.70610218160866e-19 * fConst0);
	fConst14 = (0 - (1.56459656735634e-18 + fConst13));
	fConst15 = (6.65956921795455e-19 * fConst0);
	fConst16 = ((fConst0 * (0 - (1.51472882033139e-17 + fConst15))) - 9.41576479069689e-17);
	fConst17 = (1.17726822518737e-20 * fConst0);
	fConst18 = (8.63824473349776e-15 + (fConst0 * (1.39080908583442e-15 + (fConst0 * (6.13420994894003e-17 + fConst17)))));
	fConst19 = (3.55591939879928e-20 * fConst0);
	fConst20 = (fConst19 - 5.65403276237438e-17);
	fConst21 = (1.76069795474527e-21 * fConst0);
	fConst22 = (fConst21 - 2.81683136485915e-18);
	fConst23 = ((fConst0 * (1.51359130892551e-17 - fConst1)) - 6.49308844544986e-17);
	fConst24 = (1.43550366084209e-16 + (fConst0 * (fConst3 - 1.56741729045639e-17)));
	fConst25 = (7.01778204780709e-19 - fConst5);
	fConst26 = (fConst7 - 1.55082749173123e-18);
	fConst27 = (9.3329022942705e-17 + (fConst0 * (fConst9 - 1.50139860082701e-17)));
	fConst28 = (fConst11 - 7.08008966890097e-19);
	fConst29 = (1.56459656735634e-18 - fConst13);
	fConst30 = ((fConst0 * (1.51472882033139e-17 - fConst15)) - 9.41576479069689e-17);
	fConst31 = ((fConst0 * (1.39080908583442e-15 + (fConst0 * (fConst17 - 6.13420994894003e-17)))) - 8.63824473349776e-15);
	fConst32 = (1.166073885369e-20 * fConst0);
	fConst33 = (fConst32 - 3.02718261785102e-17);
	fConst34 = (1.20640829554896e-20 * fConst0);
	fConst35 = (3.13483458091279e-17 - fConst34);
	fConst36 = faustpower<2>(fConst0);
	fConst37 = (6.53819549714337e-19 * fConst0);
	fConst38 = (fConst37 - 1.40355640956142e-18);
	fConst39 = (6.76435119990582e-19 * fConst0);
	fConst40 = (3.10165498346247e-18 - fConst39);
	fConst41 = (2.6403849380142e-18 * fConst0);
	fConst42 = (3.00279720165401e-17 - fConst41);
	fConst43 = (6.5962450924284e-19 * fConst0);
	fConst44 = (1.41601793378019e-18 - fConst43);
	fConst45 = (6.82440872643464e-19 * fConst0);
	fConst46 = (fConst45 - 3.12919313471268e-18);
	fConst47 = (2.66382768718182e-18 * fConst0);
	fConst48 = (fConst47 - 3.02945764066278e-17);
	fConst49 = (4.70907290074947e-20 * fConst0);
	fConst50 = ((fConst36 * (1.22684198978801e-16 - fConst49)) - 1.72764894669955e-14);
	fConst51 = (1.88315295813938e-16 - (3.99574153077273e-18 * fConst36));
	fConst52 = ((3.9605774070213e-18 * fConst36) - 1.8665804588541e-16);
	fConst53 = (1.29861768908997e-16 - (1.7491108280535e-20 * fConst36));
	fConst54 = ((1.80961244332345e-20 * fConst36) - 2.87100732168417e-16);
	fConst55 = ((7.06360935112421e-20 * fConst36) - 2.78161817166884e-15);
	fConst56 = (3.02718261785102e-17 + fConst32);
	fConst57 = (0 - (3.13483458091279e-17 + fConst34));
	fConst58 = (3.10165498346247e-18 + fConst39);
	fConst59 = (1.40355640956142e-18 + fConst37);
	fConst60 = (0 - (3.00279720165401e-17 + fConst41));
	fConst61 = (0 - (1.41601793378019e-18 + fConst43));
	fConst62 = (3.12919313471268e-18 + fConst45);
	fConst63 = (3.02945764066278e-17 + fConst47);
	fConst64 = (1.72764894669955e-14 + (fConst36 * (0 - (1.22684198978801e-16 + fConst49))));
	fConst65 = (5.18258138597322e-24 * fConst0);
	fConst66 = (2.22472793122126e-13 + (fConst0 * (2.20256335157636e-14 + (fConst0 * (6.63058268701375e-16 + (fConst0 * (7.38613140421547e-18 + (fConst0 * (1.49019916891358e-20 + fConst65)))))))));
	fConst67 = (5.18258138597322e-26 * fConst0);
	fConst68 = (1.15750140376986e-10 + (fConst0 * (4.98509295718602e-12 + (fConst0 * (6.62887520745294e-14 + (fConst0 * (1.43759195629447e-16 + (fConst0 * (5.09586413480014e-20 + fConst67)))))))));
	fConst69 = (1.16645524759018e-20 * fConst0);
	fConst70 = ((fConst0 * (1.17892606474896e-16 + (fConst0 * (fConst69 - 1.75719073305268e-14)))) - 3.79114729912722e-17);
	fConst71 = (1.16645524759018e-22 * fConst0);
	fConst72 = ((fConst0 * (6.02914718028834e-14 + (fConst0 * (fConst71 - 2.90077430912532e-16)))) - 1.97249212285178e-14);
	fConst73 = (2.22472793122126e-13 + (fConst0 * ((fConst0 * (6.63058268701375e-16 + (fConst0 * ((fConst0 * (1.49019916891358e-20 - fConst65)) - 7.38613140421547e-18)))) - 2.20256335157636e-14)));
	fConst74 = (1.15750140376986e-10 + (fConst0 * ((fConst0 * (6.62887520745294e-14 + (fConst0 * ((fConst0 * (5.09586413480014e-20 - fConst67)) - 1.43759195629447e-16)))) - 4.98509295718602e-12)));
	fConst75 = (2.59129069298661e-23 * fConst0);
	fConst76 = (1.11236396561063e-12 + (fConst0 * ((fConst0 * (6.63058268701375e-16 + (fConst0 * (7.38613140421547e-18 + (fConst0 * (fConst75 - 4.47059750674074e-20)))))) - 6.60769005472907e-14)));
	fConst77 = (2.59129069298661e-25 * fConst0);
	fConst78 = (5.78750701884929e-10 + (fConst0 * ((fConst0 * (6.62887520745294e-14 + (fConst0 * (1.43759195629447e-16 + (fConst0 * (fConst77 - 1.52875924044004e-19)))))) - 1.49552788715581e-11)));
	fConst79 = (5.18258138597322e-23 * fConst0);
	fConst80 = (2.22472793122126e-12 + (fConst0 * ((fConst0 * ((fConst0 * (1.47722628084309e-17 + (fConst0 * (2.98039833782716e-20 - fConst79)))) - 1.32611653740275e-15)) - 4.40512670315271e-14)));
	fConst81 = (5.18258138597322e-25 * fConst0);
	fConst82 = (1.15750140376986e-09 + (fConst0 * ((fConst0 * ((fConst0 * (2.87518391258893e-16 + (fConst0 * (1.01917282696003e-19 - fConst81)))) - 1.32577504149059e-13)) - 9.97018591437205e-12)));
	fConst83 = (2.22472793122126e-12 + (fConst0 * (4.40512670315271e-14 + (fConst0 * ((fConst0 * ((fConst0 * (2.98039833782716e-20 + fConst79)) - 1.47722628084309e-17)) - 1.32611653740275e-15)))));
	fConst84 = (1.15750140376986e-09 + (fConst0 * (9.97018591437205e-12 + (fConst0 * ((fConst0 * ((fConst0 * (1.01917282696003e-19 + fConst81)) - 2.87518391258893e-16)) - 1.32577504149059e-13)))));
	fConst85 = (1.11236396561063e-12 + (fConst0 * (6.60769005472907e-14 + (fConst0 * (6.63058268701375e-16 + (fConst0 * ((fConst0 * (0 - (4.47059750674074e-20 + fConst75))) - 7.38613140421547e-18)))))));
	fConst86 = (5.78750701884929e-10 + (fConst0 * (1.49552788715581e-11 + (fConst0 * (6.62887520745294e-14 + (fConst0 * ((fConst0 * (0 - (1.52875924044004e-19 + fConst77))) - 1.43759195629447e-16)))))));
	fConst87 = (3.49936574277054e-20 * fConst0);
	fConst88 = ((fConst0 * (1.17892606474896e-16 + (fConst0 * (1.75719073305268e-14 - fConst87)))) - 1.13734418973816e-16);
	fConst89 = (3.49936574277054e-22 * fConst0);
	fConst90 = ((fConst0 * (6.02914718028834e-14 + (fConst0 * (2.90077430912532e-16 - fConst89)))) - 5.91747636855535e-14);
	fConst91 = (2.33291049518036e-20 * fConst0);
	fConst92 = ((fConst0 * ((fConst0 * (3.51438146610535e-14 + fConst91)) - 2.35785212949793e-16)) - 7.58229459825443e-17);
	fConst93 = (2.33291049518036e-22 * fConst0);
	fConst94 = ((fConst0 * ((fConst0 * (5.80154861825064e-16 + fConst93)) - 1.20582943605767e-13)) - 3.94498424570356e-14);
	fConst95 = (7.58229459825443e-17 + (fConst0 * ((fConst0 * (fConst91 - 3.51438146610535e-14)) - 2.35785212949793e-16)));
	fConst96 = (3.94498424570356e-14 + (fConst0 * ((fConst0 * (fConst93 - 5.80154861825064e-16)) - 1.20582943605767e-13)));
	fConst97 = (1.13734418973816e-16 + (fConst0 * (1.17892606474896e-16 + (fConst0 * (0 - (1.75719073305268e-14 + fConst87))))));
	fConst98 = (5.91747636855535e-14 + (fConst0 * (6.02914718028834e-14 + (fConst0 * (0 - (2.90077430912532e-16 + fConst89))))));
	fConst99 = (3.79114729912722e-17 + (fConst0 * (1.17892606474896e-16 + (fConst0 * (1.75719073305268e-14 + fConst69)))));
	fConst100 = (1.97249212285178e-14 + (fConst0 * (6.02914718028834e-14 + (fConst0 * (2.90077430912532e-16 + fConst71)))));
	fConst101 = (5.65403276237438e-17 + fConst19);
	fConst102 = (2.81683136485915e-18 + fConst21);
	fConst103 = (1.42236775951971e-19 * fConst0);
	fConst104 = (1.13080655247488e-16 - fConst103);
	fConst105 = (7.04279181898107e-21 * fConst0);
	fConst106 = (5.6336627297183e-18 - fConst105);
	fConst107 = (5.6336627297183e-18 + fConst105);
	fConst108 = (0 - (1.13080655247488e-16 + fConst103));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.00036676987543879196 * (exp((3 * (1 - double(fslider1)))) - 1));
	double 	fSlow2 = (0.00036676987543879196 * (exp((3 * double(fslider2))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp0 = (1.62327211136246e-14 + (fConst0 * (fConst18 + ((fRec1[0] * (1.75444551195177e-16 + ((fRec1[0] * ((fConst0 * (fConst16 + (fRec0[0] * ((fConst0 * (fConst14 + (fConst12 * fRec0[0]))) - 3.54004483445048e-18)))) - 1.77002241722524e-16)) + (fConst0 * (fConst10 + (fRec0[0] * (3.50889102390355e-18 + (fConst0 * (fConst8 + (fConst6 * fRec0[0])))))))))) + (fRec0[0] * (3.24654422272493e-16 + (fConst0 * (fConst4 + (fConst2 * fRec0[0])))))))));
		double fTemp1 = (fConst0 * ((0 - (6.16518243319966e-19 * fRec0[0])) - 3.05266314653575e-20));
		double fTemp2 = (fConst0 * (2.9036931849848e-20 + (5.86432153045952e-19 * fRec0[0])));
		fRec3[0] = (fSlow2 + (0.993 * fRec3[1]));
		double fTemp3 = (fConst68 + (fConst66 * fRec3[0]));
		fRec4[0] = ((double)input0[i] - ((((((fRec4[1] * (fConst86 + (fConst85 * fRec3[0]))) + (fRec4[2] * (fConst84 + (fConst83 * fRec3[0])))) + (fRec4[3] * (fConst82 + (fConst80 * fRec3[0])))) + (fRec4[4] * (fConst78 + (fConst76 * fRec3[0])))) + (fRec4[5] * (fConst74 + (fConst73 * fRec3[0])))) / fTemp3));
		fRec2[0] = (clayjonesodclip((fConst0 * (((((((fRec4[0] * (fConst100 + (fConst99 * fRec3[0]))) + (fRec4[1] * (fConst98 + (fConst97 * fRec3[0])))) + (fRec4[2] * (fConst96 + (fConst95 * fRec3[0])))) + (fRec4[3] * (fConst94 + (fConst92 * fRec3[0])))) + (fRec4[4] * (fConst90 + (fConst88 * fRec3[0])))) + (fRec4[5] * (fConst72 + (fConst70 * fRec3[0])))) / fTemp3))) - (((((fRec2[1] * (6.49308844544986e-14 + (fConst0 * (fConst64 + ((fRec1[0] * (3.50889102390355e-16 + ((fRec1[0] * ((fConst36 * (fConst63 + (fRec0[0] * (fConst62 + (fConst61 * fRec0[0]))))) - 3.54004483445048e-16)) + (fConst36 * (fConst60 + (fRec0[0] * ((fConst59 * fRec0[0]) - fConst58))))))) + (fRec0[0] * (6.49308844544986e-16 + (fConst36 * (fConst57 + (fConst56 * fRec0[0])))))))))) + (fRec2[2] * (9.73963266817479e-14 + (fConst36 * (fConst55 + ((fRec0[0] * (fConst54 + (fConst53 * fRec0[0]))) + (fRec1[0] * (fConst52 + ((fRec1[0] * (fConst51 + (fRec0[0] * (7.08008966890097e-18 + (fConst36 * ((9.8943676386426e-19 * fRec0[0]) - 1.0236613089652e-18)))))) + (fRec0[0] * ((fConst36 * (1.01465267998587e-18 + (0 - (9.80729324571506e-19 * fRec0[0])))) - 7.01778204780709e-18))))))))))) + (fRec2[3] * (6.49308844544986e-14 + (fConst0 * (fConst50 + ((fRec1[0] * (((fRec1[0] * (3.54004483445048e-16 + (fConst36 * (fConst48 + (fRec0[0] * (fConst46 + (fConst44 * fRec0[0]))))))) + (fConst36 * (fConst42 + (fRec0[0] * (fConst40 + (fConst38 * fRec0[0])))))) - 3.50889102390355e-16)) + (fRec0[0] * ((fConst36 * (fConst35 + (fConst33 * fRec0[0]))) - 6.49308844544986e-16)))))))) + (fRec2[4] * (1.62327211136246e-14 + (fConst0 * (fConst31 + ((fRec1[0] * (((fRec1[0] * (1.77002241722524e-16 + (fConst0 * (fConst30 + (fRec0[0] * ((fConst0 * (fConst29 + (fConst28 * fRec0[0]))) - 3.54004483445048e-18)))))) + (fConst0 * (fConst27 + (fRec0[0] * (3.50889102390355e-18 + (fConst0 * (fConst26 + (fConst25 * fRec0[0])))))))) - 1.75444551195177e-16)) + (fRec0[0] * ((fConst0 * (fConst24 + (fConst23 * fRec0[0]))) - 3.24654422272493e-16)))))))) / fTemp0));
		double fTemp4 = (fConst0 * (1.2210652586143e-19 + (2.46607297327987e-18 * fRec0[0])));
		double fTemp5 = (fConst0 * (0 - (1.16147727399392e-19 + (2.34572861218381e-18 * fRec0[0]))));
		output0[i] = (FAUSTFLOAT)(fConst36 * ((((fConst0 * ((fRec2[1] * (((fConst108 * fRec0[0]) + (fRec1[0] * (((fRec1[0] * (5.98561401281519e-19 + fTemp4)) + fTemp5) - 5.69351604898981e-19))) - fConst107)) + (fRec2[3] * (fConst106 + ((fConst104 * fRec0[0]) + (fRec1[0] * (5.69351604898981e-19 + (fTemp5 + (fRec1[0] * (fTemp4 - 5.98561401281519e-19)))))))))) + ((fRec2[0] * (2.74467609823998e-17 + (fConst0 * (fConst102 + ((fConst101 * fRec0[0]) + (fRec1[0] * (2.84675802449491e-19 + ((fRec1[0] * (fTemp1 - 2.9928070064076e-19)) + fTemp2)))))))) + (fRec2[2] * ((fConst36 * (1.05641877284716e-20 + ((2.13355163927957e-19 * fRec0[0]) + (fRec1[0] * (1.74221591099088e-19 + ((3.51859291827571e-18 * fRec0[0]) + (fRec1[0] * (0 - (1.83159788792145e-19 + (3.6991094599198e-18 * fRec0[0])))))))))) - 5.48935219647997e-17)))) + (fRec2[4] * (2.74467609823998e-17 + (fConst0 * (fConst22 + ((fConst20 * fRec0[0]) + (fRec1[0] * ((fTemp2 + (fRec1[0] * (2.9928070064076e-19 + fTemp1))) - 2.84675802449491e-19)))))))) / fTemp0));
		// post processing
		for (int i=4; i>0; i--) fRec2[i] = fRec2[i-1];
		for (int i=5; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec3[1] = fRec3[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   GAIN, 
   TONE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace luna
