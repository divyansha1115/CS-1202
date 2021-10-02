#!/usr/bin/python3

# Set first line as the location of Python interpreter

####################################################################################################################
#   ______   __                            __              __                         
#  /      \ /  |                          /  |            /  |                        
# /$$$$$$  |$$ |____    _______   ______  $$ | __    __  _$$ |_     ______    ______  
# $$ |__$$ |$$      \  /       | /      \ $$ |/  |  /  |/ $$   |   /      \  /      \ 
# $$    $$ |$$$$$$$  |/$$$$$$$/ /$$$$$$  |$$ |$$ |  $$ |$$$$$$/   /$$$$$$  |/$$$$$$  |
# $$$$$$$$ |$$ |  $$ |$$      \ $$ |  $$ |$$ |$$ |  $$ |  $$ | __ $$    $$ |$$ |  $$/ 
# $$ |  $$ |$$ |__$$ | $$$$$$  |$$ \__$$ |$$ |$$ \__$$ |  $$ |/  |$$$$$$$$/ $$ |      
# $$ |  $$ |$$    $$/ /     $$/ $$    $$/ $$ |$$    $$/   $$  $$/ $$       |$$ |      
# $$/   $$/ $$$$$$$/  $$$$$$$/   $$$$$$/  $$/  $$$$$$/     $$$$/   $$$$$$$/ $$/          
#
# Create a script which includes and runs a function defined another .py file from another folder.
# The include path must be relative.
# This result must be independent on the folder the script is executed from.
#
# To better explain let's assume the following structure:
# 
#   |
#   └── python
#       ├── lib
#       |   └── dummy.py
#       ├── exercise1.py
#       └── exercise2.py
#   
# This script is "exercise2.py". It should execute the run function defined in ./lib/dummy.py independently of
# the path from which it gets called.
#
# E.g. one should run the script as:
#  * ./open-forbc-candidate-test/python/exercise2.py when at open-forbc-candidate-test
#  * ./../python/exercise2.py when at open-forbc-candidate-test/c++
#  * <abs path to this repo>/open-forbc-candidate-test/python/exercise2.py for anywhere
#
# And always get the same result.
#
####################################################################################################################

from lib.dummy import run

if __name__ == "__main__":
  run()