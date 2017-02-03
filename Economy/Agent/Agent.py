# -*- coding: utf-8 -*-
"""
Created on Fri Feb  3 22:36:19 2017

@author: clem
"""

from AccountingStatements import *

class Agent(object):
    
    def __init__(self,name,initialEquity):
        self.Name = name
        self.AccountingStatments = AccountingStatements(initialEquity)
        
    def Run(self):
        raise NotImplementedError("{} Run method has not been implemented".format(self))
        
    def WarmUp(self):
        raise NotImplementedError("{} WarmUp method has not been implemented".format(self)) 
        
    def __repr__(self):
        return self.Name
        
a = Agent('Clem inc.',1000)
        