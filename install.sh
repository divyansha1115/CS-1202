#!/bin/bash

export CONDA_ALWAYS_YES="true"

conda create -n env_CT python=3.7
source activate env_CT
conda install pytorch==1.7.1 torchvision==0.8.2 torchaudio==0.7.2 cudatoolkit=10.2 -c pytorch
conda install -c conda-forge jupyterlab
conda install -c anaconda h5py
conda install -c anaconda yaml
conda install -c anaconda scikit-image
unset CONDA_ALWAYS_YES 
r=$CONDA_PREFIX
file="${r}/lib/python3.7/site-packages/radon.tar.gz"
dir="${r}/lib/python3.7/site-packages/"
wget -O $file https://gitlab.com/Apoorva99/radon/-/raw/master/radon.tar.gz\?inline\=false
tar -xvzf $file -C $dir
pip install pytorch-msssim

