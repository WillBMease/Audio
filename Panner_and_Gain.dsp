import("filter.lib");

t = hslider("interpolation time", 0.001, 0, 0.01, 0.0001);
c = hslider("pan", 0.5, 0, 1, 0.01) : smooth(tau2pole(t));

pan= _ <: *(1-c:sqrt),*(c:sqrt);

amplifier = *(vslider("gain[unit:dB]",0,0,1,0.01));

process = amplifier : pan;