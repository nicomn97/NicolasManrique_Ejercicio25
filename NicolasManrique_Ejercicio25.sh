#!/bin/bash

#PBS -l nodes=1:intel:ppn=1,mem=16gb
#PBS -l walltime=4:00
#PBS -M n.manrique10@uniandes.edu.co
#PBS -m abe
#PBS -N nm97_Ej25
#PBS -j oe
#PBS -o nicomn97Out.txt

git clone https://github.com/nicomn97/NicolasManrique_Ejercicio25.git
cd NicolasManrique_Ejercicio25/
module load anaconda/python3
module load gcc/4.9.4
