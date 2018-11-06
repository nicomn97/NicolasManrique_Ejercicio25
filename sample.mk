#Make

sample.pdf: sample.dat sample.py
	python3 sample.py

sample.dat: sample
	./sample 10000 10.0 2.5 >> sample.dat

sample: sample.cpp
	g++ sample.cpp -o sample
