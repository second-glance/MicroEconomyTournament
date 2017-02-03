# -*- coding: utf-8 -*-
"""
Created on Fri Feb  3 22:40:21 2017

@author: clem
"""

class AccountingStatements(object):
    """
    The AccountingStatments records the operations of an agent
    """
    
    ASSETS = set(['Cash','Factory','Commodity','WIP','Goods'])
    LIABILITIES = set([''])
    EQUITIES = set(['Common Equity','P&L'])
    
    def __init__(self,initialEquity):
        self.Assets = {}
        self.Liabilities = {}
        self.Equities = {}
        self._ResetStatements()
        self.Incorporate(initialEquity)
    
    def _ResetStatements(self):
        for assets in AccountingStatements.ASSETS:
            self.Assets[assets] = 0
        for liabilities in AccountingStatements.LIABILITIES:
            self.Liabilities[liabilities] = 0
        for equities in AccountingStatements.EQUITIES:
            self.Equities[equities] = 0
    
    def Incorporate(self,initialEquity):
        self.Assets['Cash'] = initialEquity
        self.Equities['Common Equity'] = initialEquity
    

        
    