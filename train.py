#!/usr/bin/env python
# coding: utf-8

# In[1]:


from gym import Env
import gym
from gym.spaces import Discrete, Box
import numpy as np
import random
import cv2
import matplotlib.pyplot as plt
import os
from PIL import Image
import time
from PIL import Image, ImageDraw

from array2gif import write_gif



env = gym.make("gym_pathfinder:gym-pathfinder-v1")
from stable_baselines.common.policies import MlpPolicy
from stable_baselines.common.vec_env import DummyVecEnv
from stable_baselines import PPO2


episodes = 1000
score_i = 0 
for episode in range(1, episodes+1):
    state = env.reset()
    done = False
    
#     env.render()
    
    while not done:
        action = env.action_space.sample()
        observation,reward, done, info = env.step(action)
    score_i+=reward
    
#     env.render()
    
cv2.destroyWindow("image")

model = PPO2(MlpPolicy, env, verbose=1)
model.learn(total_timesteps=10000)

# obs = env.reset()
# done = False
# env.render()
# for i in range(10):
#     action, _states = model.predict(obs)
#     print('Action: ',action)
#     print('Label: ',env.label)
#     obs, rewards, done, info = env.step(action)
#     env.render()

episodes = 1000
score_f = 0 
for episode in range(1, episodes+1):
    obs = env.reset()
    done = False
    
#     env.render()
    
    while not done:
#         action = env.action_space.sample()
        action, _states = model.predict(obs)
        observation,reward, done, info = env.step(action)
    score_f+=reward
#         score+=reward
    
#     env.render()
    
    
# write_gif(env.gif, 'pathfinder.gif', fps=1)
print('Before Train: ', score_i)
print('After Train: ', score_f)
