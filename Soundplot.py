#https://publish.illinois.edu/augmentedlistening/tutorials/music-processing/tutorial-1-introduction-to-audio-processing-in-python/
import numpy as np
import matplotlib.pyplot as plt
from scipy.io.wavfile import read, write
from IPython.display import Audio
from numpy.fft import fft, ifft
#%matplotlib inline 
Fs, data = read("beautiful_life-ace_of_base.wav")
#data = data[:,0]
print("Sampling Frequency is", Fs)
Audio(data, rate = Fs)

plt.figure()
plt.plot(data)
plt.xlabel('Sample Index')
plt.ylabel('Amplitude')
plt.title('Waveform of Test Audio')
plt.show()

write('output.wav',Fs, data)