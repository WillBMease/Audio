
declare name 		"zita_rev1";

zita =component("effect.lib").zita_rev1;

B = *(1-checkbox("Bypass"));
BypassWet = B,B;
BypassDry = B+1 ;
a = _;
b = _;
//c = _;
// d = _;
//(x,y :BrypassDry: (c,d)) : (c, a :> +), (d,b :>+)
process(x,y) = (x,y: BypassWet :zita : (a,b)) : ((x: BypassDry), a :> +), ((y : BypassDry),b :>+);// : zita : _,_;
// For test inputs, see ./reverb_tester.dsp
