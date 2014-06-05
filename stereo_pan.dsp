declare name "Stereo Panner";
import("filter.lib");

t = vslider("interpolation time", 0.01, 0, 0.01, 0.0001);
p = vslider("pan", 0.5, 0, 1, 0.01);

OutR(p,l,r) = sqrt(max(0,2*p-1))*l + sqrt(min(1,2*p))*r;

OutL(p,l,r) = sqrt(min(1,2-2*p))*l +sqrt(max(0,1-2*p))*r;

pan(p,l,r) = OutL(p,l,r)/2, OutR(p,l,r)/2: smooth(tau2pole(t)), smooth(tau2pole(t));

process = pan(p);