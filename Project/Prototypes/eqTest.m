
[x,sr] = audioread('C 5 Octaves.wav');

x = mean(x,2);

[X,F,T] = getFD(x,sr,1024,hann(2048));

X = abs(X);
X = max(X,[],2);

%%
%types = {'BP1','BP2','LP','HP','NC','AP','PK','LS1','HS1','LS2','HS2'};

% [b1, a1] = getBiquadCoeff('LS2', sr, 120, 0.5, 4);
[b1, a1] = getBiquadCoeff('LS2', sr, 80, 0.5, 12);
[r1,~] = resp(b1,a1,F,sr);

[b2, a2] = getBiquadCoeff('HS2', sr, 10000, 0.6, 24);
[r2,~] = resp(b2,a2,F,sr);

r = r1.*r2;

y = filter(b1,a1,x);
y = filter(b2,a2,y);
audiowrite('Corrected.wav',y,sr,'bitspersample',24);

%%
subplot(2,1,1)
% pltfun = @semilogy;
pltfun = @loglog;

pltfun(F,X); hold on
pltfun(F,r.*X);
pltfun(F,r);
pltfun(F, 1./F,'--');
hold off;

xlim([20,20000]);
ylim([0.000001, 20]);
grid on

subplot(2,1,2)
plot(x); hold on
plot(y); hold off
grid on
