
fs = 48000;
fc = 8;
fctr = 241;
fclw = 85;
fcmn = 400;
fcmx = 1251;

alpha = exp(-(fc/fs)*2*pi);

ltri = alpha - exp(-(fctr/fs)*2*pi);
llow = alpha - exp(-(fclw/fs)*2*pi);
lmin = alpha - exp(-(fcmn/fs)*2*pi);
lmax = alpha - exp(-(fcmx/fs)*2*pi);

b = [1,0];
ab = [1,-alpha];
a1 = [1,-(alpha - llow)];
a2 = [1,-(alpha - ltri)];
a5 = [1,-(alpha - lmin)];
a15 = [1,-(alpha - lmax)];

fvtool(b,ab,b,a1,b,a2,b,a5,b,a15);